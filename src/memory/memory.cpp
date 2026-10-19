#include <iostream>
#include <cstring>
#include <libproc.h>
#include <mach/mach_vm.h>
#include <mach-o/dyld_images.h>
#include "dm.hpp"

namespace memory {

static task_t task = MACH_PORT_NULL;

void setTask(task_t t) {
    task = t;
}

task_t machTask() {
    return task;
}

bool valid(uptr addr) {
    return addr > 0x400000 && addr < 0x7FFFFFFFFFFFFFFF &&
           addr != 0xCCCCCCCCCCCCCCCC;
}

bool read(uptr addr, void* out, size_t size) {
    if (!valid(addr) || task == MACH_PORT_NULL)
        return false;

    mach_vm_size_t got = 0;
    kern_return_t kr = mach_vm_read_overwrite(
        task,
        addr,
        size,
        reinterpret_cast<mach_vm_address_t>(out),
        &got
    );

    return kr == KERN_SUCCESS && got == size;
}

bool write(uptr addr, const void* in, size_t size) {
    if (!valid(addr) || task == MACH_PORT_NULL)
        return false;

    kern_return_t kr = mach_vm_write(
        task,
        addr,
        reinterpret_cast<vm_offset_t>(in),
        static_cast<mach_msg_type_number_t>(size)
    );

    return kr == KERN_SUCCESS;
}

std::string readString(uptr addr) {
    if (!valid(addr))
        return {};

    uint8_t flag = read<uint8_t>(addr + Offsets::Misc::StringFlag);
    uptr data = addr;
    int64_t len = flag;

    if (flag & 0x80) {
        data = read<uptr>(addr);
        len = read<int64_t>(addr + Offsets::Misc::StringLength);
    }

    if (len <= 0 || len > 256)
        return {};
    if (data != addr && !valid(data))
        return {};

    std::string out(static_cast<size_t>(len), '\0');
    if (!read(data, out.data(), static_cast<size_t>(len)))
        return {};

    return out;
}

// this looks for the first process titled "RobloxPlayer" so if you're trying to get every pid for roblox then u gotta add that yourself
bool attach() {
    pid_t pids[4096];
    int n = proc_listpids(PROC_ALL_PIDS, 0, pids, sizeof(pids)) / sizeof(pid_t);

    pid_t pid = 0;
    for (int i = 0; i < n; i++) {
        char name[256] = {0};
        proc_name(pids[i], name, sizeof(name));

        if (strcmp(name, "RobloxPlayer") == 0) {
            pid = pids[i];
            break;
        }
    }

    if (!pid)
        return false;

    task_t t;
    kern_return_t kr = task_for_pid(mach_task_self(), pid, &t);
    if (kr != KERN_SUCCESS) {
        std::cerr << "couldnt attach: " << mach_error_string(kr) << '\n'; // if ur getting this then u most likely didn't codesign roblox.app
        return false;
    }

    setTask(t);
    return true;
}

uptr base() {
    if (task == MACH_PORT_NULL)
        return 0;

    task_dyld_info_data_t dyld;
    mach_msg_type_number_t count = TASK_DYLD_INFO_COUNT;

    kern_return_t kr = task_info(
        task,
        TASK_DYLD_INFO,
        reinterpret_cast<task_info_t>(&dyld),
        &count
    );

    if (kr != KERN_SUCCESS)
        return 0;

    dyld_all_image_infos all{};
    if (!memory::read(dyld.all_image_info_addr, &all, sizeof(all)))
        return 0;

    dyld_image_info first{};
    if (!memory::read(reinterpret_cast<uptr>(all.infoArray), &first, sizeof(first)))
        return 0;

    return reinterpret_cast<uptr>(first.imageLoadAddress);
}

}
