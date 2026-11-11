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
     ⠀⠀⠀⣳⠀⠀⠀⡴⠞⢲⡗⠀⠈⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀      =======   version-8001f8762ae44efe (ARM64)
     ⢰⠳⠚⠁⠊⢰⠛⠣⠀⠘⠀⠐⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀      =======
     ⢸⠀⠀⠀⠀⠘⠦⢼⡆⠀⠀⠀⠀⣀⣠⣜⢿⣿⣿⣿⣿⣶⣿⣿⣿⣿⣧⠀      =======   Total Dumped Offsets: 97
     ⠈⠳⠤⢴⠀⡴⠤⠞⣀⡤⠐⠀⠉⠀⠀⣸⠖⢩⣾⣶⣿⣿⣿⣷⠈⠁⠈⠁      =======   Dumped At: 17:42 11/10/26 (CST)
     ⠀⠀⠀⠈⠳⣇⣴⣾⣧⢄⠀⠀⢀⡠⠈⠁⠀⣾⢻⣿⣿⣿⣿⣿⡇⠀⠀⠀      =======   Dumped in: 29.20s
     ⠀⠀⠀⠀⠀⠀⠳⣿⣿⣷⣀⠄⠈⠀⠀⠀⠘⠁⠸⣿⣿⣿⣿⡏⠃⠀⠀⠀      =======
     ⠀⠀⠀⠀⠀⠀⠀⠙⠿⠝⠁⠀⠀⠀⠀⠀⠀⠀⠀⠋⠉⠙⢿⡧⠀⠀⠀⠀      =========================================================
     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀      =========================================================
‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
----------------------------------------------------------------------------------------------------
https://discord.gg/urJGFzdA3s
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
        inline constexpr uintptr_t CameraSubject = 0xa8;
        inline constexpr uintptr_t CameraType = 0x118;
        inline constexpr uintptr_t FieldOfView = 0x120;
        inline constexpr uintptr_t Viewport = 0x2a4;
        inline constexpr uintptr_t ViewportSize = 0x2bc;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x7077490;
        inline constexpr intptr_t RealDataModel = -0xe0;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1bc;
        inline constexpr uintptr_t AutoRotate = 0x1bd;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1be;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1c0;
        inline constexpr uintptr_t CameraOffset = 0x100;
        inline constexpr uintptr_t DisplayDistanceType = 0x164;
        inline constexpr uintptr_t DisplayName = 0xa0;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1c1;
        inline constexpr uintptr_t FloorMaterial = 0x168;
        inline constexpr uintptr_t Health = 0x174;
        inline constexpr uintptr_t HealthDisplayDistance = 0x16c;
        inline constexpr uintptr_t HealthDisplayType = 0x170;
        inline constexpr uintptr_t HipHeight = 0x178;
        inline constexpr uintptr_t Jump = 0x1c4;
        inline constexpr uintptr_t JumpHeight = 0x188;
        inline constexpr uintptr_t JumpPower = 0x18c;
        inline constexpr uintptr_t MaxHealth = 0x190;
        inline constexpr uintptr_t MaxSlopeAngle = 0x194;
        inline constexpr uintptr_t MoveDirection = 0x124;
        inline constexpr uintptr_t MoveToPart = 0xf0;
        inline constexpr uintptr_t MoveToPoint = 0x148;
        inline constexpr uintptr_t NameDisplayDistance = 0x198;
        inline constexpr uintptr_t NameOcclusion = 0x19c;
        inline constexpr uintptr_t PlatformStand = 0x1c6;
        inline constexpr uintptr_t RequiresNeck = 0x1c7;
        inline constexpr uintptr_t RigType = 0x1a8;
        inline constexpr uintptr_t RootPart = 0xd0;
        inline constexpr uintptr_t SeatPart = 0xe0;
        inline constexpr uintptr_t Sit = 0x1c8;
        inline constexpr uintptr_t State = 0x818;
        inline constexpr uintptr_t TargetPoint = 0x130;
        inline constexpr uintptr_t UseJumpPower = 0x1ca;
        inline constexpr uintptr_t Walkspeed = 0x1b8;
        inline constexpr uintptr_t WalkspeedCheck = 0x394;
    }

    namespace HumanoidState {
        inline constexpr uintptr_t Id = 0x20;
    }

    namespace Instance {
        inline constexpr uintptr_t ChildrenStart = 0x70;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassName = 0x8;
        inline constexpr uintptr_t Name = 0x0;
        inline constexpr uintptr_t NameContainer = 0x68;
        inline constexpr uintptr_t Parent = 0x60;
        inline constexpr uintptr_t PropertyMap = 0x200;
        inline constexpr uintptr_t This = 0x8;
    }

    namespace IntValue {
        inline constexpr uintptr_t Value = 0xa0;
    }

    namespace LocalScript {
        inline constexpr uintptr_t Bytecode = 0x168;
    }

    namespace LogService {
        inline constexpr uintptr_t Print = 0x281d274;
    }

    namespace Misc {
        inline constexpr uintptr_t StringFlag = 0x17;
        inline constexpr uintptr_t StringLength = 0x8;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t Bytecode = 0x110;
        inline constexpr uintptr_t Context = 0x138;
    }

    namespace ObjectValue {
        inline constexpr uintptr_t Value = 0xa0;
    }

    namespace Player {
        inline constexpr uintptr_t LocalPlayer = 0x108;
        inline constexpr uintptr_t ModelInstance = 0x258;
        inline constexpr uintptr_t Team = 0x298;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
        inline constexpr uintptr_t CFrame = 0xb0;
        inline constexpr uintptr_t Flags = 0x1be;
        inline constexpr uintptr_t Position = 0xd4;
        inline constexpr uintptr_t Rotation = 0xb0;
        inline constexpr uintptr_t Size = 0x1c4;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t Anchored = 0x2;
        inline constexpr uintptr_t CanCollide = 0x8;
    }

    namespace Property {
        inline constexpr uintptr_t Name = 0x8;
        inline constexpr uintptr_t Scriptable = 0xa9;
        inline constexpr uintptr_t ScriptableBit = 0x10;
    }

    namespace PropertyMap {
        inline constexpr uintptr_t Entries = 0x10;
        inline constexpr uintptr_t EntrySize = 0x10;
        inline constexpr uintptr_t EntryState = 0x8;
        inline constexpr uintptr_t Mask = 0x18;
    }

    namespace ScriptContext {
        inline constexpr uintptr_t RequireBypass = 0xba0;
    }

    namespace SharedString {
        inline constexpr uintptr_t Data = 0x18;
        inline constexpr uintptr_t Flag = 0x2f;
        inline constexpr uintptr_t Size = 0x20;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0xb40;
        inline constexpr uintptr_t Pointer = 0x72e7c50;
        inline constexpr uintptr_t ViewMatrix = 0x1e0;
    }

    namespace Workspace {
        inline constexpr uintptr_t ReadOnlyGravity = 0x950;
        inline constexpr uintptr_t World = 0x3b8;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x210;
    }

    namespace WorldRoot {
        inline constexpr uintptr_t FindPartOnRayWithIgnoreListBoundDesc = 0x6dff570;
        inline constexpr uintptr_t FindPartOnRayWithIgnoreListBoundFn = 0xa8;
        inline constexpr uintptr_t FindPartOnRayWithIgnoreListFn = 0x112ae64;
        inline constexpr uintptr_t RaycastBoundDesc = 0x6dfe998;
        inline constexpr uintptr_t RaycastBoundFn = 0xa8;
        inline constexpr uintptr_t RaycastFn = 0x1130920;
    }

}
