#!/bin/bash
cd "$(dirname "$0")"
clang++ -std=c++20 -O2 -Wall -Wno-comment main.cpp gov.cpp memory.cpp instance.cpp modules.cpp -o external
codesign --force --sign - --entitlements entitlements.plist --timestamp=none external
codesign --force --sign - --options runtime --entitlements entitlements.plist --timestamp=none /Applications/Roblox.app