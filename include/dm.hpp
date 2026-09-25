#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <mach/mach.h>
#include "offsets.hpp"

namespace memory {

using uptr = uintptr_t;

bool valid(uptr addr);
bool read(uptr addr, void* out, size_t size);
bool write(uptr addr, const void* in, size_t size);
std::string readString(uptr addr);
void setTask(task_t t);
task_t machTask();

bool attach();
uptr base();

template <typename T>
T read(uptr addr) {
    T v{};
    memory::read(addr, &v, sizeof(T));
    return v;
}

template <typename T>
bool write(uptr addr, T v) {
    return memory::write(addr, &v, sizeof(T));
}

}

namespace gov {

using uptr = uintptr_t;

uptr dm(uptr base);
uptr playerCharacter(uptr dataModel);

}

namespace instance {

using uptr = uintptr_t;

std::string name(uptr inst);
std::string className(uptr inst);
std::vector<uptr> children(uptr inst);
uptr findFirstChild(uptr inst, const std::string& wanted);
uptr walk(uptr inst, const std::string& path);

}

namespace modules {

using uptr = uintptr_t;

float walkspeed(uptr humanoid);
bool walkspeed(uptr humanoid, float speed);

}
