#pragma once
namespace UDumper {
        constexpr uintptr_t Decrypt = 0x07F88528;
        constexpr uintptr_t UWorld = 0x0967CB58;
        constexpr uintptr_t LocalPlayers = 0x097BF170;
        constexpr uintptr_t LineToSight = 0x06152340;

        constexpr uintptr_t GNames = 0x0986CD38;
        constexpr uint32_t ChunkSize = 0x3EB4;

        constexpr uintptr_t GObjects = 0x0963B770;

        constexpr uint32_t GameInstance = 0x00A0;
        constexpr uint32_t LocalPlayers = 0x0050;

        constexpr uint32_t Actors = 0x01A8;

        constexpr uint32_t ActorsForGC = 0x0240;

        constexpr uint32_t ActorArray = 0x0240;
        
        constexpr uint32_t ObjID = 0x0018;
        
        constexpr uintptr_t TslSettingsBase = 0x09850128;
        constexpr uint32_t TslSettings = 0x01F0;

        constexpr uintptr_t IsScoping = 0x004A9E0C;

        constexpr uint32_t ComponentToWorld = 0x0330;
        constexpr uint32_t ComponentRotation = 0x81110F41;
        constexpr uint32_t ComponentLocation = 0x0340;

        constexpr uint32_t ItemPackage = 0x0558;
        constexpr uint32_t DroppedItem_Item = 0x0420;
        constexpr uint32_t DroppedItemGroup = 0x0218;

        constexpr uint32_t DroppedItemGroup_UItem = 0x0788;
        constexpr uint32_t ItemID = 0x0248;
        constexpr uint32_t ItemInformationComponent = 0x00B0;

        constexpr uint32_t CurrentLevel = 0x00A8;

        constexpr uint32_t PlayerController = 0x0038;
        constexpr uint32_t AcknowledgedPawn = 0x0470;
        constexpr uint32_t PlayerCameraManager = 0x0490;

        constexpr uint32_t CameraCache = 0x0A70;
        constexpr uint32_t POV = 0x0010;
        constexpr uint32_t FOV = 0x0594;
        constexpr uint32_t Rotation = 0x05A8;
        constexpr uint32_t Location = 0x0580;
        constexpr uint32_t Offset_CameraLocation = 0x1000;
        constexpr uint32_t Offset_CameraRotation = 0x1028;
        constexpr uint32_t Offset_CameraFov = 0x1014;

        constexpr uint32_t RootComponent = 0x00E0;
        constexpr uint32_t ReplicatedMovement = 0x0058;

        constexpr uint32_t PlayerState = 0x0410;

        constexpr uint32_t Mesh = 0x0448;
        constexpr uint32_t StaticMesh = 0x0B20;

        constexpr uint32_t BallisticDragScale = 0x04B4;
        constexpr uint32_t BallisticDropScale = 0x04B8;

        constexpr uint32_t Health = 0x0868;
        constexpr uint32_t HealthMax = 0x086C;
        constexpr uint32_t GroggyHealth = 0x1C94;
        constexpr uint32_t GroggyHealthMax = 0x1000;
        constexpr uint32_t CharacterName = 0x1278;
        constexpr uint32_t LastTeamNum = 0x1188;
        constexpr uint32_t VehicleRiderComponent = 0x1D18;
        constexpr uint32_t WeaponProcessor = 0x0880;
        constexpr uint32_t SpectatedCount = 0x12A0;
        constexpr uint32_t CharacterState = 0x11D4;
        constexpr uint32_t PlayerName = 0x0418;
        constexpr uint32_t bIsInAircraft = 0x0AB0;
        constexpr uint32_t DamageDealtOnEnemy = 0x0A08;
        constexpr uint32_t PubgIdData = 0x0CE0;
        constexpr uint32_t Team = 0x1180;
        constexpr uint32_t AimOffsets = 0x1640;
        constexpr uint32_t LastSubmitTime = 0x07A8;
        constexpr uint32_t LastRenderTime = 0x07AC;
        constexpr uint32_t LastRenderTimeOnScreen = 0x07B0;

        constexpr uint32_t Owner = 0x0050;

