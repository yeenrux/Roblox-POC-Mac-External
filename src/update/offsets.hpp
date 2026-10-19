#pragma once

// UNOFFICAL DUMP

/* =============================================================
/*                       theo's offsets                         
/*                  https://offsets.imtheo.lol                  
/* -------------------------------------------------------------
/*  Dumped With     : RbxDumperV2                               
/*  Source code     : https://git.imtheo.lol/theo/RbxDumperV2   
/*  Roblox Version  : version-7390687
/*  Dumper Version  : 2.2.4
/*  Dumped At       : 16:21 19/09/2026 (GMT)
/*  Total Offsets   : 394
/* -------------------------------------------------------------
/*  Join the discord!                                           
/*  https://offsets.imtheo.lol/discord                          
/* =============================================================
*/

// this theos dumper ported to macos (arm64):
// https://cdn.discordapp.com/attachments/1538234280524783663/1549151587933360268/dumper.zip?ex=6ab62d98&is=6ab4dc18&hm=6577e46f8ce59d0302d8cbc9e2587bab856957fa33031dba23e98e34e9f10526&

#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-7431134";

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x10;
         inline constexpr uintptr_t GlobalWind = 0x34;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xa8;
         inline constexpr uintptr_t Animator = 0x100;
         inline constexpr uintptr_t IsPlaying = 0xd4;
         inline constexpr uintptr_t Looped = 0xd4;
         inline constexpr uintptr_t Speed = 0xc4;
         inline constexpr uintptr_t TimePosition = 0xc8;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0xa50;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xa8;
         inline constexpr uintptr_t Decay = 0xb4;
         inline constexpr uintptr_t Density = 0xc0;
         inline constexpr uintptr_t Glare = 0xc4;
         inline constexpr uintptr_t Haze = 0xc8;
         inline constexpr uintptr_t Offset = 0xcc;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xb4;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x120;
         inline constexpr uintptr_t Color3 = 0x19c;
         inline constexpr uintptr_t Locked = 0x121;
         inline constexpr uintptr_t Massless = 0x122;
         inline constexpr uintptr_t Primitive = 0x170;
         inline constexpr uintptr_t Reflectance = 0xf4;
         inline constexpr uintptr_t Shape = 0x198;
         inline constexpr uintptr_t Transparency = 0x118;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x148;
         inline constexpr uintptr_t Attachment1 = 0x158;
         inline constexpr uintptr_t Brightness = 0x168;
         inline constexpr uintptr_t CurveSize0 = 0x16c;
         inline constexpr uintptr_t CurveSize1 = 0x170;
         inline constexpr uintptr_t LightEmission = 0x174;
         inline constexpr uintptr_t LightInfluence = 0x178;
         inline constexpr uintptr_t Texture = 0x120;
         inline constexpr uintptr_t TextureLength = 0x184;
         inline constexpr uintptr_t TextureSpeed = 0x18c;
         inline constexpr uintptr_t Width0 = 0x190;
         inline constexpr uintptr_t Width1 = 0x194;
         inline constexpr uintptr_t ZOffset = 0x198;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t Intensity = 0xa0;
         inline constexpr uintptr_t Size = 0xa4;
         inline constexpr uintptr_t Threshold = 0xa8;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t Size = 0xa0;
    }

    namespace ByteCode {
         inline constexpr uintptr_t InlineData = 0x18;
         inline constexpr uintptr_t IsLong = 0x2f;
         inline constexpr uintptr_t Pointer = 0x18;
         inline constexpr uintptr_t Size = 0x20;
    }

    namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x20;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xb0;
         inline constexpr uintptr_t CameraType = 0x120;
         inline constexpr uintptr_t FieldOfView = 0x128;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2cc;
         inline constexpr uintptr_t Rotation = 0xc0;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xb8;
         inline constexpr uintptr_t BodyPart = 0x120;
         inline constexpr uintptr_t MeshId = 0xe0;
         inline constexpr uintptr_t OverlayTextureId = 0x108;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0xd0;
         inline constexpr uintptr_t MouseIcon = 0xa8;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x100;
         inline constexpr uintptr_t Template = 0xe8;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xac;
         inline constexpr uintptr_t Contrast = 0xb0;
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t TintColor = 0xa0;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t TonemapperPreset = 0xa0;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x358;
         inline constexpr uintptr_t GameId = 0x360;
         inline constexpr uintptr_t GameLoaded = 0x5d8;
         inline constexpr uintptr_t InstanceOffset = 0x1f0;
         inline constexpr uintptr_t JobId = 0x300;
         inline constexpr uintptr_t PlaceId = 0x368;
         inline constexpr uintptr_t PlaceVersion = 0x384;
         inline constexpr uintptr_t PrimitiveCount = 0x5b8;
         inline constexpr uintptr_t ScriptContext = 0x440;
         inline constexpr uintptr_t ServerIP = 0x718;
         inline constexpr uintptr_t ToRenderView1 = 0x1a8;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t Workspace = 0x330;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x6f468c8;
         inline constexpr intptr_t RealDataModel = -0xe8;
    }

    namespace DataModelPointer {
         inline constexpr uintptr_t DataModelVTable = 0x6df1678;
         inline constexpr uintptr_t JobDataModel = 0x188;
         inline constexpr uintptr_t JobStride = 0x10;
         inline constexpr uintptr_t JobVTable = 0x6bb7348;
         inline constexpr uintptr_t Scheduler = 0x74adf58;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t FarIntensity = 0xa0;
         inline constexpr uintptr_t FocusDistance = 0xa4;
         inline constexpr uintptr_t InFocusRadius = 0xa8;
         inline constexpr uintptr_t NearIntensity = 0xac;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x178;
         inline constexpr uintptr_t CursorIcon = 0xa8;
         inline constexpr uintptr_t MaxActivationDistance = 0xd0;
         inline constexpr uintptr_t MaxDragAngle = 0x268;
         inline constexpr uintptr_t MaxDragTranslation = 0x22c;
         inline constexpr uintptr_t MaxForce = 0x26c;
         inline constexpr uintptr_t MaxTorque = 0x270;
         inline constexpr uintptr_t MinDragAngle = 0x274;
         inline constexpr uintptr_t MinDragTranslation = 0x238;
         inline constexpr uintptr_t ReferenceInstance = 0x1b0;
         inline constexpr uintptr_t Responsiveness = 0x280;
    }

    namespace FileMeshData {
         inline constexpr uintptr_t AABBMax = 0x18c;
         inline constexpr uintptr_t AABBMin = 0x180;
         inline constexpr uintptr_t Faces = 0x30;
         inline constexpr uintptr_t FacesEnd = 0x38;
         inline constexpr uintptr_t Vertices = 0x0;
         inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsoluteRotation = 0x56c;
    }

    namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x518;
         inline constexpr uintptr_t BackgroundTransparency = 0x53c;
         inline constexpr uintptr_t BorderColor3 = 0x524;
         inline constexpr uintptr_t Image = 0x988;
         inline constexpr uintptr_t LayoutOrder = 0x554;
         inline constexpr uintptr_t Position = 0x4e8;
         inline constexpr uintptr_t RichText = 0xb78;
         inline constexpr uintptr_t Rotation = 0x56c;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x49c;
         inline constexpr uintptr_t Size = 0x508;
         inline constexpr uintptr_t Text = 0xdc0;
         inline constexpr uintptr_t TextColor3 = 0xe48;
         inline constexpr uintptr_t Visible = 0x585;
         inline constexpr uintptr_t ZIndex = 0x57c;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1c0;
         inline constexpr uintptr_t AutoRotate = 0x1c1;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1c2;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1c3;
         inline constexpr uintptr_t CameraOffset = 0x108;
         inline constexpr uintptr_t DisplayDistanceType = 0x16c;
         inline constexpr uintptr_t DisplayName = 0xa8;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1c4;
         inline constexpr uintptr_t FloorMaterial = 0x170;
         inline constexpr uintptr_t Health = 0x17c;
         inline constexpr uintptr_t HealthDisplayDistance = 0x174;
         inline constexpr uintptr_t HealthDisplayType = 0x178;
         inline constexpr uintptr_t HumanoidRootPart = 0x448;
         inline constexpr uintptr_t HumanoidState = 0x818;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t IsWalking = 0x997;
         inline constexpr uintptr_t Jump = 0x1c7;
         inline constexpr uintptr_t JumpHeight = 0x18c;
         inline constexpr uintptr_t JumpPower = 0x190;
         inline constexpr uintptr_t MaxHealth = 0x194;
         inline constexpr uintptr_t MaxSlopeAngle = 0x198;
         inline constexpr uintptr_t MoveDirection = 0x12c;
         inline constexpr uintptr_t MoveToPart = 0xf8;
         inline constexpr uintptr_t MoveToPoint = 0x150;
         inline constexpr uintptr_t NameDisplayDistance = 0x19c;
         inline constexpr uintptr_t NameOcclusion = 0x1a0;
         inline constexpr uintptr_t PlatformStand = 0x1c9;
         inline constexpr uintptr_t RequiresNeck = 0x1ca;
         inline constexpr uintptr_t RigType = 0x1ac;
         inline constexpr uintptr_t SeatPart = 0xe8;
         inline constexpr uintptr_t Sit = 0x1cb;
         inline constexpr uintptr_t TargetPoint = 0x138;
         inline constexpr uintptr_t UseJumpPower = 0x1cd;
         inline constexpr uintptr_t Walkspeed = 0x1bc;
         inline constexpr uintptr_t WalkspeedCheck = 0x394;
    }

    namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ClassBase = 0x1b0;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0x8;
         inline constexpr uintptr_t NameContainer = 0x70;
         inline constexpr uintptr_t Parent = 0x68;
         inline constexpr uintptr_t This = 0x8;
    }

    namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t CachedItem = 0x30;
         inline constexpr uintptr_t Next = 0x8;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xc0;
         inline constexpr uintptr_t Brightness = 0x108;
         inline constexpr uintptr_t ClockTime = 0xb8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xcc;
         inline constexpr uintptr_t ColorShift_Top = 0xd8;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x10c;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x110;
         inline constexpr uintptr_t ExposureCompensation = 0x114;
         inline constexpr uintptr_t FogColor = 0xe4;
         inline constexpr uintptr_t FogEnd = 0x11c;
         inline constexpr uintptr_t FogStart = 0x120;
         inline constexpr uintptr_t GeographicLatitude = 0x124;
         inline constexpr uintptr_t GlobalShadows = 0x134;
         inline constexpr uintptr_t GradientBottom = 0x180;
         inline constexpr uintptr_t GradientTop = 0x140;
         inline constexpr uintptr_t LightColor = 0x14c;
         inline constexpr uintptr_t LightDirection = 0x158;
         inline constexpr uintptr_t MoonPosition = 0x174;
         inline constexpr uintptr_t OutdoorAmbient = 0xf0;
         inline constexpr uintptr_t Sky = 0x1b8;
         inline constexpr uintptr_t Source = 0x164;
         inline constexpr uintptr_t SunPosition = 0x168;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x170;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x180;
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xf;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xc;
         inline constexpr uintptr_t CrackedLava = 0x2d;
         inline constexpr uintptr_t Glacier = 0x1b;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2a;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3f;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3c;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1e;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MemEnforcedLRUCache {
         inline constexpr uintptr_t Head = 0x10;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t LRUHolder = 0xc8;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x2d8;
         inline constexpr uintptr_t Texture = 0x300;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0xe0;
         inline constexpr uintptr_t AnimationId = 0xa0;
         inline constexpr uintptr_t StringData = 0x0;
         inline constexpr uintptr_t StringFlag = 0x17;
         inline constexpr uintptr_t StringLength = 0x8;
         inline constexpr uintptr_t Value = 0xa8;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x208;
         inline constexpr uintptr_t Scale = 0x12c;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x118;
         inline constexpr uintptr_t GUID = 0xc0;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1c8;
         inline constexpr uintptr_t Brightness = 0x204;
         inline constexpr uintptr_t Drag = 0x208;
         inline constexpr uintptr_t Lifetime = 0x1dc;
         inline constexpr uintptr_t LightEmission = 0x220;
         inline constexpr uintptr_t LightInfluence = 0x224;
         inline constexpr uintptr_t Rate = 0x230;
         inline constexpr uintptr_t RotSpeed = 0x1e4;
         inline constexpr uintptr_t Rotation = 0x1ec;
         inline constexpr uintptr_t Speed = 0x1f4;
         inline constexpr uintptr_t SpreadAngle = 0x1fc;
         inline constexpr uintptr_t Texture = 0x1a0;
         inline constexpr uintptr_t TimeScale = 0x244;
         inline constexpr uintptr_t VelocityInheritance = 0x248;
         inline constexpr uintptr_t ZOffset = 0x24c;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x314;
         inline constexpr uintptr_t CameraMode = 0x328;
         inline constexpr uintptr_t DisplayName = 0x110;
         inline constexpr uintptr_t HealthDisplayDistance = 0x34c;
         inline constexpr uintptr_t LocalPlayer = 0x110;
         inline constexpr uintptr_t MaxZoomDistance = 0x320;
         inline constexpr uintptr_t MinZoomDistance = 0x324;
         inline constexpr uintptr_t ModelInstance = 0x250;
         inline constexpr uintptr_t Mouse = 0x10d0;
         inline constexpr uintptr_t NameDisplayDistance = 0x35c;
         inline constexpr uintptr_t Team = 0x290;
         inline constexpr uintptr_t TeamColor = 0x368;
         inline constexpr uintptr_t UserId = 0xc0;
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xa8;
         inline constexpr uintptr_t Workspace = 0x138;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
         inline constexpr uintptr_t Flags = 0x1be;
         inline constexpr uintptr_t Owner = 0x218;
         inline constexpr uintptr_t Position = 0xd4;
         inline constexpr uintptr_t Rotation = 0xb0;
         inline constexpr uintptr_t Size = 0x1c4;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xa0;
         inline constexpr uintptr_t Enabled = 0x116;
         inline constexpr uintptr_t GamepadKeyCode = 0xfc;
         inline constexpr uintptr_t HoldDuration = 0x100;
         inline constexpr uintptr_t KeyCode = 0x104;
         inline constexpr uintptr_t MaxActivationDistance = 0x108;
         inline constexpr uintptr_t ObjectText = 0xb8;
         inline constexpr uintptr_t RequiresLineOfSight = 0x117;
    }

    namespace RenderJob {
         inline constexpr uintptr_t RenderView = 0x1d0;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xf4;
         inline constexpr uintptr_t HeartbeatTask = 0x6b8;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x170;
         inline constexpr uintptr_t GUID = 0xc0;
         inline constexpr uintptr_t Hash = 0x180;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x1f8;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x1f4;
         inline constexpr uintptr_t MoonTextureId = 0xa8;
         inline constexpr uintptr_t SkyboxBk = 0xd0;
         inline constexpr uintptr_t SkyboxDn = 0xf8;
         inline constexpr uintptr_t SkyboxFt = 0x120;
         inline constexpr uintptr_t SkyboxLf = 0x148;
         inline constexpr uintptr_t SkyboxOrientation = 0x1e8;
         inline constexpr uintptr_t SkyboxRt = 0x170;
         inline constexpr uintptr_t SkyboxUp = 0x198;
         inline constexpr uintptr_t StarCount = 0x1f8;
         inline constexpr uintptr_t SunAngularSize = 0x1fc;
         inline constexpr uintptr_t SunTextureId = 0x1c0;
    }

    namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x128;
         inline constexpr uintptr_t Looped = 0x125;
         inline constexpr uintptr_t PlaybackSpeed = 0x104;
         inline constexpr uintptr_t RollOffMaxDistance = 0x108;
         inline constexpr uintptr_t RollOffMinDistance = 0x10c;
         inline constexpr uintptr_t SoundGroup = 0xd0;
         inline constexpr uintptr_t SoundId = 0xa8;
         inline constexpr uintptr_t Volume = 0x118;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x1d0;
         inline constexpr uintptr_t Enabled = 0x1d1;
         inline constexpr uintptr_t ForcefieldDuration = 0x1c8;
         inline constexpr uintptr_t Neutral = 0x1d2;
         inline constexpr uintptr_t TeamColor = 0x1cc;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xd8;
         inline constexpr uintptr_t Scale = 0xb4;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0x221;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0x9d;
         inline constexpr uintptr_t Intensity = 0xa0;
         inline constexpr uintptr_t Spread = 0xa4;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1b0;
         inline constexpr uintptr_t Color = 0x198;
         inline constexpr uintptr_t ColorMap = 0xa8;
         inline constexpr uintptr_t EmissiveMaskContent = 0xd0;
         inline constexpr uintptr_t EmissiveStrength = 0x1b4;
         inline constexpr uintptr_t EmissiveTint = 0x1a4;
         inline constexpr uintptr_t MetalnessMap = 0xf8;
         inline constexpr uintptr_t NormalMap = 0x120;
         inline constexpr uintptr_t RoughnessMap = 0x148;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd8;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xd0;
         inline constexpr uintptr_t MaxFPS = 0x1000;
         inline constexpr uintptr_t Pointer = 0x74adf58;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xa8;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1d0;
         inline constexpr uintptr_t MaterialColors = 0x498;
         inline constexpr uintptr_t WaterColor = 0x1c0;
         inline constexpr uintptr_t WaterReflectance = 0x1d8;
         inline constexpr uintptr_t WaterTransparency = 0x1dc;
         inline constexpr uintptr_t WaterWaveSize = 0x1e0;
         inline constexpr uintptr_t WaterWaveSpeed = 0x1e4;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x198;
         inline constexpr uintptr_t Texture_Texture = 0x198;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x438;
         inline constexpr uintptr_t Enabled = 0x439;
         inline constexpr uintptr_t Grip = 0x408;
         inline constexpr uintptr_t ManualActivationOnly = 0x43a;
         inline constexpr uintptr_t RequiresHandle = 0x43b;
         inline constexpr uintptr_t TextureId = 0x300;
         inline constexpr uintptr_t Tooltip = 0x3f0;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x2d8;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x298;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x208;
         inline constexpr uintptr_t SteerFloat = 0x20c;
         inline constexpr uintptr_t ThrottleFloat = 0x210;
         inline constexpr uintptr_t Torque = 0x214;
         inline constexpr uintptr_t TurnSpeed = 0x218;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xb40;
         inline constexpr uintptr_t Pointer = 0x71b7dc0;
         inline constexpr uintptr_t RenderView = 0xc68;
         inline constexpr uintptr_t ViewMatrix = 0x1e0;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x108;
         inline constexpr uintptr_t Part1 = 0x118;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0xa8;
         inline constexpr uintptr_t Part1 = 0xb8;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x28;
         inline constexpr uintptr_t CurrentTextBox = 0x30;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x460;
         inline constexpr uintptr_t DistributedGameTime = 0x480;
         inline constexpr uintptr_t ReadOnlyGravity = 0x950;
         inline constexpr uintptr_t World = 0x3c0;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x230;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x20c;
         inline constexpr uintptr_t Gravity = 0x218;
         inline constexpr uintptr_t Primitives = 0x2a0;
         inline constexpr uintptr_t worldStepsPerSec = 0x818;
    }

}
