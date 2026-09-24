#include "dm.hpp"

namespace instance {

std::string name(uptr inst) {
    auto base = memory::read<uptr>(inst + Offsets::Instance::NameContainer);
    if (!memory::valid(base))
        return {};

    return memory::readString(base + Offsets::Instance::Name);
}

std::string className(uptr inst) {
    auto d = memory::read<uptr>(inst + Offsets::Instance::ClassDescriptor);
    if (!memory::valid(d))
        return {};

    auto ptr = memory::read<uptr>(d + Offsets::Instance::ClassName);
    if (!memory::valid(ptr))
        return {};

    return memory::readString(ptr);
}

std::vector<uptr> children(uptr inst) {
    std::vector<uptr> out;

    auto list = memory::read<uptr>(inst + Offsets::Instance::ChildrenStart);
    if (!memory::valid(list))
        return out;

    auto start = memory::read<uptr>(list);
    auto end = memory::read<uptr>(list + 0x8);

    if (!memory::valid(start) || !memory::valid(end) || end <= start ||
        end - start > 0x200000) {
        return out;
    }

    for (uptr at = start; at < end; at += 0x10) {
        uptr child = memory::read<uptr>(at);
        if (memory::valid(child))
            out.push_back(child);
    }

    return out;
}

uptr findFirstChild(uptr inst, const std::string& wanted) {
    for (auto child : children(inst)) {
        if (name(child) == wanted)
            return child;
    }

    return 0;
}

static uptr findOne(uptr inst, const std::string& want) {
    for (auto child : children(inst)) {
        if (name(child) == want || className(child) == want)
            return child;

        if (auto found = findOne(child, want))
            return found;
    }

    return 0;
}

// btw you can input shit like "Workspace.example.example"
uptr walk(uptr inst, const std::string& path) {
    uptr cur = inst;
    size_t i = 0;

    while (i < path.size()) {
        auto dot = path.find('.', i);
        auto step = path.substr(i, dot == std::string::npos ? std::string::npos : dot - i);

        cur = findOne(cur, step);
        if (!cur)
            return 0;

        if (dot == std::string::npos)
            break;
        i = dot + 1;
    }

    return cur;
}

uptr playerCharacter(uptr dataModel) {
    if (!memory::valid(dataModel))
        return 0;

    uptr players = findFirstChild(dataModel, "Players"); // the first instance is always localplayer

    uptr localPlayer = memory::read<uptr>(
        players + Offsets::Player::LocalPlayer
    );

    return memory::read<uptr>(localPlayer + Offsets::Player::ModelInstance);
}

}
