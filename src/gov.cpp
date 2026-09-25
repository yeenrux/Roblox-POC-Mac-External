#include "dm.hpp"

namespace gov {

uptr dm(uptr base) {
    // fake dm to real dm method
    // the other methods i've used in the past for macos was shit

    auto fake = memory::read<uptr>(base + Offsets::FakeDataModel::Pointer);
    if (!memory::valid(fake))
        return 0;

    auto dm = memory::read<uptr>(fake + Offsets::FakeDataModel::RealDataModel);
    return memory::valid(dm) ? dm : 0;
}

uptr playerCharacter(uptr dataModel) {
    if (!memory::valid(dataModel))
        return 0;

    uptr players = instance::findFirstChild(dataModel, "Players"); // the first instance is always localplayer

    uptr localPlayer = memory::read<uptr>(
        players + Offsets::Player::LocalPlayer
    );

    return memory::read<uptr>(localPlayer + Offsets::Player::ModelInstance);
}

}
