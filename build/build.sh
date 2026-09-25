#!/bin/bash
cd "$(dirname "$0")/.."
mkdir -p build
clang++ -std=c++20 -O2 -Wall -Wno-comment -Iinclude -Isrc/update \
    main.cpp src/gov.cpp src/memory/memory.cpp src/memory/instance.cpp src/modules.cpp \
    -o build/external
codesign --force --sign - --entitlements signing/entitlements.plist --timestamp=none build/external
codesign --force --sign - --options runtime --entitlements signing/entitlements.plist --timestamp=none /Applications/Roblox.app
