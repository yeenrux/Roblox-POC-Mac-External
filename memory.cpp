#include <mach/mach_vm.h>
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

}
