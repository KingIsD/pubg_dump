/* 2023-7-5-11 */

#pragma once
namespace UDumper {
        constexpr uintptr_t Decrypt = 0x08278928;
        constexpr uintptr_t UWorld = 0x098F1DE8;
        constexpr uintptr_t LocalPlayers = 0x09A329C0;
        constexpr uintptr_t LineToSight = 0x0644992C;

        constexpr uintptr_t GNames = 0x09ADBE08;
        constexpr uint32_t ChunkSize = 0x4010;

        constexpr uintptr_t GObjects = 0x098B0770;

        constexpr uint32_t ActorArray = 0x01F8;
        constexpr uint32_t SDK_Offset = 0x0050;
        constexpr uint32_t SDK_Func = 0x0108;
        constexpr uint32_t ObjID = 0x0020;
        constexpr uint32_t ObjName = 0x0024;
        constexpr uint32_t ObjClass = 0x0018;
        constexpr uint32_t ObjOuter = 0x0008;

//Found TslSettings.GetTslSettings 00000000059604F0
        constexpr uintptr_t TslSettingsBase = 0x09ABF658;
        constexpr uint32_t TslSettings = 0x01F0;

        constexpr uintptr_t IsScoping = 0x001E1634;

        constexpr uint32_t ComponentToWorld = 0x0270;
        constexpr uint32_t ComponentRotation = 0x02C0;
        constexpr uint32_t ComponentLocation = 0x0280;

        constexpr uint32_t CurrentLevel = 0x0910;

        constexpr uint32_t PlayerController = 0x0030;
        constexpr uint32_t AcknowledgedPawn = 0x0498;
        constexpr uint32_t PlayerCameraManager = 0x04B8;

        constexpr uint32_t CameraCache = 0x0430;
        constexpr uint32_t POV = 0x0010;
        constexpr uint32_t FOV = 0x05B0;
        constexpr uint32_t Rotation = 0x05A4;
        constexpr uint32_t Location = 0x0590;

        constexpr uint32_t RootComponent = 0x0270;
        constexpr uint32_t ReplicatedMovement = 0x0068;

        constexpr uint32_t PlayerState = 0x0438;

        constexpr uint32_t Mesh = 0x04E0;

        constexpr uint32_t BallisticDragScale = 0x04A4;
        constexpr uint32_t BallisticDropScale = 0x04A8;

        constexpr uint32_t Health = 0x0898;
        constexpr uint32_t HealthMax = 0x089C;
        constexpr uint32_t GroggyHealth = 0x243C;
        constexpr uint32_t GroggyHealthMax = 0x1A34;
        constexpr uint32_t CharacterName = 0x0F48;
        constexpr uint32_t LastTeamNum = 0x1A58;
        constexpr uint32_t VehicleRiderComponent = 0x1C90;
        constexpr uint32_t WeaponProcessor = 0x08B0;
        constexpr uint32_t SpectatedCount = 0x1320;
        constexpr uint32_t CharacterState = 0x0E7C;

        constexpr uint32_t ComponentVelocity = 0x01F0;
        constexpr uint32_t AttachParent = 0x02D0;

        constexpr uint32_t AnimScriptInstance = 0x0CA0;
        constexpr uint32_t StaticMesh = 0x0B00;

        constexpr uint32_t TimeTillExplosion = 0x0734;

        constexpr uint32_t SeatIndex = 0x0220;
        constexpr uint32_t LastVehiclePawn = 0x0260;

        constexpr uint32_t EquippedWeapons = 0x01F8;
        constexpr uint32_t CurrentWeaponIndex = 0x0301;

        constexpr uint32_t AttachedItems = 0x07F8;
        constexpr uint32_t Mesh3P = 0x07B0;
        constexpr uint32_t FiringAttachPoint = 0x0850;
        constexpr uint32_t IronSightZeroingDistances = 0x05A0;

        constexpr uint32_t bAlwaysUseIronSightZeroing = 0x0A19;
        constexpr uint32_t AmmoPerClip = 0x0A1C;
        constexpr uint32_t CurrentZeroLevel = 0x0A24;
        constexpr uint32_t CurrentCantedZeroLevel = 0x0A28;
        constexpr uint32_t ScopingAttachPoint = 0x0C10;

        constexpr uint32_t WeaponTrajectoryData = 0x1008;
        constexpr uint32_t TrajectoryGravityZ = 0x0FC8;

        constexpr uint32_t ControlRotation_CP = 0x076C;
        constexpr uint32_t RecoilADSRotation_CP = 0x09CC;
        constexpr uint32_t LeanLeftAlpha_CP = 0x0DE4;
        constexpr uint32_t LeanRightAlpha_CP = 0x0DE8;
        constexpr uint32_t bIsScoping_CP = 0x0CF6;

        constexpr uint32_t TrajectoryConfig = 0x0100;

        constexpr uint32_t PlayerStatistics = 0x06A8;
        constexpr uint32_t PubgIdData = 0x0CF0;

        constexpr uint32_t FloatCurves = 0x0030;
}

 Decrypt32 (index)
 index_Ror = False
 index_Val1 = 0xA8C9F489
 index_Val2 = 0x8
 index_Val3 = 0x405C9B85

 Decrypt32 (number)
 number_Ror = False
 number_Val1 = 0xDBD99B85
 number_Val2 = 0x10
 number_Val3 = 0x5C40F489

 Decrypt64 (class)
 class_Ror64 = True
 class_Val1 = 0x21C0D5EE71A29713
 class_Val2 = 0x7
 class_Val3 = 0xEE5116427D5B2829

 Decrypt64 (outer)
 outer_Ror64 = False
 outer_Val1 = 0xAC3866BDAFB846A0
 outer_Val2 = 0x13
 outer_Val3 = 0xCF9E961F450367C8