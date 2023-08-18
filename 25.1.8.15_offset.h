#pragma once
namespace Dumper {
        constexpr uintptr_t Decrypt = 0x08052E28;
        constexpr uintptr_t UWorld = 0x0973FB58;
        constexpr uintptr_t LocalPlayers = 0x09882150;
        constexpr uintptr_t LineToSight = 0x0620FB58;

        constexpr uintptr_t GNames = 0x0992FD28;
        constexpr uint32_t ChunkSize = 0x41A4;

        constexpr uintptr_t GObjects = 0x096FE770;

        constexpr uint32_t GameInstance = 0x0768;
        constexpr uint32_t LocalPlayers = 0x0068;

        constexpr uint32_t Actors = 0x0050;

        constexpr uint32_t ActorsForGC = 0x0278;


        constexpr uintptr_t IsScoping = 0x003797F8;

        constexpr uint32_t ComponentToWorld = 0x02F0;
        constexpr uint32_t ComponentRotation = 0x0280;
        constexpr uint32_t ComponentLocation = 0x0300;

        constexpr uint32_t CurrentLevel = 0x07C8;

        constexpr uint32_t PlayerController = 0x0030;
        constexpr uint32_t AcknowledgedPawn = 0x0480;
        constexpr uint32_t PlayerCameraManager = 0x04A0;

        constexpr uint32_t CameraCache = 0x1700;
        constexpr uint32_t POV = 0x0010;
        constexpr uint32_t FOV = 0x003C;
        constexpr uint32_t Rotation = 0x0004;
        constexpr uint32_t Location = 0x0014;

        constexpr uint32_t RootComponent = 0x0120;
        constexpr uint32_t ReplicatedMovement = 0x0058;

        constexpr uint32_t PlayerState = 0x0430;

        constexpr uint32_t Mesh = 0x0478;
        constexpr uint32_t StaticMesh = 0x0B10;

        constexpr uint32_t BallisticDragScale = 0x04A4;
        constexpr uint32_t BallisticDropScale = 0x04A8;

        constexpr uint32_t Health = 0x0888;
        constexpr uint32_t HealthMax = 0x088C;
        constexpr uint32_t GroggyHealth = 0x22DC;
        constexpr uint32_t GroggyHealthMax = 0x10D8;
        constexpr uint32_t CharacterName = 0x0FB0;
        constexpr uint32_t LastTeamNum = 0x1040;
        constexpr uint32_t VehicleRiderComponent = 0x1D18;
        constexpr uint32_t WeaponProcessor = 0x08A0;
        constexpr uint32_t SpectatedCount = 0x1A80;
        constexpr uint32_t CharacterState = 0x0F30;

        constexpr uint32_t ComponentVelocity = 0x0320;
        constexpr uint32_t AttachParent = 0x0258;

        constexpr uint32_t AnimScriptInstance = 0x0CB0;

        constexpr uint32_t TimeTillExplosion = 0x0724;

        constexpr uint32_t SeatIndex = 0x0220;
        constexpr uint32_t LastVehiclePawn = 0x0260;

        constexpr uint32_t EquippedWeapons = 0x01F8;
        constexpr uint32_t CurrentWeaponIndex = 0x0301;

        constexpr uint32_t AttachedItems = 0x07E8;
        constexpr uint32_t Mesh3P = 0x07A0;
        constexpr uint32_t FiringAttachPoint = 0x0840;
        constexpr uint32_t IronSightZeroingDistances = 0x0590;

        constexpr uint32_t bAlwaysUseIronSightZeroing = 0x0AA4;
        constexpr uint32_t AmmoPerClip = 0x0A60;
        constexpr uint32_t CurrentZeroLevel = 0x0A64;
        constexpr uint32_t CurrentCantedZeroLevel = 0x0A68;
        constexpr uint32_t ScopingAttachPoint = 0x0C50;

        constexpr uint32_t WeaponTrajectoryData = 0x1000;
        constexpr uint32_t TrajectoryGravityZ = 0x0F24;
        constexpr uint32_t TrajectoryConfig = 0x0100;
        constexpr uint32_t FloatCurves = 0x0030;

        constexpr uint32_t ControlRotation_CP = 0x076C;
        constexpr uint32_t RecoilADSRotation_CP = 0x09CC;
        constexpr uint32_t LeanLeftAlpha_CP = 0x0DE4;
        constexpr uint32_t LeanRightAlpha_CP = 0x0DE8;
        constexpr uint32_t bIsScoping_CP = 0x0CF6;

        constexpr uint32_t PlayerStatistics = 0x0A84;
        constexpr uint32_t PubgIdData = 0x0D00;

}