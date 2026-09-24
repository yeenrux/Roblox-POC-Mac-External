#include <iostream>
#include <cstring>
#include <libproc.h>
#include <mach-o/dyld_images.h>
#include "dm.hpp"

namespace gov {

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

    memory::setTask(t);
    return true;
}

// image base addr
uptr base() {
    task_t task = memory::machTask();
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

// datamodel
uptr dm(uptr base) {
    // fake dm to real dm method
    // the other methods i've used in the past for macos was shit

    auto fake = memory::read<uptr>(base + Offsets::FakeDataModel::Pointer);
    if (!memory::valid(fake))
        return 0;

    auto dm = memory::read<uptr>(fake + Offsets::FakeDataModel::RealDataModel);
    return memory::valid(dm) ? dm : 0;
}

}