        constexpr uint32_t ComponentVelocity = 0x037C;
        constexpr uint32_t AttachParent = 0x0218;

        constexpr uint32_t AnimScriptInstance = 0x0CC0;

        constexpr uint32_t TimeTillExplosion = 0x0714;
        constexpr uint32_t PreExplosionTime = 0x0710;
        constexpr uint32_t ExplosionDelay = 0x05B0;
        constexpr uint32_t ProjectileConfig = 0x05B8;
        constexpr uint32_t ExplodeState = 0x0558;
        constexpr uint32_t TickStartVelocity = 0x0810;

        constexpr uint32_t SeatIndex = 0x0230;
        constexpr uint32_t LastVehiclePawn = 0x0270;

        constexpr uint32_t EquippedWeapons = 0x0208;
        constexpr uint32_t CurrentWeaponIndex = 0x0311;

        constexpr uint32_t AttachedItems = 0x07D8;
        constexpr uint32_t Mesh3P = 0x0790;
        constexpr uint32_t FiringAttachPoint = 0x0830;
        constexpr uint32_t WeaponConfig = 0x04C0;
        constexpr uint32_t WeaponItemName = 0x07F8;
        constexpr uint32_t IronSightZeroingDistances = 0x0580;

        constexpr uint32_t bAlwaysUseIronSightZeroing = 0x0A94;
        constexpr uint32_t CurrentAmmoData = 0x0A50;
        constexpr uint32_t CurrentZeroLevel = 0x0A54;
        constexpr uint32_t CurrentCantedZeroLevel = 0x0A58;
        constexpr uint32_t ScopingAttachPoint = 0x0C40;
        constexpr uint32_t bLoackLoadedAmmo = 0x0E84;

        constexpr uint32_t WeaponTrajectoryData = 0x1000;
        constexpr uint32_t TrajectoryGravityZ = 0x0FA8;
        constexpr uint32_t TrajectoryConfig = 0x0108;
        constexpr uint32_t FloatCurves = 0x0038;

        constexpr uint32_t ControlRotation_CP = 0x0774;
        constexpr uint32_t RecoilADSRotation_CP = 0x09DC;
        constexpr uint32_t LeanLeftAlpha_CP = 0x0DF4;
        constexpr uint32_t LeanRightAlpha_CP = 0x0DF8;
        constexpr uint32_t bIsScoping_CP = 0x0D06;

        constexpr uint32_t StateName = 0x03E8;
        constexpr uint32_t ControlRotation = 0x03F8;

        constexpr uint32_t InactiveStateInputComponent = 0x06B8;
        constexpr uint32_t MyHUD = 0x0488;
        constexpr uint32_t BlockInputWidgetList = 0x0550;
        constexpr uint32_t WidgetStateMap = 0x04E8;
        constexpr uint32_t TrainingMapGrid = 0x06B8;
        constexpr uint32_t SelectMinimapSizeIndex = 0x05C0;
        constexpr uint32_t Slot = 0x0038;
        constexpr uint32_t Visibility = 0x00A9;
        constexpr uint32_t LayoutData = 0x0040;

        constexpr uint32_t CharacterMovement = 0x0468;
        constexpr uint32_t StanceMode = 0x0500;
        constexpr uint32_t MovementMode = 0x02D0;
        constexpr uint32_t Acceleration = 0x03A8;
        constexpr uint32_t MaxAcceleration = 0x0308;
        constexpr uint32_t LastUpdateVelocity = 0x03D0;
        constexpr uint32_t PendingLaunchVelocity = 0x054C;

        constexpr uint32_t Wheeled_VehicleCommonComponent = 0x0BB8;
        constexpr uint32_t Floating_VehicleCommonComponent = 0x04B0;
        constexpr uint32_t VehicleHealth = 0x02D0;
        constexpr uint32_t VehicleHealthMax = 0x02D4;
        constexpr uint32_t VehicleFuel = 0x02D8;
        constexpr uint32_t VehicleFuelMax = 0x02DC;

        constexpr uint32_t AttachedStaticComponentMap = 0x1208;
}

 Decrypt32 (index)
 index_Ror = True
 index_Val1 = 0xE487D90C
 index_Val2 = 0x2
 index_Val3 = 0x8B3D8344
