/*
----------------------------------------------------------------------------------------------------
___________________________________________
     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠒⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀      =========================================================
     ⠀⠀⠀⠀⠀⢠⠶⠚⠛⠲⠦⣤⣀⡤⠏⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀      =========================================================
     ⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⣀⣀⣀⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀      =======   EXTERNAL OFFSETS DUMPER FOR MAC BY: @yeenrux <3
     ⠀⠀⢀⡴⠒⢦⡉⢲⣦⡀⢠⠟⠀⠀⠀⠀⠀⠀⣠⣶⡆⠀⠀⠀⢀⠀⠀⠀      =========================================================
     ⠀⣰⠋⠀⠀⠀⢹⠊⢠⠔⠛⢢⡀⠀⠀⠀⢠⣾⣿⣿⣿⠀⢀⣴⣿⣆⠀⠀      =========================================================
     ⠀⢿⠀⠀⠀⠀⠸⡀⠈⢤⠤⠼⠁⠀⠀⣰⣿⣿⣿⣿⣿⠀⣾⣿⣿⣿⡀⠀      =========================================================
     ⠀⠈⠣⣀⡀⠀⠀⠀⠀⠀⣆⠀⣀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀      =======
     ⠀⠀⠀⣳⠀⠀⠀⡴⠞⢲⡗⠀⠈⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀      =======   version-3b0126187faf4c64 (ARM64)
     ⢰⠳⠚⠁⠊⢰⠛⠣⠀⠘⠀⠐⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀      =======
     ⢸⠀⠀⠀⠀⠘⠦⢼⡆⠀⠀⠀⠀⣀⣠⣜⢿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣧⠀      =======   Total Dumped Offsets: 32
     ⠈⠳⠤⢴⠀⡴⠤⠞⣀⡤⠐⠀⠉⠀⠀⣸⠖⢩⣾⣶⣿⣿⣿⣷⠈⠁⠈⠁      =======   Dumped At: 11:25 10/21/26 (CDT)
     ⠀⠀⠀⠈⠳⣇⣴⣾⣧⢄⠀⠀⢀⡠⠈⠁⠀⣾⢻⣿⣿⣿⣿⣿⡇⠀⠀⠀      =======   Dumped in: 2.13s
     ⠀⠀⠀⠀⠀⠀⠳⣿⣿⣷⣀⠄⠈⠀⠀⠀⠘⠁⠸⣿⣿⣿⣿⡏⠃⠀⠀⠀      =======
     ⠀⠀⠀⠀⠀⠀⠀⠙⠿⠝⠁⠀⠀⠀⠀⠀⠀⠀⠀⠋⠉⠙⢿⡧⠀⠀⠀⠀      =========================================================
     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀      =========================================================
‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
----------------------------------------------------------------------------------------------------
*/

#pragma once

#include <cstdint>

namespace Offsets {

    namespace BasePart {
        inline constexpr uintptr_t LocalTransparencyModifier = 0xe8;
        inline constexpr uintptr_t Primitive = 0x168;
        inline constexpr uintptr_t ReadableTransparency = 0x110;
    }

    namespace Camera {
        inline constexpr uintptr_t CFrame = 0xb8;
        inline constexpr uintptr_t FieldOfView = 0x120;
        inline constexpr uintptr_t Viewport = 0x2a4;
        inline constexpr uintptr_t ViewportSize = 0x2bc;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x70cf978;
        inline constexpr intptr_t RealDataModel = -0xe0;
    }

    namespace Humanoid {
        inline constexpr uintptr_t Health = 0x174;
        inline constexpr uintptr_t MaxHealth = 0x18c;
        inline constexpr uintptr_t RigType = 0x1a4;
        inline constexpr uintptr_t Walkspeed = 0x1b4;
        inline constexpr uintptr_t WalkspeedCheck = 0x38c;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenStart = 0x70;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0x0;
        inline constexpr uintptr_t NameContainer = 0x68;
    }

    namespace Misc {
        inline constexpr uintptr_t StringFlag = 0x17;
        inline constexpr uintptr_t StringLength = 0x8;
    }

    namespace Player {
        inline constexpr uintptr_t LocalPlayer = 0x108;
        inline constexpr uintptr_t ModelInstance = 0x248;
        inline constexpr uintptr_t Team = 0x288;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
        inline constexpr uintptr_t CFrame = 0xb0;
        inline constexpr uintptr_t Position = 0xd4;
        inline constexpr uintptr_t Rotation = 0xb0;
        inline constexpr uintptr_t Size = 0x1c4;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xb40;
        inline constexpr uintptr_t Pointer = 0x7340e50;
        inline constexpr uintptr_t ViewMatrix = 0x1e0;
    }

}
