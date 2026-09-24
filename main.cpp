#include <iostream>
#include "dm.hpp"

// this is where we actually do shit

auto walkspeedValue = 167.6f; // example value

int main() {

    gov::attach();

    auto base = gov::base();
    auto dm = gov::dm(base);
    auto character = instance::playerCharacter(dm);
    auto humanoid = instance::walk(character, "Humanoid");

    std::cout << std::hex;
    std::cout << "DataModel: 0x" << dm << '\n';
    std::cout << "Character: 0x" << character << '\n';
    std::cout << std::dec;
    std::cout << "current walkspeed: " << modules::walkspeed(humanoid) << '\n';

    modules::walkspeed(humanoid, walkspeedValue); // writing walkspeed
    std::cout << "walkspeed was set to: " << modules::walkspeed(humanoid) << '\n';

    return 0;
}