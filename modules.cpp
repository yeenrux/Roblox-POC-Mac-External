#include "dm.hpp"

// you can put your functions and shit here

namespace modules {

// reading
float walkspeed(uptr humanoid) {
    return memory::read<float>(humanoid + Offsets::Humanoid::Walkspeed);
}

// writing
bool walkspeed(uptr humanoid, float speed) {
    if (!memory::valid(humanoid))
        return false;

    memory::write(humanoid + Offsets::Humanoid::Walkspeed, speed);
    return memory::write(humanoid + Offsets::Humanoid::WalkspeedCheck, speed);
}

}
