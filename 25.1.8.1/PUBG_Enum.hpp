// Enum CoreUObject.*64205888f8
enum class E*64205888f8 : uint8_t
{
	*f8f9cb1b2b                    = 0,
	*a558b44568                    = 1,
	*59c11f0248                    = 2,
	*23b2e7f05f                    = 3,
	*3822538fd4                    = 4,
	*7c7ec40dcc                    = 5,
	*97fbdd9553                    = 6,
	*64205888f8_MAX                = 7
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EAutomationEventType_MAX       = 3
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None                           = 0,
	Default                        = 1,
	TextEditBeam                   = 2,
	ResizeLeftRight                = 3,
	ResizeUpDown                   = 4,
	ResizeSouthEast                = 5,
	ResizeSouthWest                = 6,
	CardinalCross                  = 7,
	Crosshairs                     = 8,
	Hand                           = 9,
	GrabHand                       = 10,
	GrabHandClosed                 = 11,
	SlashedCircle                  = 12,
	EyeDropper                     = 13,
	EMouseCursor_MAX               = 14
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers                    = 0,
	Millimeters                    = 1,
	Centimeters                    = 2,
	Meters                         = 3,
	Kilometers                     = 4,
	Inches                         = 5,
	Feet                           = 6,
	Yards                          = 7,
	Miles                          = 8,
	Lightyears                     = 9,
	Degrees                        = 10,
	Radians                        = 11,
	MetersPerSecond                = 12,
	KilometersPerHour              = 13,
	MilesPerHour                   = 14,
	Celsius                        = 15,
	Farenheit                      = 16,
	Kelvin                         = 17,
	Micrograms                     = 18,
	Milligrams                     = 19,
	Grams                          = 20,
	Kilograms                      = 21,
	MetricTons                     = 22,
	Ounces                         = 23,
	Pounds                         = 24,
	Stones                         = 25,
	Newtons                        = 26,
	PoundsForce                    = 27,
	KilogramsForce                 = 28,
	Hertz                          = 29,
	Kilohertz                      = 30,
	Megahertz                      = 31,
	Gigahertz                      = 32,
	RevolutionsPerMinute           = 33,
	Bytes                          = 34,
	Kilobytes                      = 35,
	Megabytes                      = 36,
	Gigabytes                      = 37,
	Terabytes                      = 38,
	Lumens                         = 39,
	Milliseconds                   = 40,
	Seconds                        = 41,
	Minutes                        = 42,
	Hours                          = 43,
	Days                           = 44,
	Months                         = 45,
	Years                          = 46,
	Multiplier                     = 47,
	Unspecified                    = 48,
	EUnit_MAX                      = 49
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R32G32_UINT                 = 60,
	PF_D32                         = 61,
	PF_MAX                         = 62
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	ELogTimes_MAX                  = 3
};


// Enum CoreUObject.*6858e748dc
enum class E*6858e748dc : uint8_t
{
	*547132a615                    = 0,
	*7a2fa6e9d8                    = 1,
	*3bda601375                    = 2,
	*6858e748dc_MAX                = 3
};


// Enum CoreUObject.*068419eec5
enum class E*068419eec5 : uint8_t
{
	*e6ebd941c9                    = 0,
	*9d96f252dd                    = 1,
	*73a653a547                    = 2,
	*068419eec5_MAX                = 3
};


// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_OwnerOrViewTarget         = 14,
	COND_OwnerOrViewTargetOrReplay = 15,
	COND_Max                       = 16
};



// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8
};


// Enum Engine.*49998fa563
enum class E*49998fa563 : uint8_t
{
	*01bbd014d1                    = 0,
	*ab1d08cd54                    = 1,
	*616311a365                    = 2,
	*52ad17ed64                    = 3,
	*dad673f047                    = 4,
	*49998fa563_MAX                = 5
};


// Enum Engine.*225709d040
enum class E*225709d040 : uint8_t
{
	*1f8479c288                    = 0,
	*cdbbbb17e7                    = 1,
	*4e1820f6ff                    = 2,
	*9bf88e9b51                    = 3,
	*930cbfa2ab                    = 4,
	*225709d040_MAX                = 5
};


// Enum Engine.*81500df1d5
enum class E*81500df1d5 : uint8_t
{
	*e8f28c578e                    = 0,
	*c4b3cbb7fb                    = 1,
	*43c58e8381                    = 2,
	*9acd819cb9                    = 3,
	*afd0b07612                    = 4,
	*81500df1d5_MAX                = 5
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.*3d699c80da
enum class E*3d699c80da : uint8_t
{
	*f05dcf6bf9                    = 0,
	*de18ccdc2f                    = 1,
	*29395af923                    = 2,
	*a57dfb6a8f                    = 3,
	*b55681f530                    = 4,
	*b3529e768f                    = 5,
	*f9712f5b49                    = 6,
	*3d699c80da_MAX                = 7
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.*baa620ac1d
enum class E*baa620ac1d : uint8_t
{
	*a2753384e0                    = 0,
	*91190f32a0                    = 1,
	*57f9921709                    = 2,
	*fb0f25ed6e                    = 3,
	*e21a6619d2                    = 4,
	*1e85c58c61                    = 5,
	*baa620ac1d_MAX                = 6
};


// Enum Engine.EStanceMode
enum class EStanceMode : uint8_t
{
	STANCE_None                    = 0,
	STANCE_Stand                   = 1,
	STANCE_Crouch                  = 2,
	STANCE_Prone                   = 3,
	STANCE_Carry                   = 4,
	STANCE_Carried                 = 5,
	STANCE_MAX                     = 6
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.*2c9277fb44
enum class E*2c9277fb44 : uint8_t
{
	*d49407a652                    = 0,
	*f2d82f335c                    = 1,
	*dda2bae94f                    = 2,
	*2c9277fb44_MAX                = 3
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.*5abdfd6d3f
enum class E*5abdfd6d3f : uint8_t
{
	*9e9103066f                    = 0,
	*ff2eff0e3b                    = 1,
	*9c40f440fe                    = 2,
	*c2db9fb44d                    = 3,
	*5abdfd6d3f_MAX                = 4
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.*fa5dcd1498
enum class E*fa5dcd1498 : uint8_t
{
	*ecdf7e8f42                    = 0,
	*37dd49152d                    = 1,
	*839790baa9                    = 2,
	*fa5dcd1498_MAX                = 3
};


// Enum Engine.*ab2d2b201b
enum class E*ab2d2b201b : uint8_t
{
	*488af5f1d2                    = 0,
	*fb8756b17f                    = 1,
	*ca54f77c63                    = 2,
	*0fe914a543                    = 3,
	*ab2d2b201b_MAX                = 4
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.*69eccaa3a4
enum class E*69eccaa3a4 : uint8_t
{
	*de1835c55e                    = 0,
	*dec45fee60                    = 1,
	*31a7bcbf18                    = 2,
	*3f2bd3079d                    = 3,
	*15a63bb242                    = 4,
	*95c3f3f96f                    = 5,
	*69eccaa3a4_MAX                = 6
};


// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Num                            = 4,
	EDecalChannel_MAX              = 5
};


// Enum Engine.*f7b865ccf5
enum class E*f7b865ccf5 : uint8_t
{
	*c4cbe3c99c                    = 0,
	*1d539f5d5a                    = 1,
	*d00016d505                    = 2,
	*885e4fb43d                    = 3,
	*86ed03df86                    = 4,
	*f7b865ccf5_MAX                = 5
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.*2790c22324
enum class E*2790c22324 : uint8_t
{
	*eb3d365602                    = 0,
	*c7cfc7cfc4                    = 1,
	*3856d005ca                    = 2,
	*2790c22324_MAX                = 3
};


// Enum Engine.*426cd75705
enum class E*426cd75705 : uint8_t
{
	*19c08c2b4b                    = 0,
	*a07d23b779                    = 1,
	*9496f32384                    = 2,
	*789c33e69e                    = 3,
	*426cd75705_MAX                = 4
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.*0455ba41f8
enum class E*0455ba41f8 : uint8_t
{
	*8195957ebf                    = 0,
	*02d3ad91eb                    = 1,
	*769c0b18bb                    = 2,
	*bf121a0a7f                    = 3,
	*1e2b79650d                    = 4,
	*0455ba41f8_MAX                = 5
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_ConnectedDormantPartial   = 4,
	DORM_Initial                   = 5,
	DORN_MAX                       = 6,
	ENetDormancy_MAX               = 7
};


// Enum Engine.*81808807a1
enum class E*81808807a1 : uint8_t
{
	*7b71948d51                    = 0,
	*287be28e99                    = 1,
	*d23320e6c0                    = 2,
	*2e780ad234                    = 3,
	*3f5c46a159                    = 4,
	*fc7ce05ce0                    = 5,
	*a6b903ba75                    = 6,
	*953f9867a1                    = 7,
	*81808807a1_MAX                = 8
};


// Enum Engine.*d8439662c7
enum class E*d8439662c7 : uint8_t
{
	*9b70498153                    = 0,
	*96ae36a8f6                    = 1,
	*14b188e3ee                    = 2,
	*d8439662c7_MAX                = 3
};


// Enum Engine.*bfed0e1ada
enum class E*bfed0e1ada : uint8_t
{
	*aec54b304d                    = 0,
	*25160720ae                    = 1,
	*5aefc22367                    = 2,
	*fe89218298                    = 3,
	*bfed0e1ada_MAX                = 4
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.*e2435b33bf
enum class E*e2435b33bf : uint8_t
{
	*3f7590e375                    = 0,
	*ce90047f0e                    = 1,
	*7e7a7e8d85                    = 2,
	*36033e59fa                    = 3,
	*60230f3cbd                    = 4,
	*c05019df46                    = 5,
	*e2435b33bf_MAX                = 6
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.*95084bd4ec
enum class E*95084bd4ec : uint8_t
{
	*223584973e                    = 0,
	*a525e57c3b                    = 1,
	*5c58507853                    = 2,
	*95084bd4ec_MAX                = 3
};


// Enum Engine.*f6e7fe077c
enum class E*f6e7fe077c : uint8_t
{
	*76baa45ac4                    = 0,
	*aa5fffc28b                    = 1,
	*c4554868d3                    = 2,
	*c39f477b53                    = 3,
	*f6e7fe077c_MAX                = 4
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.*3aef2dc797
enum class E*3aef2dc797 : uint8_t
{
	*14665b4930                    = 0,
	*f01f301a5f                    = 1,
	*b357825e2a                    = 2,
	*b70455345e                    = 3,
	*3aef2dc797_MAX                = 4
};


// Enum Engine.*1cc8261853
enum class E*1cc8261853 : uint8_t
{
	*6bd4f327ab                    = 0,
	*90a7370599                    = 1,
	*b610553bcd                    = 2,
	*a38a7908a8                    = 3,
	*1cc8261853_MAX                = 4
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	RotationOnly                   = 4,
	ENetworkSmoothingMode_MAX      = 5
};


// Enum Engine.*c82b06c530
enum class E*c82b06c530 : uint8_t
{
	*ac0bc698e2                    = 0,
	*207d001fdf                    = 1,
	*b3cc657df2                    = 2,
	*65a2ee6fb2                    = 3,
	*c82b06c530_MAX                = 4
};


// Enum Engine.*a9e8bc1849
enum class E*a9e8bc1849 : uint8_t
{
	*7787abc6e5                    = 0,
	*4c33e98086                    = 1,
	*7039c606eb                    = 2,
	*f5581763d5                    = 3,
	*298fc5d219                    = 4,
	*a47118a97a                    = 5,
	*b3563a6b20                    = 6,
	*a9e8bc1849_MAX                = 7
};


// Enum Engine.*a9013e4049
enum class E*a9013e4049 : uint8_t
{
	*60db8d76b8                    = 0,
	*815e550210                    = 1,
	*d37ea814ea                    = 2,
	*5bc8d284e4                    = 3,
	*ac66f0b774                    = 4,
	*a9013e4049_MAX                = 5
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8
};


// Enum Engine.*a6ccbe847e
enum class E*a6ccbe847e : uint8_t
{
	*339ab132fd                    = 0,
	*fc086ce8ce                    = 1,
	*c583b94fd9                    = 2,
	*2bd856ed6b                    = 3,
	*a6ccbe847e_MAX                = 4
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	HeightBuffer                   = 2,
	EParticleCollisionMode_MAX     = 3
};


// Enum Engine.*ea8911211a
enum class E*ea8911211a : uint8_t
{
	*da0e53ffdc                    = 0,
	*7e3a1a51da                    = 1,
	*8f70a0d280                    = 2,
	*583a66e1fc                    = 3,
	*ea8911211a_MAX                = 4
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.*9e60cc7dba
enum class E*9e60cc7dba : uint8_t
{
	*43bf22bc1d                    = 0,
	*b99a67a539                    = 1,
	*15a60cf28d                    = 2,
	*eed1b4947d                    = 3,
	*9e60cc7dba_MAX                = 4
};


// Enum Engine.*ff9fa4fcd0
enum class E*ff9fa4fcd0 : uint8_t
{
	*7392682722                    = 0,
	*123668a66f                    = 1,
	*edfe4e4888                    = 2,
	*a62e862c2a                    = 3,
	*29b6dccd6b                    = 4,
	*d2bcf50dd3                    = 5,
	*3bea701972                    = 6,
	*2fedfe8d87                    = 7,
	*ef55905752                    = 8,
	*40bc16f436                    = 9,
	*1057b0cbc9                    = 10,
	*c1ed784f82                    = 11,
	*ff9fa4fcd0_MAX                = 12
};


// Enum Engine.*2dc60515e5
enum class E*2dc60515e5 : uint8_t
{
	*167ca15d4e                    = 0,
	*aa135c1ba3                    = 1,
	*adda0ecb20                    = 2,
	*535b2961ab                    = 3,
	*2dc60515e5_MAX                = 4
};


// Enum Engine.*4fc915735e
enum class E*4fc915735e : uint8_t
{
	*1b56e4f6bf                    = 0,
	*eab150b0a9                    = 1,
	*935e279339                    = 2,
	*4fc915735e_MAX                = 3
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfaceDirectional         = 5,
	TLM_SurfacePerVertexNonDirectional = 6,
	TLM_SurfacePerVertexDirectional = 7,
	TLM_MAX                        = 8
};


// Enum Engine.*7981a4bfeb
enum class E*7981a4bfeb : uint8_t
{
	*04d1011281                    = 0,
	*482ee5f72f                    = 1,
	*483aeea619                    = 2,
	*acd0f1add6                    = 3,
	*7981a4bfeb_MAX                = 4
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};


// Enum Engine.*d22edc0455
enum class E*d22edc0455 : uint8_t
{
	*814430ab76                    = 0,
	*b0e8d1d5ba                    = 1,
	*f917c70357                    = 2,
	*d22edc0455_MAX                = 3
};


// Enum Engine.*d82401682b
enum class E*d82401682b : uint8_t
{
	*578a41ebd2                    = 0,
	*79fee1ecd1                    = 1,
	*84bc7c03d6                    = 2,
	*8dc7dbf266                    = 3,
	*d82401682b_MAX                = 4
};


// Enum Engine.*d030645ff0
enum class E*d030645ff0 : uint8_t
{
	*3557f92ca7                    = 0,
	*c577982f52                    = 1,
	*df4563f03c                    = 2,
	*d030645ff0_MAX                = 3
};


// Enum Engine.*8b0d90d6da
enum class E*8b0d90d6da : uint8_t
{
	*42938035a2                    = 0,
	*5e51e7d495                    = 1,
	*8d6528a6c4                    = 2,
	*f33d3fea24                    = 3,
	*8b0d90d6da_MAX                = 4
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.*87f5f599a8
enum class E*87f5f599a8 : uint8_t
{
	*37a3b5a5fc                    = 0,
	*b4516f88c7                    = 1,
	*5781a55d43                    = 2,
	*004b137320                    = 3,
	*fdde24181b                    = 4,
	*ebf434bc6b                    = 5,
	*c572116701                    = 6,
	*54cbc2544b                    = 7,
	*ccbf19a3e7                    = 8,
	*2287933018                    = 9,
	*3e08ffbcf3                    = 10,
	*dd0a16cecf                    = 11,
	*bdab9337d0                    = 12,
	*7c698cd962                    = 13,
	*4283fc9553                    = 14,
	*1b1fbbc4c8                    = 15,
	*4b91840ead                    = 16,
	*2082e9b958                    = 17,
	*99afeaf9cd                    = 18,
	*2f842a72e8                    = 19,
	*1d1e9e1467                    = 20,
	*c6bc94916a                    = 21,
	*95dbb67ec7                    = 22,
	*dfb7f135c9                    = 23,
	*a80a405221                    = 24,
	*647ee0b042                    = 25,
	*e47ce7a1d3                    = 26,
	*95a03e8feb                    = 27,
	*7467fc034b                    = 28,
	*f8162a4a64                    = 29,
	*eb5f866a15                    = 30,
	*828b5828ea                    = 31,
	*87f5f599a8_MAX                = 32
};


// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8_t
{
	None                           = 0,
	PlayCommand                    = 1,
	PlayNoWorld                    = 2,
	PlayPIE                        = 3,
	PlayCreateDemoDriver           = 4,
	Connect                        = 5,
	ConnectNoWorld                 = 6,
	ConnectNoGameInstance          = 7,
	ConnectInitBase                = 8,
	ConnectStreamingReady          = 9,
	ConnectDemoNotFound            = 10,
	ConnectCorrupt                 = 11,
	ConnectSpecificCorrupt         = 12,
	ConnectPostNoWorld             = 13,
	ConnectLoadMap                 = 14,
	TickDispatchStreamer           = 15,
	TickDispatchFileAr             = 16,
	ConditionallyReadFrame         = 17,
	ConditionallyReadFrameFileAr   = 18,
	ConditionallyReadFrameStreamer = 19,
	ConditionallyReadFrameTimeChecksum = 20,
	ConditionallyReadFrameFileAr2  = 21,
	ConditionallyReadFrameExternalData = 22,
	ConditionallyReadFramePacket   = 23,
	ConditionallyProcessPacket     = 24,
	DownloadHeader                 = 25,
	DownloadHeaderDemoNotFound     = 26,
	DownloadHeaderCorrupt          = 27,
	DownloadHeaderSpecificCorrupt  = 28,
	DownloadHeaderLevelNamesAndTimes = 29,
	CheckpointReady                = 30,
	CheckpointArchiveEmpty         = 31,
	CheckpointReadFrame            = 32,
	CheckpointReadFrameFileAr      = 33,
	CheckpointReadFrameStreamer    = 34,
	CheckpointReadFrameTimeChecksum = 35,
	CheckpointReadFrameFileAr2     = 36,
	CheckpointReadFrameExternalData = 37,
	CheckpointReadFramePacket      = 38,
	CheckpointProcessPacket        = 39,
	RecCommand                     = 40,
	RecNoReplays                   = 41,
	RecNoWorld                     = 42,
	RecPIE                         = 43,
	RecAlreadyPlay                 = 44,
	RecCreateDemoDriver            = 45,
	Listen                         = 46,
	ListenInitBase                 = 47,
	ListenNoWorldSettings          = 48,
	ListenWriteHeader              = 49,
	ListenStreamingReady           = 50,
	TickFlushStreamer              = 51,
	TickFlushFileAr                = 52,
	SeamlessTravelWriteHeader      = 53,
	EDemoFailure_MAX               = 54
};


// Enum Engine.*e4d69628ee
enum class E*e4d69628ee : uint8_t
{
	*a63d94c660                    = 0,
	*9c3494eccb                    = 1,
	*26baa2b3fa                    = 2,
	*9b547ad7ea                    = 3,
	*e4d69628ee_MAX                = 4
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	EMouseLockMode_MAX             = 3
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.*88ea0436ca
enum class E*88ea0436ca : uint8_t
{
	*821c9dc10a                    = 0,
	*eb2cadcb7d                    = 1,
	*57d36b745e                    = 2,
	*88ea0436ca_MAX                = 3
};


// Enum Engine.*90fbe7e283
enum class E*90fbe7e283 : uint8_t
{
	*b39d2a4fae                    = 0,
	*14d2083c6c                    = 1,
	*50071bcee9                    = 2,
	*a90a3a7c2b                    = 3,
	*454533a3f1                    = 4,
	*90fbe7e283_MAX                = 5
};


// Enum Engine.*d37c1a3864
enum class E*d37c1a3864 : uint8_t
{
	*0b4570ad18                    = 0,
	*9eed978966                    = 1,
	*392557909d                    = 2,
	*93e82a4ed8                    = 3,
	*d37c1a3864_MAX                = 4
};


// Enum Engine.*528764fe49
enum class E*528764fe49 : uint8_t
{
	*78c4f44b90                    = 0,
	*98726cf0e5                    = 1,
	*6931a1c56a                    = 2,
	*bf56918cfb                    = 3,
	*66c0a2303b                    = 4,
	*5375ba9400                    = 5,
	*428c24b1bd                    = 6,
	*d020c96260                    = 7,
	*c8d2be66a3                    = 8,
	*b36213dd0a                    = 9,
	*4c3b567ec0                    = 10,
	*637f297d79                    = 11,
	*3afbfcb96e                    = 12,
	*a24e1f920c                    = 13,
	*528764fe49_MAX                = 14
};


// Enum Engine.*7328a7eada
enum class E*7328a7eada : uint8_t
{
	*edf0777129                    = 0,
	*a302cbff78                    = 1,
	*3d59b456f2                    = 2,
	*bc50c5ece1                    = 3,
	*a1e1e8b58a                    = 4,
	*de5555c3d2                    = 5,
	*07d9c6f836                    = 6,
	*deb7d68135                    = 7,
	*63ba4a68db                    = 8,
	*7328a7eada_MAX                = 9
};


// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8_t
{
	RGBA                           = 0,
	RGB                            = 1,
	L                              = 2,
	ESimplygonColorChannels_MAX    = 3
};


// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	ESimplygonTextureSamplingQuality_MAX = 4
};


// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t
{
	None                           = 0,
	Color                          = 1,
	Normals                        = 2,
	Opacity                        = 3,
	ESimplygonCasterType_MAX       = 4
};


// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t
{
	None                           = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	ESimplygonTextureStrech_MAX    = 6
};


// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t
{
	Off                            = 0,
	BakeTexture                    = 1,
	BakeVertexColor                = 2,
	Replace                        = 3,
	EMaterialLODType_MAX           = 4
};


// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t
{
	Reduction                      = 0,
	Remeshing                      = 1,
	ESimplygonLODType_MAX          = 2
};


// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8_t
{
	TrianglePercentage             = 0,
	OnScreenSize                   = 1,
	MaxDeviation                   = 2,
	EOptimizationMetric_MAX        = 3
};


// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EMaterialProxySmaplingQuality_MAX = 4
};


// Enum Engine.EUVStrech
enum class EUVStrech : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	VeryLarge                      = 3,
	EUVStrech_MAX                  = 4
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.*f8642d97c6
enum class E*f8642d97c6 : uint8_t
{
	*0ae8426e10                    = 0,
	*44e0d20477                    = 1,
	*2595de9660                    = 2,
	*f8642d97c6_MAX                = 3
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.*4d70a40697
enum class E*4d70a40697 : uint8_t
{
	*a5a6b2294d                    = 0,
	*f4637fcc11                    = 1,
	*12f149a5f0                    = 2,
	*b726f6846b                    = 3,
	*4d70a40697_MAX                = 4
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8_t
{
	NoCollision                    = 0,
	BlockAllWithComplexAsSimple    = 1,
	EPhysXAggregationMode_MAX      = 2
};


// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8_t
{
	TextureSize                    = 0,
	SurfaceArea                    = 1,
	PixelDensity                   = 2,
	UVSize                         = 3,
	EChartAggregationMode_MAX      = 4
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8_t
{
	No                             = 0,
	Quarter                        = 1,
	Half                           = 2,
	Full                           = 3,
	EImposterCaptureType_MAX       = 4
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EAutoBenchPathType
enum class EAutoBenchPathType : uint8_t
{
	SnakeCurve                     = 0,
	HilbertCurve                   = 1,
	EAutoBenchPathType_MAX         = 2
};


// Enum Engine.EAutoBenchViewMode
enum class EAutoBenchViewMode : uint8_t
{
	Default                        = 0,
	Top                            = 1,
	EAutoBenchViewMode_MAX         = 2
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_SubsurfaceProfile           = 14,
	MP_CustomData0                 = 15,
	MP_CustomData1                 = 16,
	MP_AmbientOcclusion            = 17,
	MP_Refraction                  = 18,
	MP_CustomizedUVs0              = 19,
	MP_CustomizedUVs1              = 20,
	MP_CustomizedUVs2              = 21,
	MP_CustomizedUVs3              = 22,
	MP_CustomizedUVs4              = 23,
	MP_CustomizedUVs5              = 24,
	MP_CustomizedUVs6              = 25,
	MP_CustomizedUVs7              = 26,
	MP_PixelDepthOffset            = 27,
	MP_Temperature                 = 28,
	MP_TemperatureAlpha            = 29,
	MP_MaterialAttributes          = 30,
	MP_CustomOutput                = 31,
	MP_MAX                         = 32
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	ENavigationOptionFlag_MAX      = 4
};


// Enum Engine.*417c3772ae
enum class E*417c3772ae : uint8_t
{
	*af37221aa8                    = 0,
	*f8c07ce8bb                    = 1,
	*f403ddb389                    = 2,
	*82112fe0b5                    = 3,
	*8796fd8ade                    = 4,
	*f1b3716211                    = 5,
	*f55a6eb5ee                    = 6,
	*1b8db71c8b                    = 7,
	*cd71386fc7                    = 8,
	*df6b6f1e13                    = 9,
	*1aa3f04056                    = 10,
	*417c3772ae_MAX                = 11
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.*b63d9f0ddf
enum class E*b63d9f0ddf : uint8_t
{
	*4aa2a4f520                    = 0,
	*07937fa761                    = 1,
	*98dd92a225                    = 2,
	*33c685869f                    = 3,
	*b63d9f0ddf_MAX                = 4
};


// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2
};


// Enum Engine.*5e8404b7a1
enum class E*5e8404b7a1 : uint8_t
{
	*a2f4b5e40b                    = 0,
	*287c4b1d4f                    = 1,
	*a363f7995c                    = 2,
	*5e8404b7a1_MAX                = 3
};


// Enum Engine.*c7fc70bb28
enum class E*c7fc70bb28 : uint8_t
{
	*df82a73a00                    = 0,
	*3178e662c8                    = 1,
	*0b8a929529                    = 2,
	*6f617d06ca                    = 3,
	*4da03f16db                    = 4,
	*0252299ec4                    = 5,
	*5e55617ed1                    = 6,
	*357206c9cb                    = 7,
	*c7fc70bb28_MAX                = 8
};


// Enum Engine.*75e7f97b8c
enum class E*75e7f97b8c : uint8_t
{
	*63de2a2756                    = 0,
	*0f79a83bf1                    = 1,
	*d13672bf5e                    = 2,
	*f7b434433b                    = 3,
	*0b162c3b90                    = 4,
	*d149831135                    = 5,
	*75e7f97b8c_MAX                = 6
};


// Enum Engine.*57d89e9256
enum class E*57d89e9256 : uint8_t
{
	*646c5097e8                    = 0,
	*edea1c838f                    = 1,
	*1c08f056a3                    = 2,
	*e3202eab6d                    = 3,
	*57d89e9256_MAX                = 4
};


// Enum Engine.*3d6c3b9dfe
enum class E*3d6c3b9dfe : uint8_t
{
	*02bee1b7de                    = 0,
	*fa634be7fc                    = 1,
	*21931a8b2f                    = 2,
	*d1a407bb8e                    = 3,
	*93e925eee0                    = 4,
	*ffe231e537                    = 5,
	*afd09c96c7                    = 6,
	*3d6c3b9dfe_MAX                = 7
};


// Enum Engine.*aeeda60447
enum class E*aeeda60447 : uint8_t
{
	*00b56add85                    = 0,
	*bcd96b58ac                    = 1,
	*a82a0ddc92                    = 2,
	*23be8db17e                    = 3,
	*f51be793c3                    = 4,
	*4f660fa883                    = 5,
	*6cc53060bb                    = 6,
	*c9c2d3a8fd                    = 7,
	*c7c9555657                    = 8,
	*588979cd59                    = 9,
	*b8b7ad82e7                    = 10,
	*b3a20f7f08                    = 11,
	*b180dfe593                    = 12,
	*c20b59b867                    = 13,
	*1ceacebac1                    = 14,
	*95efae5862                    = 15,
	*e34dd1b9ca                    = 16,
	*394b6fff11                    = 17,
	*a353de844a                    = 18,
	*a05c612108                    = 19,
	*c0c375e040                    = 20,
	*fa4251d216                    = 21,
	*74d1ce0611                    = 22,
	*6ad1e9cdd7                    = 23,
	*aeeda60447_MAX                = 24
};


// Enum Engine.*715fdf94b6
enum class E*715fdf94b6 : uint8_t
{
	*9734ccfb4d                    = 0,
	*8ab88cc55a                    = 1,
	*c8fcb25797                    = 2,
	*a6ed676ebd                    = 3,
	*c08d2efc57                    = 4,
	*0480c814eb                    = 5,
	*715fdf94b6_MAX                = 6
};


// Enum Engine.*ecc3026ec7
enum class E*ecc3026ec7 : uint8_t
{
	*880ef61aa7                    = 0,
	*58db460ab3                    = 1,
	*f66a718cc2                    = 2,
	*a4142db809                    = 3,
	*9a730db51d                    = 4,
	*ecc3026ec7_MAX                = 5
};


// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0               = 0,
	AOBR_BlurRadius2               = 1,
	AOBR_BlurRadius4               = 2,
	AOBR_MAX                       = 3
};


// Enum Engine.*494519c4af
enum class E*494519c4af : uint8_t
{
	*1130361a19                    = 0,
	*f87be44e51                    = 1,
	*b15e1cc9f5                    = 2,
	*494519c4af_MAX                = 3
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.*fa3f86459a
enum class E*fa3f86459a : uint8_t
{
	*15acb393df                    = 0,
	*60c934eb68                    = 1,
	*2be82ddf3f                    = 2,
	*bdde331af2                    = 3,
	*7b69f69107                    = 4,
	*fa3f86459a_MAX                = 5
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.*3aea23d9f7
enum class E*3aea23d9f7 : uint8_t
{
	*d2590d22ae                    = 0,
	*a203999f63                    = 1,
	*831999de45                    = 2,
	*3aea23d9f7_MAX                = 3
};


// Enum Engine.*2f4241195b
enum class E*2f4241195b : uint8_t
{
	*b25680556f                    = 0,
	*06e8fda33b                    = 1,
	*d10a4ee384                    = 2,
	*2f4241195b_MAX                = 3
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.*cc984aade5
enum class E*cc984aade5 : uint8_t
{
	*aab3af156d                    = 0,
	*4d0ee81d59                    = 1,
	*13576d32e4                    = 2,
	*fb79946313                    = 3,
	*cc984aade5_MAX                = 4
};


// Enum Engine.*2b2d844e69
enum class E*2b2d844e69 : uint8_t
{
	*fd6347691b                    = 0,
	*4af64601fb                    = 1,
	*e4e952f661                    = 2,
	*7230d1a706                    = 3,
	*2b2d844e69_MAX                = 4
};


// Enum Engine.*892ad86eb0
enum class E*892ad86eb0 : uint8_t
{
	*ac5c76d84a                    = 0,
	*03f5ec8ac9                    = 1,
	*23284597f1                    = 2,
	*1a0fc227d7                    = 3,
	*aa294cd2b6                    = 4,
	*892ad86eb0_MAX                = 5
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};


// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};


// Enum Engine.*892830c873
enum class E*892830c873 : uint8_t
{
	*b2f661de61                    = 0,
	*f450cfdbeb                    = 1,
	*caed6336ce                    = 2,
	*8b60fc919b                    = 3,
	*892830c873_MAX                = 4
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.*7d0cc4aaea
enum class E*7d0cc4aaea : uint8_t
{
	*585b77c541                    = 0,
	*11be2816fb                    = 1,
	*7893b2f41b                    = 2,
	*ac5e676813                    = 3,
	*7d0cc4aaea_MAX                = 4
};


// Enum Engine.*6f64e3b708
enum class E*6f64e3b708 : uint8_t
{
	*6949fdfbbc                    = 0,
	*c966a17827                    = 1,
	*579f22bb5f                    = 2,
	*6a3ad59561                    = 3,
	*6f64e3b708_MAX                = 4
};


// Enum Engine.*f9f9979634
enum class E*f9f9979634 : uint8_t
{
	*80698070e9                    = 0,
	*ff62be53c8                    = 1,
	*c7cb0b1089                    = 2,
	*f9f9979634_MAX                = 3
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.*d7e9fe8bd4
enum class E*d7e9fe8bd4 : uint8_t
{
	*c896598006                    = 0,
	*04006f3883                    = 1,
	*f7c702f5dd                    = 2,
	*64e8b97b4a                    = 3,
	*d7e9fe8bd4_MAX                = 4
};


// Enum Engine.*ac3b5db134
enum class E*ac3b5db134 : uint8_t
{
	*587ecbc421                    = 0,
	*f4971059a8                    = 1,
	*7aa9e0cc7d                    = 2,
	*2c3e827a85                    = 3,
	*2fd5240772                    = 4,
	*97a2c3f47c                    = 5,
	*f803f77378                    = 6,
	*4c70f1f13c                    = 7,
	*36e427fb58                    = 8,
	*ac3b5db134_MAX                = 9
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.*e89c4cc4f3
enum class E*e89c4cc4f3 : uint8_t
{
	*2d882c8bd3                    = 0,
	*81dee64348                    = 1,
	*fac6c2ea08                    = 2,
	*194e8155d1                    = 3,
	*e89c4cc4f3_MAX                = 4
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.*7b73f5a8be
enum class E*7b73f5a8be : uint8_t
{
	*096c88d51c                    = 0,
	*7fc32b54ee                    = 1,
	*fc28164c98                    = 2,
	*8bddb376d8                    = 3,
	*7b73f5a8be_MAX                = 4
};


// Enum Engine.*94794b4c07
enum class E*94794b4c07 : uint8_t
{
	*ab54a998d0                    = 0,
	*83034690bb                    = 1,
	*25b75e20e0                    = 2,
	*c73a5eef10                    = 3,
	*06313f0a37                    = 4,
	*94794b4c07_MAX                = 5
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	ESkeletalMeshLODType_MAX       = 2
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_ScreenSize                = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.*bc0a262980
enum class E*bc0a262980 : uint8_t
{
	*db9e4d772a                    = 0,
	*f22aa17dd9                    = 1,
	*ea57ada7ac                    = 2,
	*a5012eb6ff                    = 3,
	*2f4080f038                    = 4,
	*e956ddb2dc                    = 5,
	*cc200f22f5                    = 6,
	*bc0a262980_MAX                = 7
};


// Enum Engine.*552705a7c8
enum class E*552705a7c8 : uint8_t
{
	*6ff1a38432                    = 0,
	*d2caa7aceb                    = 1,
	*6dabd3b490                    = 2,
	*59629bcff3                    = 3,
	*51ab64ded8                    = 4,
	*56d8319883                    = 5,
	*0a3010a266                    = 6,
	*552705a7c8_MAX                = 7
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.*fe14271ae4
enum class E*fe14271ae4 : uint8_t
{
	*2934f20df1                    = 0,
	*af9c2e3b42                    = 1,
	*67e480b5d0                    = 2,
	*4a8e1fe1e2                    = 3,
	*185c5952ee                    = 4,
	*fe14271ae4_MAX                = 5
};


// Enum Engine.*543782090e
enum class E*543782090e : uint8_t
{
	*9370ab6ed4                    = 0,
	*22fbb8a701                    = 1,
	*d14f6f8185                    = 2,
	*34ccf73291                    = 3,
	*1e45a5e567                    = 4,
	*543782090e_MAX                = 5
};


// Enum Engine.*da22849ee8
enum class E*da22849ee8 : uint8_t
{
	*bd84677465                    = 0,
	*2c0788143f                    = 1,
	*9be837df4a                    = 2,
	*ac77b1a5f4                    = 3,
	*e7b659c167                    = 4,
	*da22849ee8_MAX                = 5
};


// Enum Engine.*7427cb624d
enum class E*7427cb624d : uint8_t
{
	*726e0be688                    = 0,
	*12637384d9                    = 1,
	*e430cbe522                    = 2,
	*d2c9b0618c                    = 3,
	*7427cb624d_MAX                = 4
};


// Enum Engine.*1c78739892
enum class E*1c78739892 : uint8_t
{
	*54fb79e7e1                    = 0,
	*057fbcee33                    = 1,
	*9ffd40e382                    = 2,
	*a3ff364865                    = 3,
	*1c78739892_MAX                = 4
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	EBoneTranslationRetargetingMode_MAX = 4
};


// Enum Engine.*52ac74078a
enum class E*52ac74078a : uint8_t
{
	*d577601c9c                    = 0,
	*3817862d71                    = 1,
	*f6bb14ad0a                    = 2,
	*065aa7dc3e                    = 3,
	*52ac74078a_MAX                = 4
};


// Enum Engine.*b2346e2bb6
enum class E*b2346e2bb6 : uint8_t
{
	*135c1d1625                    = 0,
	*2001d633b4                    = 1,
	*deab1eb33a                    = 2,
	*2efcfe307f                    = 3,
	*d2966289f4                    = 4,
	*1665336021                    = 5,
	*34936f1060                    = 6,
	*9c95f07741                    = 7,
	*b2346e2bb6_MAX                = 8
};


// Enum Engine.*9f38621db5
enum class E*9f38621db5 : uint8_t
{
	*ac6a265a02                    = 0,
	*087a20e0bf                    = 1,
	*671bf1f684                    = 2,
	*61b71dd1bd                    = 3,
	*9f38621db5_MAX                = 4
};


// Enum Engine.*07e39f1b5b
enum class E*07e39f1b5b : uint8_t
{
	*320686ba50                    = 0,
	*13d6c8f772                    = 1,
	*774fe78ef8                    = 2,
	*1d5decde65                    = 3,
	*07e39f1b5b_MAX                = 4
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.*a39b954006
enum class E*a39b954006 : uint8_t
{
	*1cf78ce770                    = 0,
	*6f9b360a5e                    = 1,
	*fedf1cdac3                    = 2,
	*a39b954006_MAX                = 3
};


// Enum Engine.*e236b4f481
enum class E*e236b4f481 : uint8_t
{
	*1448376d3d                    = 0,
	*121b2b7d7b                    = 1,
	*278927a108                    = 2,
	*379116b0f4                    = 3,
	*919b127cd9                    = 4,
	*e236b4f481_MAX                = 5
};


// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8_t
{
	RandomSeed                     = 0,
	VariantIndex                   = 1,
	PermutationIndex               = 2,
	EPreviewIndexType_MAX          = 3
};


// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8_t
{
	Probability                    = 0,
	LocalRatio                     = 1,
	GlobalRatio                    = 2,
	ESpawnPointRollType_MAX        = 3
};


// Enum Engine.*4db696c525
enum class E*4db696c525 : uint8_t
{
	*f6b6c4719f                    = 0,
	*74cf8cc86b                    = 1,
	*65e594ebed                    = 2,
	*4db696c525_MAX                = 3
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickPoseWhenRendered       = 2,
	EMeshComponentUpdateFlag_MAX   = 3
};


// Enum Engine.*c1d77d3c6d
enum class E*c1d77d3c6d : uint8_t
{
	*a2ef0f5e23                    = 0,
	*41adae69e5                    = 1,
	*8e564f7076                    = 2,
	*c1d77d3c6d_MAX                = 3
};


// Enum Engine.*809d84c5ae
enum class E*809d84c5ae : uint8_t
{
	*7ff5fe05e7                    = 0,
	*f347882ca1                    = 1,
	*41adc7c978                    = 2,
	*33f8558228                    = 3,
	*809d84c5ae_MAX                = 4
};


// Enum Engine.*07f19b239d
enum class E*07f19b239d : uint8_t
{
	*20b71a819e                    = 0,
	*049c31ff71                    = 1,
	*1a59aea17e                    = 2,
	*07f19b239d_MAX                = 3
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
	Default                        = 0,
	Unfiltered                     = 1,
	SimpleAverage                  = 2,
	Sharpen0                       = 3,
	Sharpen1                       = 4,
	Sharpen2                       = 5,
	Sharpen3                       = 6,
	Sharpen4                       = 7,
	Sharpen5                       = 8,
	Sharpen6                       = 9,
	Sharpen7                       = 10,
	Sharpen8                       = 11,
	Sharpen9                       = 12,
	Sharpen10                      = 13,
	ETextureDownscaleOptions_MAX   = 14
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Landscape         = 12,
	TEXTUREGROUP_LandscapeNormalMap = 13,
	TEXTUREGROUP_LandscapeSpecular = 14,
	TEXTUREGROUP_Cinematic         = 15,
	TEXTUREGROUP_Effects           = 16,
	TEXTUREGROUP_EffectsNotFiltered = 17,
	TEXTUREGROUP_Skybox            = 18,
	TEXTUREGROUP_UI                = 19,
	TEXTUREGROUP_Lightmap          = 20,
	TEXTUREGROUP_RenderTarget      = 21,
	TEXTUREGROUP_MobileFlattened   = 22,
	TEXTUREGROUP_ProcBuilding_Face = 23,
	TEXTUREGROUP_ProcBuilding_LightMap = 24,
	TEXTUREGROUP_Shadowmap         = 25,
	TEXTUREGROUP_ColorLookupTable  = 26,
	TEXTUREGROUP_Terrain_Heightmap = 27,
	TEXTUREGROUP_Terrain_Weightmap = 28,
	TEXTUREGROUP_Bokeh             = 29,
	TEXTUREGROUP_IESLightProfile   = 30,
	TEXTUREGROUP_Pixels2D          = 31,
	TEXTUREGROUP_HierarchicalLOD   = 32,
	TEXTUREGROUP_MAX               = 33
};


// Enum Engine.*45202af025
enum class E*45202af025 : uint8_t
{
	*d2bf100a5f                    = 0,
	*4f5ff40c34                    = 1,
	*d329c764aa                    = 2,
	*34c48decfc                    = 3,
	*c92db732f3                    = 4,
	*f431c3d6af                    = 5,
	*00732037e1                    = 6,
	*ad92c8b273                    = 7,
	*c174362b55                    = 8,
	*4ab2e97b48                    = 9,
	*d7da1f5d91                    = 10,
	*45202af025_MAX                = 11
};


// Enum Engine.*f321d0a689
enum class E*f321d0a689 : uint8_t
{
	*7ada2b87db                    = 0,
	*2e3c136d65                    = 1,
	*5957c2bb95                    = 2,
	*ffdcc448ce                    = 3,
	*f321d0a689_MAX                = 4
};


// Enum Engine.*62331ed790
enum class E*62331ed790 : uint8_t
{
	*562004e888                    = 0,
	*947d825c37                    = 1,
	*abc696b776                    = 2,
	*acc27782fa                    = 3,
	*62331ed790_MAX                = 4
};


// Enum Engine.*e54899b187
enum class E*e54899b187 : uint8_t
{
	*2aa5541771                    = 0,
	*0f1b44626c                    = 1,
	*ff082deb16                    = 2,
	*f02e7f382e                    = 3,
	*b01f08cc5e                    = 4,
	*af45eb598d                    = 5,
	*e54899b187_MAX                = 6
};


// Enum Engine.*442b2298b7
enum class E*442b2298b7 : uint8_t
{
	*2360f18c84                    = 0,
	*787bc9ea0c                    = 1,
	*f72b7cdcfa                    = 2,
	*4dfe2ba4b0                    = 3,
	*442b2298b7_MAX                = 4
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.*a0702b703f
enum class E*a0702b703f : uint8_t
{
	*93073222d7                    = 0,
	*f61b889fa5                    = 1,
	*4e3fc698d2                    = 2,
	*eb24665ade                    = 3,
	*e6307cb17a                    = 4,
	*a0702b703f_MAX                = 5
};


// Enum Engine.*0497a698cb
enum class E*0497a698cb : uint8_t
{
	*965ec363d6                    = 0,
	*7413fdb97e                    = 1,
	*7dd127b3aa                    = 2,
	*d376b055ad                    = 3,
	*0497a698cb_MAX                = 4
};


// Enum Engine.*18bc3cee74
enum class E*18bc3cee74 : uint8_t
{
	*60895c32cc                    = 0,
	*9a63126e92                    = 1,
	*0b3164dda7                    = 2,
	*18bc3cee74_MAX                = 3
};


// Enum Engine.*b16b30c17d
enum class E*b16b30c17d : uint8_t
{
	*98dd4af1b1                    = 0,
	*f598abc081                    = 1,
	*886bf44c7c                    = 2,
	*bcf727f9af                    = 3,
	*b16b30c17d_MAX                = 4
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.*c62f5591ed
enum class E*c62f5591ed : uint8_t
{
	*e59d4ba04d                    = 0,
	*e3264bf613                    = 1,
	*87b8839a02                    = 2,
	*c62f5591ed_MAX                = 3
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.*034558b52a
enum class E*034558b52a : uint8_t
{
	*1d581e7eea                    = 0,
	*3788bb5548                    = 1,
	*7af814e42c                    = 2,
	*2fe53b9d8c                    = 3,
	*034558b52a_MAX                = 4
};


// Enum Engine.*bac6ddaccd
enum class E*bac6ddaccd : uint8_t
{
	*1fc5ba3dcb                    = 0,
	*de5b797748                    = 1,
	*d87a839008                    = 2,
	*bac6ddaccd_MAX                = 3
};


// Enum Engine.*4c38e0bbfa
enum class E*4c38e0bbfa : uint8_t
{
	*c9812538cd                    = 0,
	*6173fab994                    = 1,
	*9582e744e1                    = 2,
	*4c38e0bbfa_MAX                = 3
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.*18650e616b
enum class E*18650e616b : uint8_t
{
	*7841fd290a                    = 0,
	*30dfd60fd1                    = 1,
	*7dabc545b9                    = 2,
	*2dcbec9f84                    = 3,
	*69b1e32c59                    = 4,
	*18650e616b_MAX                = 5
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.*d54d8fbd87
enum class E*d54d8fbd87 : uint8_t
{
	*d285015efd                    = 0,
	*cd5b319f7a                    = 1,
	*8a17f97e8c                    = 2,
	*deee5697f6                    = 3,
	*b9baf0895b                    = 4,
	*ead017b4f8                    = 5,
	*d252c910b9                    = 6,
	*d54d8fbd87_MAX                = 7
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3
};


// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	EHMDTrackingOrigin_MAX         = 2
};


// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3
};


// Enum Engine.*3ae745f76f
enum class E*3ae745f76f : uint8_t
{
	*568a5bab09                    = 0,
	*909191d9ab                    = 1,
	*bf6fc8feef                    = 2,
	*d8073066d0                    = 3,
	*3ae745f76f_MAX                = 4
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5
};


// Enum Engine.*c9650b46ba
enum class E*c9650b46ba : uint8_t
{
	*f448f6dcb5                    = 0,
	*cd87bf8079                    = 1,
	*03c3c88e40                    = 2,
	*c9650b46ba_MAX                = 3
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.*c9260cf503
enum class E*c9260cf503 : uint8_t
{
	*5fb4d9a838                    = 0,
	*583922b58e                    = 1,
	*645b1b82c4                    = 2,
	*c9260cf503_MAX                = 3
};


// Enum Engine.*61efc04498
enum class E*61efc04498 : uint8_t
{
	*87e0eadfae                    = 0,
	*fbb6326f4e                    = 1,
	*0fc0ea3aaa                    = 2,
	*4fa1b94471                    = 3,
	*87aa7d5ddd                    = 4,
	*3815942dcd                    = 5,
	*1b058a7446                    = 6,
	*98b56db737                    = 7,
	*61efc04498_MAX                = 8
};


// Enum Engine.*b35e9b4626
enum class E*b35e9b4626 : uint8_t
{
	*2fb89de234                    = 0,
	*1e3189ce9a                    = 1,
	*45921d9181                    = 2,
	*196f8d27b0                    = 3,
	*18877db253                    = 4,
	*635b2a42f7                    = 5,
	*b35e9b4626_MAX                = 6
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
	EFrictionCombineMode_MAX       = 4
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	EMobileMSAASampleCount_MAX     = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.*5148037931
enum class E*5148037931 : uint8_t
{
	*dee6c06705                    = 0,
	*bc6a5740d9                    = 1,
	*b2202f022b                    = 2,
	*ff5a2b726d                    = 3,
	*5148037931_MAX                = 4
};


// Enum Engine.*ebaf0204fe
enum class E*ebaf0204fe : uint8_t
{
	*6aca063787                    = 0,
	*6a174e53b2                    = 1,
	*c9dce0d1c1                    = 2,
	*e48b43a8d7                    = 3,
	*ebaf0204fe_MAX                = 4
};


// Enum Engine.*ed98c08906
enum class E*ed98c08906 : uint8_t
{
	*0dd89259b8                    = 0,
	*ef8c65c435                    = 1,
	*89d55c3c5f                    = 2,
	*3562f990ac                    = 3,
	*881a49c9cf                    = 4,
	*8385b8c056                    = 5,
	*ed98c08906_MAX                = 6
};


// Enum Engine.*65e0d9d804
enum class E*65e0d9d804 : uint8_t
{
	*d0fd9a7491                    = 0,
	*71a1f769a8                    = 1,
	*1244bee3f5                    = 2,
	*12fc65b443                    = 3,
	*827c881af7                    = 4,
	*209d389061                    = 5,
	*44c5efeb5f                    = 6,
	*65e0d9d804_MAX                = 7
};


// Enum Engine.*1db02a697d
enum class E*1db02a697d : uint8_t
{
	*3e8c50b2b0                    = 0,
	*0f03a19ce3                    = 1,
	*f5f30299d5                    = 2,
	*7cac19a9b7                    = 3,
	*abdb22214f                    = 4,
	*515558aff9                    = 5,
	*1db02a697d_MAX                = 6
};


// Enum Engine.*d1df0e2dde
enum class E*d1df0e2dde : uint8_t
{
	*5b39c840c5                    = 0,
	*100212809d                    = 1,
	*632428557e                    = 2,
	*c504eee8c3                    = 3,
	*d1df0e2dde_MAX                = 4
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EGraphicsAPIType
enum class EGraphicsAPIType : uint8_t
{
	DX11                           = 0,
	DX11_Enhanced                  = 1,
	DX12                           = 2,
	EGraphicsAPIType_MAX           = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.*8d720104d2
enum class E*8d720104d2 : uint8_t
{
	*15d814c75e                    = 0,
	*46ba0b05d9                    = 1,
	*3cdff2bb6f                    = 2,
	*290c3f62e3                    = 3,
	*8d720104d2_MAX                = 4
};


// Enum Engine.*389e553767
enum class E*389e553767 : uint8_t
{
	*d8da77141e                    = 0,
	*ee33e64375                    = 1,
	*924464ec1e                    = 2,
	*65e53d63bb                    = 3,
	*389e553767_MAX                = 4
};


// Enum Engine.*81c4103335
enum class E*81c4103335 : uint8_t
{
	*63e6798d63                    = 0,
	*03f383a892                    = 1,
	*e36fba261a                    = 2,
	*bf42f798e2                    = 3,
	*a008edcd0b                    = 4,
	*86612603b6                    = 5,
	*4b1004d73f                    = 6,
	*81c4103335_MAX                = 7
};


// Enum Engine.*c5de518cdb
enum class E*c5de518cdb : uint8_t
{
	*318c6ced5d                    = 0,
	*bd85600e4b                    = 1,
	*49e6a21046                    = 2,
	*98e5e54b84                    = 3,
	*c90554f93b                    = 4,
	*c5de518cdb_MAX                = 5
};


// Enum Engine.*3ff0a1d43c
enum class E*3ff0a1d43c : uint8_t
{
	*c84a917e67                    = 0,
	*f02c36c18a                    = 1,
	*d52633cd1b                    = 2,
	*340e2587e7                    = 3,
	*3ff0a1d43c_MAX                = 4
};


// Enum Engine.*2dbf59e4d6
enum class E*2dbf59e4d6 : uint8_t
{
	*9805b59429                    = 0,
	*5fad93a83f                    = 1,
	*2fcf435349                    = 2,
	*aac40e97fa                    = 3,
	*2dbf59e4d6_MAX                = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.*bc409a4c3e
enum class E*bc409a4c3e : uint8_t
{
	*d2d6eb472a                    = 0,
	*f7b6876ab3                    = 1,
	*3a55c856a4                    = 2,
	*5278d640cc                    = 3,
	*bc409a4c3e_MAX                = 4
};


// Enum Engine.*775d797a59
enum class E*775d797a59 : uint8_t
{
	*492d78bab0                    = 0,
	*81f00ae069                    = 1,
	*dd5cd60793                    = 2,
	*c99038b79c                    = 3,
	*1da5f05274                    = 4,
	*775d797a59_MAX                = 5
};


// Enum Engine.*18ee3bc92e
enum class E*18ee3bc92e : uint8_t
{
	*a242bb4e02                    = 0,
	*e11c063cd7                    = 1,
	*156b4037df                    = 2,
	*5e67178c52                    = 3,
	*bf78898c5f                    = 4,
	*18ee3bc92e_MAX                = 5
};


// Enum Engine.*2232d03206
enum class E*2232d03206 : uint8_t
{
	*ac866bb589                    = 0,
	*d8aea9ea44                    = 1,
	*76afcccdf6                    = 2,
	*d3ecfd1b02                    = 3,
	*4ecd455524                    = 4,
	*dfb1f759fc                    = 5,
	*efff866070                    = 6,
	*3187afad58                    = 7,
	*b999d81fd1                    = 8,
	*74f0f9caa8                    = 9,
	*2232d03206_MAX                = 10
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.*a0e037dc02
enum class E*a0e037dc02 : uint8_t
{
	*2e59848c45                    = 0,
	*23c6c05832                    = 1,
	*8dd5b131b8                    = 2,
	*a0e037dc02_MAX                = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_ScreenCopy                 = 27,
	PPI_SceneStencil               = 28,
	PPI_IndoorMask                 = 29,
	PPI_GIVolumes                  = 30,
	PPI_Thermal                    = 31,
	PPI_MAX                        = 32
};


// Enum Engine.*21188da261
enum class E*21188da261 : uint8_t
{
	*a1a7270a56                    = 0,
	*c954840e01                    = 1,
	*8826c260d6                    = 2,
	*545b407636                    = 3,
	*21188da261_MAX                = 4
};


// Enum Engine.*e945f8446f
enum class E*e945f8446f : uint8_t
{
	*befff405e3                    = 0,
	*834a85e4ae                    = 1,
	*7d361b121a                    = 2,
	*e945f8446f_MAX                = 3
};


// Enum Engine.*639f43a89b
enum class E*639f43a89b : uint8_t
{
	*c3725e5688                    = 0,
	*d3b998b952                    = 1,
	*3356b8a546                    = 2,
	*7579de2f59                    = 3,
	*a7dcefac56                    = 4,
	*ab739d45cf                    = 5,
	*4bd2c81a0d                    = 6,
	*6f79cea2e1                    = 7,
	*639f43a89b_MAX                = 8
};


// Enum Engine.*0ccebc7eb6
enum class E*0ccebc7eb6 : uint8_t
{
	*fec95b043d                    = 0,
	*c3d1bf2888                    = 1,
	*967ccb93f9                    = 2,
	*125963160f                    = 3,
	*6b1486758e                    = 4,
	*dc2227e12d                    = 5,
	*0ccebc7eb6_MAX                = 6
};


// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4
};


// Enum Engine.*764f0a89f8
enum class E*764f0a89f8 : uint8_t
{
	*e2ed64d0fe                    = 0,
	*0899a668e8                    = 1,
	*e26702bb0b                    = 2,
	*9b18469691                    = 3,
	*5f063d1cb1                    = 4,
	*764f0a89f8_MAX                = 5
};


// Enum Engine.*5ad837619b
enum class E*5ad837619b : uint8_t
{
	*759a4309a9                    = 0,
	*325116f604                    = 1,
	*ecd2062d30                    = 2,
	*d99a832b40                    = 3,
	*c0290808f7                    = 4,
	*5ad837619b_MAX                = 5
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.*a4e66762ae
enum class E*a4e66762ae : uint8_t
{
	*7cdd631732                    = 0,
	*d683e71054                    = 1,
	*c4eeefe9e7                    = 2,
	*0f189b9beb                    = 3,
	*18b2f5cb8e                    = 4,
	*cb508b7992                    = 5,
	*a4e66762ae_MAX                = 6
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};


// Enum Engine.*2683be898e
enum class E*2683be898e : uint8_t
{
	*924faac136                    = 0,
	*30b86c93b6                    = 1,
	*f1b0035ef6                    = 2,
	*0afa3746d2                    = 3,
	*c06d842c28                    = 4,
	*2b95a94d16                    = 5,
	*c9e8ea5452                    = 6,
	*2683be898e_MAX                = 7
};


// Enum Engine.*7cc1ca9ee4
enum class E*7cc1ca9ee4 : uint8_t
{
	*fa46b06c72                    = 0,
	*1d40f3f2aa                    = 1,
	*b0c3c7c48a                    = 2,
	*9936cc1775                    = 3,
	*b65448223c                    = 4,
	*ccd2803f42                    = 5,
	*f893c018ba                    = 6,
	*70659ad6f1                    = 7,
	*de5399c346                    = 8,
	*7cc1ca9ee4_MAX                = 9
};


// Enum Engine.*021bba6ca1
enum class E*021bba6ca1 : uint8_t
{
	*deb6efebcb                    = 0,
	*53b561e174                    = 1,
	*3c4523ec50                    = 2,
	*c2b9dd8226                    = 3,
	*22240be68a                    = 4,
	*c008bdc251                    = 5,
	*6008a60a47                    = 6,
	*353bc22d31                    = 7,
	*c5d692b992                    = 8,
	*70675bdf77                    = 9,
	*95027f9bd9                    = 10,
	*7966ba8b1f                    = 11,
	*3eb70b7345                    = 12,
	*021bba6ca1_MAX                = 13
};


// Enum Engine.*b134354212
enum class E*b134354212 : uint8_t
{
	*7fc03718a6                    = 0,
	*a120afd103                    = 1,
	*529f71f37f                    = 2,
	*9c00999731                    = 3,
	*51b9014fb1                    = 4,
	*6fbd28f40f                    = 5,
	*b134354212_MAX                = 6
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.*0eaef10b27
enum class E*0eaef10b27 : uint8_t
{
	*928e985314                    = 0,
	*53a0478434                    = 1,
	*83d62a3f40                    = 2,
	*0eaef10b27_MAX                = 3
};


// Enum Engine.*fc11a8d197
enum class E*fc11a8d197 : uint8_t
{
	*15ef065c4e                    = 0,
	*2b659fed4e                    = 1,
	*f8b3c1af26                    = 2,
	*aa1880f06a                    = 3,
	*eb7ecaf8c3                    = 4,
	*476a1dd06c                    = 5,
	*142c3a4b2b                    = 6,
	*d54c173a22                    = 7,
	*fc11a8d197_MAX                = 8
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.*bac99f0987
enum class E*bac99f0987 : uint8_t
{
	*e712b7e2c9                    = 0,
	*c4d5ea215f                    = 1,
	*1296aa6004                    = 2,
	*bac99f0987_MAX                = 3
};


// Enum Engine.*a3e8e7f00c
enum class E*a3e8e7f00c : uint8_t
{
	*cd02c48443                    = 0,
	*f9d95afb7d                    = 1,
	*b54d345742                    = 2,
	*419e0e7ec6                    = 3,
	*68935544e7                    = 4,
	*c3e7129427                    = 5,
	*ee169e4597                    = 6,
	*19bfac6a15                    = 7,
	*9de89d2d4e                    = 8,
	*9e9a7301e8                    = 9,
	*a3e8e7f00c_MAX                = 10
};


// Enum Engine.*2e4aa414ee
enum class E*2e4aa414ee : uint8_t
{
	*9b87bec341                    = 0,
	*f9dd3d8676                    = 1,
	*a7e21005dc                    = 2,
	*2e4aa414ee_MAX                = 3
};


// Enum Engine.*086d5ba7ab
enum class E*086d5ba7ab : uint8_t
{
	*06d1e8032f                    = 0,
	*4429ea2e98                    = 1,
	*19f62f87b3                    = 2,
	*585861a2ce                    = 3,
	*ba40d3705b                    = 4,
	*086d5ba7ab_MAX                = 5
};


// Enum Engine.*92fc769d46
enum class E*92fc769d46 : uint8_t
{
	*5819c1e1ed                    = 0,
	*83c99aa43d                    = 1,
	*228fc9f0c6                    = 2,
	*4f5bb52437                    = 3,
	*5e48222c53                    = 4,
	*9d64fee292                    = 5,
	*92fc769d46_MAX                = 6
};


// Enum Engine.*fd5c70f466
enum class E*fd5c70f466 : uint8_t
{
	*e4b4d7c371                    = 0,
	*5def15e31d                    = 1,
	*8099c1ba6f                    = 2,
	*fd5c70f466_MAX                = 3
};


// Enum Engine.*fb9759fa64
enum class E*fb9759fa64 : uint8_t
{
	*2dbb2f0336                    = 0,
	*11f3944fdc                    = 1,
	*bba8ec4f46                    = 2,
	*fcf15147c1                    = 3,
	*fb9759fa64_MAX                = 4
};


// Enum Engine.*601b4c091f
enum class E*601b4c091f : uint8_t
{
	*a433f36d36                    = 0,
	*3160aa6c1d                    = 1,
	*fed3580901                    = 2,
	*e9bbf7cf0b                    = 3,
	*864921e5a3                    = 4,
	*937b982b56                    = 5,
	*2385123f1c                    = 6,
	*601b4c091f_MAX                = 7
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.*01265c0a9c
enum class E*01265c0a9c : uint8_t
{
	*2d0d19e5d9                    = 0,
	*191be796af                    = 1,
	*88492e5bfb                    = 2,
	*01265c0a9c_MAX                = 3
};


// Enum Engine.*2e196da04e
enum class E*2e196da04e : uint8_t
{
	*409bb7cfc3                    = 0,
	*4d24b2a702                    = 1,
	*319b77941b                    = 2,
	*2e196da04e_MAX                = 3
};


// Enum Engine.*46963958f2
enum class E*46963958f2 : uint8_t
{
	*34af1c3237                    = 0,
	*68a6d1c29e                    = 1,
	*4df6e88e5f                    = 2,
	*46963958f2_MAX                = 3
};


// Enum Engine.*a1f1bf9c8c
enum class E*a1f1bf9c8c : uint8_t
{
	*d6aa8381cc                    = 0,
	*ebffa2ee59                    = 1,
	*aeb50c8ce1                    = 2,
	*00ea7b5406                    = 3,
	*a1f1bf9c8c_MAX                = 4
};


// Enum Engine.*420a46eb00
enum class E*420a46eb00 : uint8_t
{
	*e2e9d3a978                    = 0,
	*64faf371c5                    = 1,
	*4d98daa951                    = 2,
	*420a46eb00_MAX                = 3
};


// Enum Engine.*b1daf1aac5
enum class E*b1daf1aac5 : uint8_t
{
	*915a400a0d                    = 0,
	*7c41a560ae                    = 1,
	*80c1ea2e09                    = 2,
	*72517ffc77                    = 3,
	*b1daf1aac5_MAX                = 4
};


// Enum Engine.*ae9432083b
enum class E*ae9432083b : uint8_t
{
	*df91dc8d69                    = 0,
	*bd92669d73                    = 1,
	*91428a3547                    = 2,
	*59be047d3b                    = 3,
	*2390f86b38                    = 4,
	*670ec0fee5                    = 5,
	*35746339d5                    = 6,
	*6a3cbc0624                    = 7,
	*a6946dcca1                    = 8,
	*b5961828f7                    = 9,
	*892e99eecb                    = 10,
	*ae9432083b_MAX                = 11
};


// Enum Engine.*e294aed4e4
enum class E*e294aed4e4 : uint8_t
{
	*c35e91a65f                    = 0,
	*c0ac602d50                    = 1,
	*fe629384c4                    = 2,
	*3aee507099                    = 3,
	*2f5127da7f                    = 4,
	*bcc162d919                    = 5,
	*cdff8507d7                    = 6,
	*e294aed4e4_MAX                = 7
};


// Enum Engine.*38535ecb14
enum class E*38535ecb14 : uint8_t
{
	*7a45d979d2                    = 0,
	*63217dcb94                    = 1,
	*922d3262be                    = 2,
	*13f501cecb                    = 3,
	*612cf4795e                    = 4,
	*b4d488cba8                    = 5,
	*38535ecb14_MAX                = 6
};


// Enum Engine.*848027692e
enum class E*848027692e : uint8_t
{
	*b6c23df7b8                    = 0,
	*96eced59cd                    = 1,
	*0ce9bc179e                    = 2,
	*848027692e_MAX                = 3
};


// Enum Engine.*a0ba5b432b
enum class E*a0ba5b432b : uint8_t
{
	*34679a8899                    = 0,
	*ceec368a76                    = 1,
	*c09dede2a5                    = 2,
	*5447caf3df                    = 3,
	*a0ba5b432b_MAX                = 4
};


// Enum Engine.*a79faeff07
enum class E*a79faeff07 : uint8_t
{
	*3cd5fcecf5                    = 0,
	*f1b47a9e91                    = 1,
	*ef007e1d9a                    = 2,
	*68847b1050                    = 3,
	*0b83c28245                    = 4,
	*2b98f15540                    = 5,
	*a79faeff07_MAX                = 6
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.*a5604e9e30
enum class E*a5604e9e30 : uint8_t
{
	*973a311993                    = 0,
	*5db06b6245                    = 1,
	*c775f79551                    = 2,
	*147243db2d                    = 3,
	*a5604e9e30_MAX                = 4
};


// Enum Engine.*feee6ad69c
enum class E*feee6ad69c : uint8_t
{
	*63b762430b                    = 0,
	*ca47ca0d69                    = 1,
	*1986763587                    = 2,
	*16f2eceff2                    = 3,
	*feee6ad69c_MAX                = 4
};


// Enum Engine.*015fdec6c6
enum class E*015fdec6c6 : uint8_t
{
	*98fba5f0cf                    = 0,
	*eaa0aa7d57                    = 1,
	*4c76a8c3ff                    = 2,
	*8748079f32                    = 3,
	*015fdec6c6_MAX                = 4
};


// Enum Engine.*9df5ef57f4
enum class E*9df5ef57f4 : uint8_t
{
	*eb04eafd0c                    = 0,
	*1beb925773                    = 1,
	*3a33ed5929                    = 2,
	*05dbe01a22                    = 3,
	*debc40fc9f                    = 4,
	*a5ea337da6                    = 5,
	*616acf4928                    = 6,
	*daa544de28                    = 7,
	*c8a9eba60a                    = 8,
	*781c3d7d6e                    = 9,
	*13fdbd9a05                    = 10,
	*09600097e8                    = 11,
	*ff69ba57cc                    = 12,
	*9687d2bd28                    = 13,
	*9df5ef57f4_MAX                = 14
};


// Enum Engine.*93b095e824
enum class E*93b095e824 : uint8_t
{
	*d77ab2e341                    = 0,
	*71bf1552a6                    = 1,
	*adc0b1e621                    = 2,
	*307fc7e471                    = 3,
	*702d8f7c10                    = 4,
	*65de527fa8                    = 5,
	*93b095e824_MAX                = 6
};


// Enum Engine.*4b1f58d47a
enum class E*4b1f58d47a : uint8_t
{
	*a034ba6334                    = 0,
	*5b431ee04d                    = 1,
	*f0789f474f                    = 2,
	*f4a4d8fa40                    = 3,
	*4b1f58d47a_MAX                = 4
};


// Enum Engine.*151ced386f
enum class E*151ced386f : uint8_t
{
	*a59eb76041                    = 0,
	*793bbabe41                    = 1,
	*8d802abb98                    = 2,
	*4629f08f0e                    = 3,
	*151ced386f_MAX                = 4
};


// Enum Engine.*355c93c700
enum class E*355c93c700 : uint8_t
{
	*d23df81247                    = 0,
	*11bbe35166                    = 1,
	*2f7a754b71                    = 2,
	*0d01f0aec7                    = 3,
	*94f8e4af8b                    = 4,
	*c02a2a70c3                    = 5,
	*cd2b49ffdf                    = 6,
	*a31ae0d1bb                    = 7,
	*355c93c700_MAX                = 8
};


// Enum Engine.*526e45285e
enum class E*526e45285e : uint8_t
{
	*98f99100a8                    = 0,
	*6eab3b4d48                    = 1,
	*c043d81f12                    = 2,
	*526e45285e_MAX                = 3
};


// Enum Engine.*0755fde0a6
enum class E*0755fde0a6 : uint8_t
{
	*eb8edf607d                    = 0,
	*14f016b241                    = 1,
	*50b45d3a7d                    = 2,
	*ec5eaed349                    = 3,
	*e0797c749b                    = 4,
	*0755fde0a6_MAX                = 5
};


// Enum Engine.*d9d656e3f2
enum class E*d9d656e3f2 : uint8_t
{
	*d06ac2e7e4                    = 0,
	*125f288106                    = 1,
	*d1f9cf137d                    = 2,
	*d9d656e3f2_MAX                = 3
};


// Enum Engine.*60f13dc0c0
enum class E*60f13dc0c0 : uint8_t
{
	*5079a72dc3                    = 0,
	*bc62fc9728                    = 1,
	*7cfd35bafe                    = 2,
	*b779dd6cce                    = 3,
	*60f13dc0c0_MAX                = 4
};


// Enum Engine.*0b01fcc98d
enum class E*0b01fcc98d : uint8_t
{
	*13c9055b51                    = 0,
	*7316b8c334                    = 1,
	*6f44a7dfca                    = 2,
	*fef1823cdc                    = 3,
	*0b01fcc98d_MAX                = 4
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	Max                            = 2,
	EControlConstraint_MAX         = 3
};


// Enum Engine.*a7780f935b
enum class E*a7780f935b : uint8_t
{
	*bed767e6d4                    = 0,
	*8983b775c6                    = 1,
	*952f318b6c                    = 2,
	*59dcf0b421                    = 3,
	*a7780f935b_MAX                = 4
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.*516d87b0ad
enum class E*516d87b0ad : uint8_t
{
	*865ee30454                    = 0,
	*d27c023d2f                    = 1,
	*dff81573b7                    = 2,
	*10ef67fc31                    = 3,
	*8601702640                    = 4,
	*dec29d2881                    = 5,
	*27e61b58fb                    = 6,
	*ab1f9d668c                    = 7,
	*0d28956a7a                    = 8,
	*516d87b0ad_MAX                = 9
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.*8f69e73231
enum class E*8f69e73231 : uint8_t
{
	*9aaa9fab72                    = 0,
	*fc16d8553e                    = 1,
	*96e4ca18ca                    = 2,
	*d50e369f22                    = 3,
	*8f69e73231_MAX                = 4
};


// Enum Engine.*165b5e5dad
enum class E*165b5e5dad : uint8_t
{
	*f6f7366f43                    = 0,
	*e6a509d9b3                    = 1,
	*ea16f1465e                    = 2,
	*06e034ba16                    = 3,
	*aa7d6add60                    = 4,
	*165b5e5dad_MAX                = 5
};


// Enum Engine.*da3286f6f7
enum class E*da3286f6f7 : uint8_t
{
	*688ae1d3ab                    = 0,
	*a81c50bdca                    = 1,
	*355567fe2e                    = 2,
	*da3286f6f7_MAX                = 3
};


// Enum Engine.EVolumetricDataFormat
enum class EVolumetricDataFormat : uint8_t
{
	R8                             = 0,
	RG8                            = 1,
	RGBA8                          = 2,
	R16                            = 3,
	RG16                           = 4,
	R16_Float                      = 5,
	RG16_Float                     = 6,
	RGBA16_Float                   = 7,
	R32_Float                      = 8,
	RG32_Float                     = 9,
	RGBA32_Float                   = 10,
	EVolumetricDataFormat_MAX      = 11
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	Dereference                    = 2,
	EPostCopyOperation_MAX         = 3
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.*58bf01d849
enum class E*58bf01d849 : uint8_t
{
	*f78f786081                    = 0,
	*703536db94                    = 1,
	*90a247c1ee                    = 2,
	*63cdb05506                    = 3,
	*58bf01d849_MAX                = 4
};


// Enum Engine.*3d339facf7
enum class E*3d339facf7 : uint8_t
{
	*bf7cdf4393                    = 0,
	*f39afd9182                    = 1,
	*38f760fd39                    = 2,
	*3d339facf7_MAX                = 3
};


// Enum Engine.*1c32a7cdca
enum class E*1c32a7cdca : uint8_t
{
	*bc3e8818b6                    = 0,
	*7790485d3c                    = 1,
	*24bebac1e0                    = 2,
	*1c32a7cdca_MAX                = 3
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};



// Enum TslGame.*473cd59b28
enum class E*473cd59b28 : uint8_t
{
	*469185fa18                    = 0,
	*67c8870510                    = 1,
	*8c367c2b87                    = 2,
	*473cd59b28_MAX                = 3
};


// Enum TslGame.ECastCancelReason
enum class ECastCancelReason : uint8_t
{
	Invalid                        = 0,
	CasterAiming                   = 1,
	CasterArming                   = 2,
	CasterApnea                    = 3,
	CasterSprinting                = 4,
	CasterJumping                  = 5,
	CasterFallingLong              = 6,
	CasterFiring                   = 7,
	CasterGroggy                   = 8,
	CasterGroggyOnZeroTimeCast     = 9,
	CasterHipped                   = 10,
	CasterInvalid                  = 11,
	CasterNotAlive                 = 12,
	CasterPickedUpDroppedItem      = 13,
	CasterPickedUpItemFromPackage  = 14,
	CasterReloading                = 15,
	CasterRolling                  = 16,
	CasterTargeting                = 17,
	CasterUnarmAttacking           = 18,
	CasterVault                    = 19,
	CasterStanceInvalid            = 20,
	CasterFreefalling              = 21,
	CastObjectInvalid              = 22,
	CastObjectNotExecutable        = 23,
	FailedCasterMovementDistCheckOnClient = 24,
	FailedCasterMovementDistCheckOnServer = 25,
	FailedCasterAndCastObjDistCheckOnClient = 26,
	FailedCasterAndCastObjDistCheckOnServer = 27,
	CharacterBeingRevivedDead      = 28,
	ManualCancel                   = 29,
	NewCastOnClient                = 30,
	NewCastOnServer                = 31,
	VehicleLanding                 = 32,
	VehicleSeatChanged             = 33,
	VehicleMoving                  = 34,
	VehicleUpsideDown              = 35,
	StuntEmoteOnVehicle            = 36,
	VehicleJumping                 = 37,
	EmergencyPickupAircraft        = 38,
	CasterAttackByZombieAI         = 39,
	BodyCarry                      = 40,
	CasterStunned                  = 41,
	VehicleFuelFull                = 42,
	CharacterBehaviorNotFound      = 43,
	TeamsPlantedBomb               = 44,
	ECastCancelReason_MAX          = 45
};


// Enum TslGame.ETargetingType
enum class ETargetingType : uint8_t
{
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID : uint8_t
{
	None                           = 0,
	Muzzle                         = 1,
	LowerRail                      = 2,
	UpperRail                      = 3,
	Magazine                       = 4,
	Stock                          = 5,
	Angled                         = 6,
	TacPack1                       = 7,
	TacPack2                       = 8,
	TacPack3                       = 9,
	TacPack4                       = 10,
	DronePackage                   = 11,
	EWeaponAttachmentSlotID_MAX    = 12
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType : uint8_t
{
	Debug                          = 0,
	Notify                         = 1,
	Warning                        = 2,
	Error                          = 3,
	Important                      = 4,
	NotifyCommand                  = 5,
	ESystemMessageType_MAX         = 6
};


// Enum TslGame.EOutGamePlatformProvider
enum class EOutGamePlatformProvider : uint8_t
{
	Unknown                        = 0,
	Bro                            = 1,
	PcSteam                        = 2,
	PcDmm                          = 3,
	PcMailRu                       = 4,
	PcKakao                        = 5,
	PcTencent                      = 6,
	ConsoleXbox                    = 7,
	ConsolePsn                     = 8,
	PcLiteGarena                   = 9,
	PcLiteGlobalAccount            = 10,
	PcLiteGlobalAccountJp          = 11,
	ConsoleStadia                  = 12,
	PcEpic                         = 13,
	AI                             = 14,
	Max                            = 15,
	EOutGamePlatformProvider_MAX   = 16
};


// Enum TslGame.EDamageReason
enum class EDamageReason : uint8_t
{
	None                           = 0,
	HeadShot                       = 1,
	TorsoShot                      = 2,
	PelvisShot                     = 3,
	ArmShot                        = 4,
	LegShot                        = 5,
	NonSpecific                    = 6,
	Blocked                        = 7,
	EDamageReason_MAX              = 8
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory : uint8_t
{
	Damage_None                    = 0,
	Damage_Instant                 = 1,
	Damage_Gun                     = 2,
	Damage_Melee                   = 3,
	Damage_Punch                   = 4,
	Damage_ZombiePunch             = 5,
	Damage_Groggy                  = 6,
	Damage_BlueZone                = 7,
	Damage_VehicleHit              = 8,
	Damage_VehicleCrashHit         = 9,
	Damage_Molotov                 = 10,
	Damage_Explosion               = 11,
	Damage_Explosion_Grenade       = 12,
	Damage_Explosion_RedZone       = 13,
	Damage_Explosion_Vehicle       = 14,
	Damage_Explosion_PlantedTimeBomb = 15,
	Damage_Instant_Fall            = 16,
	Damage_Drown                   = 17,
	Damage_BleedOut                = 18,
	Damage_Explosion_JerryCan      = 19,
	Damage_ZombieBuff              = 20,
	Damage_CPPWinExit              = 21,
	Damage_MeleeThrow              = 22,
	Damage_Explosion_C4            = 23,
	Damage_Explosion_StickyBomb    = 24,
	Damage_Explosion_Breach        = 25,
	Damage_Explosion_PanzerFaustWarhead = 26,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration = 27,
	Damage_Explosion_PanzerFaustBackBlast = 28,
	Damage_Explosion_Mortar        = 29,
	Damage_Explosion_BlackZone     = 30,
	Damage_Explosion_Meteor        = 31,
	Damage_TrainHit                = 32,
	Damage_Explosion_PropaneTank   = 33,
	Damage_LootTruckHit            = 34,
	Damage_Explosion_LootTruck     = 35,
	Damage_ShipHit                 = 36,
	Damage_Lava                    = 37,
	Damage_KillTruckHit            = 38,
	Damage_KillTruckTurret         = 39,
	Damage_HelicopterHit           = 40,
	Damage_Explosion_Aircraft      = 41,
	Damage_BlueZoneGrenade         = 42,
	Damage_FBRMolotov              = 43,
	Damage_DronePackage            = 44,
	Damage_Monster                 = 45,
	Damage_Ability                 = 46,
	Damage_Ability_ChickAttack     = 47,
	Damage_Ability_ChickAttack_Wave = 48,
	Damage_Ability_Jump_Wave       = 49,
	Damage_Ability_FireBreath      = 50,
	Damage_Ability_FeathZone       = 51,
	Damage_Rotor                   = 52,
	Damage_MotorGlider             = 53,
	Damage_Gun_Penetrate_BRDM      = 54,
	Damage_Explosion_GasPump       = 55,
	Damage_Blizzard                = 56,
	Damage_SandStorm               = 57,
	Damage_CableCarHit             = 58,
	Damage_MAX                     = 59
};


// Enum TslGame.*bc1c3394aa
enum class E*bc1c3394aa : uint8_t
{
	*c00ceab003                    = 0,
	*32e7910490                    = 1,
	*f71fe7b4dc                    = 2,
	*bc1c3394aa_MAX                = 3
};


// Enum TslGame.ESkydiveState
enum class ESkydiveState : uint8_t
{
	Skydive_None                   = 0,
	Skydive_Freefall               = 1,
	Skydive_ParachuteDeploying     = 2,
	Skydive_ParachuteDeployed      = 3,
	Skydive_ParachuteCollapsing    = 4,
	Skydive_MAX                    = 5
};


// Enum TslGame.EMarkerType
enum class EMarkerType : uint8_t
{
	Normal                         = 0,
	Attack                         = 1,
	Danger                         = 2,
	Defend                         = 3,
	Loot                           = 4,
	Regroup                        = 5,
	Vehicle                        = 6,
	EMarkerType_MAX                = 7
};


// Enum TslGame.EPlatoonSupportRequestEventType
enum class EPlatoonSupportRequestEventType : uint8_t
{
	Start                          = 0,
	Interactible                   = 1,
	Finish                         = 2,
	EPlatoonSupportRequestEventType_MAX = 3
};


// Enum TslGame.EPlatoonCarePackageType
enum class EPlatoonCarePackageType : uint8_t
{
	NotDesignated                  = 0,
	WeaponPackage                  = 1,
	HealingPackage                 = 2,
	EPlatoonCarePackageType_MAX    = 3
};


// Enum TslGame.EOPUIMonsterType
enum class EOPUIMonsterType : uint8_t
{
	None                           = 0,
	Chicken                        = 1,
	ZombieTanker                   = 2,
	ZombieC4                       = 3,
	MAX                            = 4,
	EOPUIMonsterType_MAX           = 5
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID : uint8_t
{
	Head                           = 0,
	Hat                            = 1,
	Eyes                           = 2,
	Mask                           = 3,
	Torso                          = 4,
	TorsoArmor                     = 5,
	Outer                          = 6,
	Backpack                       = 7,
	Hands                          = 8,
	Legs                           = 9,
	Feet                           = 10,
	Belt                           = 11,
	Special01                      = 12,
	Special02                      = 13,
	WeaponPrimary                  = 14,
	WeaponSecondary                = 15,
	WeaponMelee                    = 16,
	WeaponThrowable                = 17,
	WeaponTacticalGear             = 18,
	Bluechip                       = 19,
	MaxOrNone                      = 20,
	EEquipSlotID_MAX               = 21
};


// Enum TslGame.EBreathType
enum class EBreathType : uint8_t
{
	Apnea                          = 0,
	ADS                            = 1,
	EBreathType_MAX                = 2
};


// Enum TslGame.ERequestPartyState
enum class ERequestPartyState : uint8_t
{
	Wait                           = 0,
	Accept                         = 1,
	Decline                        = 2,
	ERequestPartyState_MAX         = 3
};


// Enum TslGame.EBlueBlockerState
enum class EBlueBlockerState : uint8_t
{
	Show                           = 0,
	Looping                        = 1,
	Hide                           = 2,
	Hidden                         = 3,
	EBlueBlockerState_MAX          = 4
};


// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8_t
{
	Shot                           = 0,
	Environment                    = 1,
	Explosion                      = 2,
	PanzerFaustExplosion           = 3,
	SkipFX                         = 4,
	ManualRemoval                  = 5,
	Other                          = 6,
	ETirePunctureReason_MAX        = 7
};


// Enum TslGame.ETslTrainingType
enum class ETslTrainingType : uint8_t
{
	Aim_Sound_Lab                  = 0,
	Grenades                       = 1,
	FiringRange                    = 2,
	VehicleSpot                    = 3,
	GunItemSpot                    = 4,
	CarShootingRange               = 5,
	JumpSchool                     = 6,
	PracticeRange                  = 7,
	OneOnOneArena                  = 8,
	NONE                           = 9,
	ETslTrainingType_MAX           = 10
};


// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5
};


// Enum TslGame.*ed081d574d
enum class E*ed081d574d : uint8_t
{
	*e87d155609                    = 0,
	*06277b9c8d                    = 1,
	*3ce33525fc                    = 2,
	*916d934b66                    = 3,
	*2f0d5d6251                    = 4,
	*dbd21f7bfc                    = 5,
	*7e34f1fff9                    = 6,
	*7d7bf94336                    = 7,
	*ed081d574d_MAX                = 8
};


// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8_t
{
	Initialized                    = 0,
	Prolonged                      = 1,
	CreateThunder                  = 2,
	ETslOvercastAction_MAX         = 3
};


// Enum TslGame.EBeginningState
enum class EBeginningState : uint8_t
{
	Invalid                        = 0,
	Normal                         = 1,
	StartIsland                    = 2,
	Airplane                       = 3,
	Skydiving                      = 4,
	Parachuting                    = 5,
	EBeginningState_MAX            = 6
};


// Enum TslGame.EServerStatType
enum class EServerStatType : uint8_t
{
	UE                             = 0,
	NET                            = 1,
	FRAMEPRO                       = 2,
	EServerStatType_MAX            = 3
};


// Enum TslGame.EPartnerLevel
enum class EPartnerLevel : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Lead                           = 2,
	EPartnerLevel_MAX              = 3
};


// Enum TslGame.EQualityType
enum class EQualityType : uint8_t
{
	EMainQuality                   = 0,
	EViewDistanceQuality           = 1,
	EShadowQuality                 = 2,
	EAntiAliasingQuality           = 3,
	ETextureQuality                = 4,
	EVisualEffectQuality           = 5,
	EPostProcessingQuality         = 6,
	EFoliageQuality                = 7,
	EQualityType_MAX               = 8
};


// Enum TslGame.EReadyToPlayState
enum class EReadyToPlayState : uint8_t
{
	AllFinished                    = 0,
	OnPreLoadMap                   = 1,
	OnPostLoadMap                  = 2,
	CheckMapLoadFinished           = 3,
	NotMapFullyLoaded              = 4,
	CheckPreloadingMap             = 5,
	LoadMapRequested               = 6,
	EReadyToPlayState_MAX          = 7
};


// Enum TslGame.EDistanceBasedEvent
enum class EDistanceBasedEvent : uint8_t
{
	Undefined                      = 0,
	Bullet_Hitted_LivingThings     = 1,
	Bullet_Hitted_Others           = 2,
	Weapon_Gun_Firing              = 3,
	Weapon_Grenade_Bounce          = 4,
	Weapon_Grenade_Explosion       = 5,
	Weapon_Grenade_ExplosionSound  = 6,
	Vehicle_Exhausting             = 7,
	Vehicle_Crash                  = 8,
	Character_FootStep             = 9,
	Character_Landing              = 10,
	MAX                            = 11,
	EDistanceBasedEvent_MAX        = 12
};


// Enum TslGame.*45f8dd317c
enum class E*45f8dd317c : uint8_t
{
	*c85491c722                    = 0,
	*552f3c7fae                    = 1,
	*6cb8eba7db                    = 2,
	*16c90c432c                    = 3,
	*5e2f0ea4b5                    = 4,
	*6baed9db19                    = 5,
	*556b5c53ec                    = 6,
	*45f8dd317c_MAX                = 7
};


// Enum TslGame.EArenaState
enum class EArenaState : uint8_t
{
	Idle                           = 0,
	Active                         = 1,
	Finished                       = 2,
	EArenaState_MAX                = 3
};


// Enum TslGame.ERevivalMethod
enum class ERevivalMethod : uint8_t
{
	None                           = 0,
	BluechipTower                  = 1,
	RevivalTransmitter             = 2,
	Cheat                          = 3,
	ERevivalMethod_MAX             = 4
};


// Enum TslGame.ERankType
enum class ERankType : uint8_t
{
	None                           = 0,
	InvalidSMS                     = 1,
	Penalty                        = 2,
	Restricted                     = 3,
	Unranked                       = 4,
	Bronze                         = 5,
	Silver                         = 6,
	Gold                           = 7,
	Platinum                       = 8,
	Diamond                        = 9,
	Master                         = 10,
	ERankType_MAX                  = 11
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType : uint8_t
{
	Thrown_Grenade                 = 0,
	Thrown_Molotov                 = 1,
	Thrown_Melee                   = 2,
	Thrown_Trap                    = 3,
	Thrown_StickyBomb              = 4,
	Thrown_C4                      = 5,
	Thrown_JerryCan                = 6,
	Thrown_BZ_Grenade              = 7,
	Thrown_TacPack                 = 8,
	Thrown_TraumaBag               = 9,
	Thrown_SpotterScope            = 10,
	Thrown_Drone                   = 11,
	Thrown_BlueChipDetector        = 12,
	Thrown_Toolbox                 = 13,
	Thrown_CanBomb                 = 14,
	Thrown_SpareTire               = 15,
	Thrown_IntegratedRepairKit     = 16,
	Thrown_PlantedBombKit          = 17,
	Thrown_DefusingBombKit         = 18,
	Thrown_Other                   = 19,
	Thrown_MAX                     = 20
};


// Enum TslGame.EPickupAnimType
enum class EPickupAnimType : uint8_t
{
	None                           = 0,
	EPickupAnimType_MAX            = 1
};


// Enum TslGame.EHitDirection
enum class EHitDirection : uint8_t
{
	Hit_Front                      = 0,
	Hit_Back                       = 1,
	Hit_Left                       = 2,
	Hit_Right                      = 3,
	Hit_MAX                        = 4
};


// Enum TslGame.*18b10912d9
enum class E*18b10912d9 : uint8_t
{
	*9e5d7ba562                    = 0,
	*9c029f2b4a                    = 1,
	*2199dec3c1                    = 2,
	*259d2e6e56                    = 3,
	*ef78ab9e1a                    = 4,
	*1f2457df13                    = 5,
	*b77d0bc680                    = 6,
	*12bd90d571                    = 7,
	*18b10912d9_MAX                = 8
};


// Enum TslGame.ECastAnim
enum class ECastAnim : uint8_t
{
	None                           = 0,
	Bandage                        = 1,
	FirstAid                       = 2,
	Medkit                         = 3,
	EnergyDrink                    = 4,
	Painkiller                     = 5,
	Adrenaline                     = 6,
	Door                           = 7,
	Battery                        = 8,
	Crafting                       = 9,
	SuperDrink                     = 10,
	Key                            = 11,
	EmergencyPickup                = 12,
	SelfRevive                     = 13,
	MortarInstall                  = 14,
	BicycleDeploy                  = 15,
	BulletproofShield              = 16,
	VehicleSkin                    = 17,
	UnlockDoor                     = 18,
	Custom                         = 19,
	VehicleRepair                  = 20,
	ArmorRepair                    = 21,
	BlueChipTower                  = 22,
	RevivalTransmitter             = 23,
	OpenBox                        = 24,
	PlantedBomb                    = 25,
	DefusingBomb                   = 26,
	ECastAnim_MAX                  = 27
};


// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8_t
{
	Blind                          = 0,
	Burning                        = 1,
	Stun                           = 2,
	Total                          = 3,
	ECharacterNegativeEffects_MAX  = 4
};


// Enum TslGame.ETslAIPlayerType
enum class ETslAIPlayerType : uint8_t
{
	HumanPlayer                    = 0,
	AITypeNone                     = 1,
	CommonAI                       = 2,
	PillarAI                       = 3,
	DummyAI                        = 4,
	ZombieAI                       = 5,
	MonsterAI                      = 6,
	UltronAI                       = 7,
	ETslAIPlayerType_MAX           = 8
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	Spectating_Player              = 2,
	Replay_Player                  = 3,
	Team_Member                    = 4,
	OtherTeam_Members              = 5,
	Assistant                      = 6,
	GroggyCauser                   = 7,
	ESubjectToReport_MAX           = 8
};


// Enum TslGame.*3993aae957
enum class E*3993aae957 : uint8_t
{
	*5f36c8ba44                    = 0,
	*2267b5b9b9                    = 1,
	*85714ddd60                    = 2,
	*e981093f9f                    = 3,
	*3993aae957_MAX                = 4
};


// Enum TslGame.ETslMapName
enum class ETslMapName : uint8_t
{
	Other                          = 0,
	Baltic                         = 1,
	Desert                         = 2,
	Sanhok                         = 3,
	DihorOtok                      = 4,
	Summerland                     = 5,
	Paramo                         = 6,
	Tiger                          = 7,
	Chimera                        = 8,
	Heaven                         = 9,
	Kiki                           = 10,
	ETslMapName_MAX                = 11
};


// Enum TslGame.FTslHASModeAuraType
enum class EFTslHASModeAuraType : uint8_t
{
	None                           = 0,
	Prop                           = 1,
	Generator                      = 2,
	Character                      = 3,
	FTslHASModeAuraType_MAX        = 4
};


// Enum TslGame.EAscenderSettlePoint
enum class EAscenderSettlePoint : uint8_t
{
	INVALID                        = 0,
	RopeAttachPoint_LOWER          = 1,
	RopeAttachPoint_UPPER          = 2,
	RopeAttachPoint_START          = 3,
	EAscenderSettlePoint_MAX       = 4
};


// Enum TslGame.EAuxilaryIconRequestor
enum class EAuxilaryIconRequestor : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	OwningWidget                   = 2,
	EAuxilaryIconRequestor_MAX     = 3
};


// Enum TslGame.EAuxilaryIconType
enum class EAuxilaryIconType : uint8_t
{
	Invalid                        = 0,
	Drone                          = 1,
	Drone_Destroyed                = 2,
	Detected_Player                = 3,
	Detected_Player_Above          = 4,
	Detected_Player_Below          = 5,
	EAuxilaryIconType_MAX          = 6
};


// Enum TslGame.EScopeType
enum class EScopeType : uint8_t
{
	Main                           = 0,
	Right                          = 1,
	Total                          = 2,
	None                           = 3,
	EScopeType_MAX                 = 4
};


// Enum TslGame.*37c1dfd5f3
enum class E*37c1dfd5f3 : uint8_t
{
	*25904470f4                    = 0,
	*bd415c7798                    = 1,
	*7bf19a2105                    = 2,
	*1cb2896982                    = 3,
	*37c1dfd5f3_MAX                = 4
};


// Enum TslGame.*41b54cf618
enum class E*41b54cf618 : uint8_t
{
	*b704ef896c                    = 0,
	*2f86ad71f3                    = 1,
	*c2a2b8547e                    = 2,
	*bbd8834d38                    = 3,
	*50382eb757                    = 4,
	*72523f940a                    = 5,
	*4c31263474                    = 6,
	*f95bd98424                    = 7,
	*c2110b5b24                    = 8,
	*85cef14be6                    = 9,
	*5102862424                    = 10,
	*0a43f9f384                    = 11,
	*41b54cf618_MAX                = 12
};


// Enum TslGame.ECharacterActionEventType
enum class ECharacterActionEventType : uint8_t
{
	None                           = 0,
	WeaponChange                   = 1,
	ItemUseCast                    = 2,
	TakeDamage                     = 3,
	PostDealDamage                 = 4,
	TryToUnarmedAttack             = 5,
	TryToMeleeAttack               = 6,
	ECharacterActionEventType_MAX  = 7
};


// Enum TslGame.*0f3268fb34
enum class E*0f3268fb34 : uint8_t
{
	*1c64a643ed                    = 0,
	*7071ee20da                    = 1,
	*51407b32a3                    = 2,
	*c78dc34881                    = 3,
	*ee70817fdc                    = 4,
	*0f3268fb34_MAX                = 5
};


// Enum TslGame.EInteractInputType
enum class EInteractInputType : uint8_t
{
	None                           = 0,
	MainInteract                   = 1,
	SecondaryInteract              = 2,
	EInteractInputType_MAX         = 3
};


// Enum TslGame.EKickProcess
enum class EKickProcess : uint8_t
{
	Disconnect                     = 0,
	Shutdown                       = 1,
	ShutdownIn10Sec                = 2,
	DuplicatedLogin                = 3,
	EKickProcess_MAX               = 4
};


// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8_t
{
	Radio                          = 0,
	Direct                         = 1,
	DirectReply                    = 2,
	Warning                        = 3,
	System                         = 4,
	EDirectMessageType_MAX         = 5
};


// Enum TslGame.EDirectMessageOutGameType
enum class EDirectMessageOutGameType : uint8_t
{
	Normal                         = 0,
	Preset                         = 1,
	System                         = 2,
	ClanNormal                     = 3,
	ClanSystem                     = 4,
	EDirectMessageOutGameType_MAX  = 5
};


// Enum TslGame.EFutsalGamePhase
enum class EFutsalGamePhase : uint8_t
{
	Waiting                        = 0,
	FirstHalf                      = 1,
	SecondHalf                     = 2,
	AddedTime                      = 3,
	End                            = 4,
	EFutsalGamePhase_MAX           = 5
};


// Enum TslGame.EUnarmedAnimType
enum class EUnarmedAnimType : uint8_t
{
	Default                        = 0,
	Spray                          = 1,
	EUnarmedAnimType_MAX           = 2
};


// Enum TslGame.EInventorySlotStatePad
enum class EInventorySlotStatePad : uint8_t
{
	Normal                         = 0,
	Focus                          = 1,
	Link                           = 2,
	Selfput                        = 3,
	Disabled                       = 4,
	EInventorySlotStatePad_MAX     = 5
};


// Enum TslGame.EDualMatchingState
enum class EDualMatchingState : uint8_t
{
	NotMatchingState               = 0,
	Matching                       = 1,
	GamePrepared                   = 2,
	EDualMatchingState_MAX         = 3
};


// Enum TslGame.ELastTeamIconState
enum class ELastTeamIconState : uint8_t
{
	Normal                         = 0,
	Groggy                         = 1,
	Die                            = 2,
	ELastTeamIconState_MAX         = 3
};


// Enum TslGame.ESeatState
enum class ESeatState : uint8_t
{
	Empty                          = 0,
	Player                         = 1,
	Teammate                       = 2,
	Enemy                          = 3,
	ESeatState_MAX                 = 4
};


// Enum TslGame.ETslInputDeviceTypeBranch_BPOnly
enum class ETslInputDeviceTypeBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	XboxGamepad                    = 1,
	PS4Gamepad                     = 2,
	SwitchGamepad                  = 3,
	QuailGamepad                   = 4,
	ETslInputDeviceTypeBranch_MAX  = 5
};


// Enum TslGame.ETslInputDeviceGroupBranch_BPOnly
enum class ETslInputDeviceGroupBranch_BPOnly : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	ETslInputDeviceGroupBranch_MAX = 2
};


// Enum TslGame.ETslPlatformTypeBranch_BPOnly
enum class ETslPlatformTypeBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Xbox                           = 1,
	PS4                            = 2,
	Quail                          = 3,
	Invalid                        = 4,
	ETslPlatformTypeBranch_MAX     = 5
};


// Enum TslGame.ETslPlatformGroupBranch_BPOnly
enum class ETslPlatformGroupBranch_BPOnly : uint8_t
{
	PC                             = 0,
	Console                        = 1,
	ETslPlatformGroupBranch_MAX    = 2
};


// Enum TslGame.EBuffPropertyType
enum class EBuffPropertyType : uint8_t
{
	CoolTime                       = 0,
	MeleeDamageRatio               = 1,
	OtherDamageRatio               = 2,
	AllDamageRatio                 = 3,
	MeleeAttackDamageRatio         = 4,
	OtherAttackDamageRatio         = 5,
	MeleeBehindAttackDamageRatio   = 6,
	LandingDamageRatio             = 7,
	GetBoostOnDeal                 = 8,
	MovementSpeedModifier          = 9,
	OnFootSpeedAccelModifier       = 10,
	JumpVelocityModifier           = 11,
	MaxHpModifier                  = 12,
	DecreaseRevivalCastTime        = 13,
	ReloadingSpeedModifier         = 14,
	MultiProperty                  = 15,
	RecoilModifier                 = 16,
	PlayerAttackDamageModifier     = 17,
	MonsterAttackDamageModifier    = 18,
	EBuffPropertyType_MAX          = 19
};


// Enum TslGame.EAutoSpectatePriority
enum class EAutoSpectatePriority : uint8_t
{
	None                           = 0,
	Vehicle                        = 1,
	Distance                       = 2,
	Combat                         = 3,
	EAutoSpectatePriority_MAX      = 4
};


// Enum TslGame.EFBRClass
enum class EFBRClass : uint8_t
{
	WARRIOR                        = 0,
	RANGER                         = 1,
	WIZARD                         = 2,
	PALADIN                        = 3,
	EFBRClass_MAX                  = 4
};


// Enum TslGame.ELeagueMatchStatistic
enum class ELeagueMatchStatistic : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	ELeagueMatchStatistic_MAX      = 3
};


// Enum TslGame.ELeagueMatchResultState
enum class ELeagueMatchResultState : uint8_t
{
	None                           = 0,
	WinnerWinnerChickenDinner      = 1,
	Statistic                      = 2,
	Ranking                        = 3,
	ELeagueMatchResultState_MAX    = 4
};


// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType : uint8_t
{
	TeamWipeOutAnim                = 0,
	PersonalKillingSpreeAnim       = 1,
	TeamTotalKillingSpreeAnim      = 2,
	EObserverHudAnimType_MAX       = 3
};


// Enum TslGame.EPreviewPlatformIconType
enum class EPreviewPlatformIconType : uint8_t
{
	XboxOne                        = 0,
	PS4                            = 1,
	Switch                         = 2,
	Quail                          = 3,
	None                           = 4,
	EPreviewPlatformIconType_MAX   = 5
};


// Enum TslGame.EMovementBaseType
enum class EMovementBaseType : uint8_t
{
	None                           = 0,
	Train                          = 1,
	Ship                           = 2,
	CableCar                       = 3,
	COUNT                          = 4,
	EMovementBaseType_MAX          = 5
};


// Enum TslGame.*e87f007afe
enum class E*e87f007afe : uint8_t
{
	*58d79d344f                    = 0,
	*1ac7a5dbc5                    = 1,
	*b6176c7e49                    = 2,
	*e87f007afe_MAX                = 3
};


// Enum TslGame.EBlueZoneShape
enum class EBlueZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	Rectangle                      = 2,
	EBlueZoneShape_MAX             = 3
};


// Enum TslGame.EGameZoneType
enum class EGameZoneType : uint8_t
{
	SafeZone                       = 0,
	PlayZone                       = 1,
	BlueZone                       = 2,
	RedZone                        = 3,
	BlackZone                      = 4,
	EGameZoneType_MAX              = 5
};


// Enum TslGame.ERespawnType
enum class ERespawnType : uint8_t
{
	Airborne                       = 0,
	DeadPoint                      = 1,
	StartPoint                     = 2,
	Selectable                     = 3,
	RandomPoint                    = 4,
	CheckPoint                     = 5,
	ERespawnType_MAX               = 6
};


// Enum TslGame.EPlatoonTeam
enum class EPlatoonTeam : uint8_t
{
	None                           = 0,
	Blue                           = 1,
	Red                            = 2,
	EPlatoonTeam_MAX               = 3
};


// Enum TslGame.EAutoRecoveryType
enum class EAutoRecoveryType : uint8_t
{
	None                           = 0,
	Human                          = 1,
	Zombie                         = 2,
	HumanAndZombie                 = 3,
	EAutoRecoveryType_MAX          = 4
};


// Enum TslGame.EZombieVirusType
enum class EZombieVirusType : uint8_t
{
	None                           = 0,
	Attacked                       = 1,
	All                            = 2,
	EZombieVirusType_MAX           = 3
};


// Enum TslGame.EPrivateTrainingRoomType
enum class EPrivateTrainingRoomType : uint8_t
{
	IndoorRange                    = 0,
	PracticalTrainingRoom          = 1,
	None                           = 2,
	EPrivateTrainingRoomType_MAX   = 3
};


// Enum TslGame.ETeamMateEmoteErrorType
enum class ETeamMateEmoteErrorType : uint8_t
{
	Normal                         = 0,
	ExcessFollower                 = 1,
	ExcessLimitDistance            = 2,
	ETeamMateEmoteErrorType_MAX    = 3
};


// Enum TslGame.EInventoryRadioMessageType
enum class EInventoryRadioMessageType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Equipment                      = 2,
	Weapon                         = 3,
	Attachment                     = 4,
	TacticalGear                   = 5,
	Empty_Head                     = 6,
	Empty_TorsoArmor               = 7,
	Empty_Backpack                 = 8,
	Empty_PrimaryWeapon            = 9,
	Empty_SecondaryWeapon          = 10,
	Empty_WeaponMelee              = 11,
	Empty_WeaponThrowable          = 12,
	Empty_LowMagScope              = 13,
	Empty_HighMagScope             = 14,
	Empty_Muzzle                   = 15,
	Empty_LowerRail                = 16,
	Empty_Magazine                 = 17,
	Empty_Stock                    = 18,
	Empty_Canted                   = 19,
	None                           = 20,
	EInventoryRadioMessageType_MAX = 21
};


// Enum TslGame.ERadioMessageInteractionType
enum class ERadioMessageInteractionType : uint8_t
{
	DroppedItem                    = 0,
	Vehicle                        = 1,
	CarepackageOrDeadbox           = 2,
	VendingMachine                 = 3,
	RevivalTower                   = 4,
	None                           = 5,
	ERadioMessageInteractionType_MAX = 6
};


// Enum TslGame.ERadioMessageAlarmSoundCategory
enum class ERadioMessageAlarmSoundCategory : uint8_t
{
	Normal                         = 0,
	Notify                         = 1,
	Warning                        = 2,
	Important                      = 3,
	Invalid                        = 4,
	ERadioMessageAlarmSoundCategory_MAX = 5
};


// Enum TslGame.ERadioMessageCategory
enum class ERadioMessageCategory : uint8_t
{
	Affirmative                    = 0,
	ThankYou                       = 1,
	NeedMed                        = 2,
	Negative                       = 3,
	Sorry                          = 4,
	NeedAmmo                       = 5,
	EnemySpotted                   = 6,
	EnemyAreaSpotted               = 7,
	ItemSpotted                    = 8,
	Ping                           = 9,
	AreaPing                       = 10,
	HelpMe                         = 11,
	AreaNeedHelp                   = 12,
	AreaBackup                     = 13,
	WayPoint                       = 14,
	EmergencyPickup                = 15,
	TeamMateEmote                  = 16,
	Inventory                      = 17,
	PlantingBomb                   = 18,
	DefusingBomb                   = 19,
	MovePlantedBombSite            = 20,
	BombCoin                       = 21,
	Rush                           = 22,
	Max                            = 23,
	Invalid                        = 24,
	ERadioMessageCategory_MAX      = 25
};


// Enum TslGame.ERadioMessageHighlightType
enum class ERadioMessageHighlightType : uint8_t
{
	None                           = 0,
	EnemySpotted                   = 1,
	WorldMapPing                   = 2,
	ERadioMessageHighlightType_MAX = 3
};


// Enum TslGame.EEquippedWeaponRTPC
enum class EEquippedWeaponRTPC : uint8_t
{
	None                           = 0,
	HandBomb_Bottle                = 1,
	HandBomb_Metal                 = 2,
	Melee                          = 3,
	Pistol                         = 4,
	SMG                            = 5,
	AR                             = 6,
	SR                             = 7,
	Max                            = 8,
	EEquippedWeaponRTPC_MAX        = 9
};


// Enum TslGame.*14c9cb34af
enum class E*14c9cb34af : uint8_t
{
	*c2463e7a3b                    = 0,
	*0af420b79b                    = 1,
	*6f0bf1aae7                    = 2,
	*14c9cb34af_MAX                = 3
};


// Enum TslGame.EViewModeActorCenterPosition
enum class EViewModeActorCenterPosition : uint8_t
{
	None                           = 0,
	Center                         = 1,
	Bottom                         = 2,
	EViewModeActorCenterPosition_MAX = 3
};


// Enum TslGame.EViewModeCategory
enum class EViewModeCategory : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Parachute                      = 2,
	Character                      = 3,
	Vehicle                        = 4,
	FloatingVehicle                = 5,
	LootCrate                      = 6,
	EViewModeCategory_MAX          = 7
};


// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType : uint8_t
{
	RESUME                         = 0,
	SETTINGS                       = 1,
	TEAM_MANAGEMENT                = 2,
	KEY_GUIDE                      = 3,
	RESTART_LOBBY                  = 4,
	LEAVE_MATCH                    = 5,
	RETURN_TO_GAME                 = 6,
	EXIT_TO_DESKTOP                = 7,
	GM_COMMAND_INGAME_HELPER       = 8,
	MATCH_LOG                      = 9,
	ESystemMenuButtonType_MAX      = 10
};


// Enum TslGame.*ed44f7c3e0
enum class E*ed44f7c3e0 : uint8_t
{
	*9b04014833                    = 0,
	*36e4e8af70                    = 1,
	*26d589b8bf                    = 2,
	*ed44f7c3e0_MAX                = 3
};


// Enum TslGame.*c320873ad7
enum class E*c320873ad7 : uint8_t
{
	*624c61066f                    = 0,
	*de467801fb                    = 1,
	*f6d2ec88ed                    = 2,
	*cfb07b7e75                    = 3,
	*d2892cbac2                    = 4,
	*c320873ad7_MAX                = 5
};


// Enum TslGame.*a4a7e19139
enum class E*a4a7e19139 : uint8_t
{
	*817b72ece5                    = 0,
	*703b6b8c4a                    = 1,
	*36ae88398d                    = 2,
	*c502c32b25                    = 3,
	*a51c093390                    = 4,
	*b49df15915                    = 5,
	*ab2fb7bc9a                    = 6,
	*a4a7e19139_MAX                = 7
};


// Enum TslGame.EReticleType
enum class EReticleType : uint8_t
{
	RedDot                         = 0,
	HoloSight                      = 1,
	Scope2x                        = 2,
	Scope3x                        = 3,
	Scope4x                        = 4,
	Scope6x                        = 5,
	Scope8x                        = 6,
	EReticleType_MAX               = 7
};


// Enum TslGame.EKeyHintType
enum class EKeyHintType : uint8_t
{
	Menu                           = 0,
	Parachuting                    = 1,
	Character                      = 2,
	Driver                         = 3,
	Rider                          = 4,
	WeaponUse                      = 5,
	WeaponChange                   = 6,
	ADS                            = 7,
	Aim                            = 8,
	ADS_8x15x                      = 9,
	ADS_6x                         = 10,
	ADS_1x2x3x                     = 11,
	ADS_CantedSight                = 12,
	ADS_IronSight                  = 13,
	Throwing                       = 14,
	Heal                           = 15,
	Swimming                       = 16,
	TeamSpectating                 = 17,
	KillerSpectating               = 18,
	WorldMap                       = 19,
	None                           = 20,
	FreefallNew                    = 21,
	ParachuteNew                   = 22,
	SpikeTrap                      = 23,
	MotorGlider                    = 24,
	JerryCan                       = 25,
	Melee                          = 26,
	MeleeThrowing                  = 27,
	ArenaModeHelpBox               = 28,
	Other                          = 29,
	EKeyHintType_MAX               = 30
};


// Enum TslGame.*524654bfbe
enum class E*524654bfbe : uint8_t
{
	*1150f5f6ed                    = 0,
	*8eb686a054                    = 1,
	*909a20b1a6                    = 2,
	*645b4add75                    = 3,
	*8551a79a91                    = 4,
	*1e4dc094bf                    = 5,
	*8c225121ad                    = 6,
	*39df4c87c5                    = 7,
	*ec9cba9738                    = 8,
	*524654bfbe_MAX                = 9
};


// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8_t
{
	NoChange                       = 0,
	Rainy                          = 1,
	Foggy                          = 2,
	EWeatherChange_MAX             = 3
};


// Enum TslGame.*4c94d9bc93
enum class E*4c94d9bc93 : uint8_t
{
	*2781ee881b                    = 0,
	*7639fb05af                    = 1,
	*915ecd3968                    = 2,
	*5e9d2af851                    = 3,
	*fe86e72741                    = 4,
	*2dd933a0eb                    = 5,
	*4c94d9bc93_MAX                = 6
};


// Enum TslGame.EMinimapColorType
enum class EMinimapColorType : uint8_t
{
	DESATURATED                    = 0,
	SATURATED                      = 1,
	EMinimapColorType_MAX          = 2
};


// Enum TslGame.EDamageZoneType
enum class EDamageZoneType : uint8_t
{
	Head                           = 0,
	Torso                          = 1,
	Arm                            = 2,
	Pelvis                         = 3,
	Leg                            = 4,
	EDamageZoneType_MAX            = 5
};


// Enum TslGame.ETslWidgetCreationMethod
enum class ETslWidgetCreationMethod : uint8_t
{
	CreateOnInit                   = 0,
	OnDemand                       = 1,
	OnDemandOnOnlyPC               = 2,
	OnDemandOnOnlyConsole          = 3,
	ETslWidgetCreationMethod_MAX   = 4
};


// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8_t
{
	None                           = 0,
	Uniform_Distribution           = 1,
	Ringtaw                        = 2,
	Outsider                       = 3,
	RingtawOrOutsider              = 4,
	ERedZoneGenerateType_MAX       = 5
};


// Enum TslGame.ETslHudType
enum class ETslHudType : uint8_t
{
	None                           = 0,
	CharacterHud                   = 1,
	SpectatorHud                   = 2,
	ObserverHud                    = 3,
	ReplayHud                      = 4,
	LeagueReplayHud                = 5,
	ETslHudType_MAX                = 6
};


// Enum TslGame.ETargetAnimDynamicsType
enum class ETargetAnimDynamicsType : uint8_t
{
	None                           = 0,
	Hair                           = 1,
	Coat                           = 2,
	ETargetAnimDynamicsType_MAX    = 3
};


// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8_t
{
	Hair                           = 0,
	Outer                          = 1,
	Legs                           = 2,
	Torso                          = 3,
	Head                           = 4,
	Mask                           = 5,
	Backpack                       = 6,
	Eyes                           = 7,
	TorsoArmor                     = 8,
	Hands                          = 9,
	Feet                           = 10,
	Belt                           = 11,
	Face                           = 12,
	EAnimatableCustomizableTypes_MAX = 13
};


// Enum TslGame.EGameEndState
enum class EGameEndState : uint8_t
{
	None                           = 0,
	CereMony                       = 1,
	Cinematic                      = 2,
	MatchFinish                    = 3,
	EGameEndState_MAX              = 4
};


// Enum TslGame.*9b438a795c
enum class E*9b438a795c : uint8_t
{
	*dd40e6abc2                    = 0,
	*e00442b22f                    = 1,
	*2e5d31742d                    = 2,
	*9b438a795c_MAX                = 3
};


// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates : uint8_t
{
	XBox_Home                      = 0,
	Main                           = 1,
	Main01                         = 2,
	Menu                           = 3,
	Custom                         = 4,
	Custom01                       = 5,
	EventPass_Milestone            = 6,
	EventPass_Milestone01          = 7,
	EventPass_Missions             = 8,
	ViewMode_Character             = 9,
	ViewMode_Weapon                = 10,
	ViewMode_Parachute             = 11,
	EventPass_Milestone_0_Particle = 12,
	None                           = 13,
	ELobbyCameraStates_MAX         = 14
};


// Enum TslGame.EUiShowType
enum class EUiShowType : uint8_t
{
	AlwaysShow                     = 0,
	TpsOnlyShow                    = 1,
	FpsOnlyShow                    = 2,
	AlwaysHide                     = 3,
	EUiShowType_MAX                = 4
};


// Enum TslGame.EMatchLogTab
enum class EMatchLogTab : uint8_t
{
	All                            = 0,
	Squad                          = 1,
	You                            = 2,
	EMatchLogTab_MAX               = 3
};


// Enum TslGame.EMatchLogRelative
enum class EMatchLogRelative : uint8_t
{
	None                           = 0,
	You                            = 1,
	Squad                          = 2,
	Other                          = 3,
	EMatchLogRelative_MAX          = 4
};


// Enum TslGame.EMatchLogType
enum class EMatchLogType : uint8_t
{
	None                           = 0,
	KillMessage                    = 1,
	SystemMessage                  = 2,
	EMatchLogType_MAX              = 3
};


// Enum TslGame.ETslApRewardLogicType
enum class ETslApRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ETslApRewardLogicType_MAX      = 2
};


// Enum TslGame.ETslXpRewardLogicType
enum class ETslXpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ETslXpRewardLogicType_MAX      = 2
};


// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8_t
{
	None                           = 0,
	Public                         = 1,
	ScoreBased                     = 2,
	ETslBpRewardLogicType_MAX      = 3
};


// Enum TslGame.ELobbyItemStateFlags
enum class ELobbyItemStateFlags : uint8_t
{
	Default                        = 0,
	Vehicle_DoorOpened             = 1,
	ELobbyItemStateFlags_MAX       = 2
};


// Enum TslGame.ELobbyCustomizingSlotType
enum class ELobbyCustomizingSlotType : uint8_t
{
	None                           = 0,
	VehicleSlot                    = 1,
	WeaponSlot                     = 2,
	ELobbyCustomizingSlotType_MAX  = 3
};


// Enum TslGame.EGamepadInputResponseForTapIconWidget
enum class EGamepadInputResponseForTapIconWidget : uint8_t
{
	None                           = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	EGamepadInputResponseForTapIconWidget_MAX = 3
};


// Enum TslGame.EActionType
enum class EActionType : uint8_t
{
	Action                         = 0,
	Axis                           = 1,
	Action_Combo                   = 2,
	EActionType_MAX                = 3
};


// Enum TslGame.EEmergencyPickupState
enum class EEmergencyPickupState : uint8_t
{
	None                           = 0,
	Prepare                        = 1,
	Aircraft                       = 2,
	EEmergencyPickupState_MAX      = 3
};


// Enum TslGame.*b1297abd86
enum class E*b1297abd86 : uint8_t
{
	*493022070a                    = 0,
	*406cdd3069                    = 1,
	*447b65413f                    = 2,
	*5ef1327dc3                    = 3,
	*7c262ece6e                    = 4,
	*b1297abd86_MAX                = 5
};


// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8_t
{
	Pressed                        = 0,
	Released                       = 1,
	Tap                            = 2,
	Hold                           = 3,
	DoubleTap                      = 4,
	EGamepadInputResponseTypes_MAX = 5
};


// Enum TslGame.ERadioMessagePresets
enum class ERadioMessagePresets : uint8_t
{
	Preset1                        = 0,
	Preset2                        = 1,
	ERadioMessagePresets_MAX       = 2
};


// Enum TslGame.EGamepadPresets
enum class EGamepadPresets : uint8_t
{
	ControllerTypeA                = 0,
	ControllerTypeB                = 1,
	ControllerTypeC                = 2,
	CustomType                     = 3,
	Max                            = 4,
	EGamepadPresets_MAX            = 5
};


// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases : uint8_t
{
	Reload                         = 0,
	ExitVehicle                    = 1,
	EKeyGuideShowCases_MAX         = 2
};


// Enum TslGame.ETslInputModes
enum class ETslInputModes : uint8_t
{
	Toggle                         = 0,
	Hold                           = 1,
	DoubleTap                      = 2,
	ETslInputModes_MAX             = 3
};


// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay : uint8_t
{
	Replay                         = 0,
	Killcam                        = 1,
	KeyGuide                       = 2,
	EGameplayClientReplay_MAX      = 3
};


// Enum TslGame.*6a2319568e
enum class E*6a2319568e : uint8_t
{
	*123f3b7adf                    = 0,
	*a5038fe80f                    = 1,
	*6a2319568e_MAX                = 2
};


// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions : uint8_t
{
	Crouch                         = 0,
	Prone                          = 1,
	Walk                           = 2,
	Sprint                         = 3,
	HoldRotation                   = 4,
	HoldBreath                     = 5,
	Peek                           = 6,
	Map                            = 7,
	ADS                            = 8,
	Aim                            = 9,
	HoldAngled                     = 10,
	EInputModeSettingActions_MAX   = 11
};


// Enum TslGame.*b998d6e907
enum class E*b998d6e907 : uint8_t
{
	*5ea1825783                    = 0,
	*4926d75d66                    = 1,
	*ed6564dc67                    = 2,
	*b998d6e907_MAX                = 3
};


// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType : uint8_t
{
	None                           = 0,
	AutoAim                        = 1,
	NoRecoil                       = 2,
	EspOrPenetration               = 3,
	Speedhack                      = 4,
	WallPenetration                = 5,
	FlyingCar                      = 6,
	Other                          = 7,
	EReportDetailCauseType_MAX     = 8
};


// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8_t
{
	PublicOrCustomGame             = 0,
	Killcam                        = 1,
	Replay                         = 2,
	EReportedSessionType_MAX       = 3
};


// Enum TslGame.EReportCause
enum class EReportCause : uint8_t
{
	Default                        = 0,
	Cheat                          = 1,
	TeamKill                       = 2,
	Teaming                        = 3,
	InappropriateID                = 4,
	VerbalHarassment               = 5,
	Griefing                       = 6,
	StreamSniping                  = 7,
	InappropriateClanTag           = 8,
	Abusing                        = 9,
	MarketingSpamming              = 10,
	EReportCause_MAX               = 11
};


// Enum TslGame.ItemPackageType
enum class EItemPackageType : uint8_t
{
	RootBox                        = 0,
	CarePackage                    = 1,
	DroppedEventPackage            = 2,
	VehicleTrunk                   = 3,
	ItemPackageType_MAX            = 4
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType : uint8_t
{
	Normal                         = 0,
	Flying                         = 1,
	Opened                         = 2,
	ECarePackageIconType_MAX       = 3
};


// Enum TslGame.EVehicleRideType
enum class EVehicleRideType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Aircraft                       = 2,
	Mortar                         = 3,
	EVehicleRideType_MAX           = 4
};


// Enum TslGame.ECharacterIconType
enum class ECharacterIconType : uint8_t
{
	Normal                         = 0,
	Vehicle                        = 1,
	Parachute                      = 2,
	Die                            = 3,
	Groggy                         = 4,
	Quitter                        = 5,
	Observer                       = 6,
	Aircraft                       = 7,
	EmergencyPickup                = 8,
	ECharacterIconType_MAX         = 9
};


// Enum TslGame.EReportUiType
enum class EReportUiType : uint8_t
{
	Normal                         = 0,
	Respawn                        = 1,
	EReportUiType_MAX              = 2
};


// Enum TslGame.EZombieRuleType
enum class EZombieRuleType : uint8_t
{
	None                           = 0,
	BattleRoyale                   = 1,
	Survival                       = 2,
	Elimination                    = 3,
	EZombieRuleType_MAX            = 4
};


// Enum TslGame.EZombieModePlayerState
enum class EZombieModePlayerState : uint8_t
{
	None                           = 0,
	Human                          = 1,
	ReadyToRevive                  = 2,
	Zombie                         = 3,
	EZombieModePlayerState_MAX     = 4
};


// Enum TslGame.ETeamChangeZombieMode
enum class ETeamChangeZombieMode : uint8_t
{
	None                           = 0,
	LeaveTeam                      = 1,
	JoinTeam                       = 2,
	ETeamChangeZombieMode_MAX      = 3
};


// Enum TslGame.ETslMapMarkerTowerState
enum class ETslMapMarkerTowerState : uint8_t
{
	Init                           = 0,
	Enable                         = 1,
	Active                         = 2,
	Disable                        = 3,
	ETslMapMarkerTowerState_MAX    = 4
};


// Enum TslGame.ETslNotificationMessageAnimationType
enum class ETslNotificationMessageAnimationType : uint8_t
{
	None                           = 0,
	Appear                         = 1,
	Loop                           = 2,
	ETslNotificationMessageAnimationType_MAX = 3
};


// Enum TslGame.ETslNotificationMessageColorType
enum class ETslNotificationMessageColorType : uint8_t
{
	RichText                       = 0,
	Default                        = 1,
	Blue                           = 2,
	Red                            = 3,
	Yellow                         = 4,
	ETslNotificationMessageColorType_MAX = 5
};


// Enum TslGame.ESoundType
enum class ESoundType : uint8_t
{
	Count                          = 0,
	Start                          = 1,
	ESoundType_MAX                 = 2
};


// Enum TslGame.ERoundEndPointType
enum class ERoundEndPointType : uint8_t
{
	Empty                          = 0,
	Lost                           = 1,
	Won                            = 2,
	Draw                           = 3,
	ERoundEndPointType_MAX         = 4
};


// Enum TslGame.ELeaningState
enum class ELeaningState : uint8_t
{
	Normal                         = 0,
	LeanLeft                       = 1,
	LeanRight                      = 2,
	ELeaningState_MAX              = 3
};


// Enum TslGame.EEventBoostState
enum class EEventBoostState : uint8_t
{
	Normal                         = 0,
	UsingBoost                     = 1,
	CantUse                        = 2,
	EEventBoostState_MAX           = 3
};


// Enum TslGame.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8_t
{
	Off                            = 0,
	SingleTrace                    = 1,
	MultiTrace                     = 2,
	EVehicleAIAvoidanceMode_MAX    = 3
};


// Enum TslGame.ESpawnType
enum class ESpawnType : uint8_t
{
	Single                         = 0,
	ContinuousOnTimer              = 1,
	ContinuousOnDeath              = 2,
	ESpawnType_MAX                 = 3
};


// Enum TslGame.*decdb97c9a
enum class E*decdb97c9a : uint8_t
{
	*454e13e975                    = 0,
	*29e3e9d452                    = 1,
	*fb88cd4031                    = 2,
	*cb20135c90                    = 3,
	*89c39e55a6                    = 4,
	*1a997ff52c                    = 5,
	*b71a51efa3                    = 6,
	*3c475bbc57                    = 7,
	*00847a0e4a                    = 8,
	*7d4c756fa0                    = 9,
	*decdb97c9a_MAX                = 10
};


// Enum TslGame.*f40f972e5c
enum class E*f40f972e5c : uint8_t
{
	*2cb91521d8                    = 0,
	*3fd72c3dd0                    = 1,
	*80d692758c                    = 2,
	*7b40f4f157                    = 3,
	*f40f972e5c_MAX                = 4
};


// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect : uint8_t
{
	S_None                         = 0,
	S_Concrete_Roll                = 1,
	S_Concrete_Skid                = 2,
	S_Concrete_Spin                = 3,
	S_Dirt_Roll                    = 4,
	S_Dirt_Skid                    = 5,
	S_Dirt_Spin                    = 6,
	S_Water_Roll                   = 7,
	S_Water_Skid                   = 8,
	S_Water_Spin                   = 9,
	S_Metal_Roll                   = 10,
	S_Metal_Skid                   = 11,
	S_Metal_Spin                   = 12,
	S_Wood_Roll                    = 13,
	S_Wood_Skid                    = 14,
	S_Wood_Spin                    = 15,
	S_Rock_Roll                    = 16,
	S_Rock_Skid                    = 17,
	S_Rock_Spin                    = 18,
	S_Grass_Roll                   = 19,
	S_Grass_Skid                   = 20,
	S_Grass_Spin                   = 21,
	S_Sand_Roll                    = 22,
	S_Sand_Skid                    = 23,
	S_Sand_Spin                    = 24,
	S_Concrete_Brake               = 25,
	S_Dirt_Brake                   = 26,
	S_Water_Brake                  = 27,
	S_Metal_Brake                  = 28,
	S_Wood_Brake                   = 29,
	S_Rock_Brake                   = 30,
	S_Grass_Brake                  = 31,
	S_Sand_Brake                   = 32,
	S_Snow_Brake                   = 33,
	S_SnowRock_Brake               = 34,
	S_Ice_Brake                    = 35,
	S_Common_BrakeDisc             = 36,
	S_Concrete_Punctured_Roll      = 37,
	S_Concrete_Punctured_Skid      = 38,
	S_Concrete_Punctured_Spin      = 39,
	S_Concrete_Punctured_Brake     = 40,
	S_Snow_Roll                    = 41,
	S_Snow_Skid                    = 42,
	S_Snow_Spin                    = 43,
	S_SnowRock_Roll                = 44,
	S_SnowRock_Skid                = 45,
	S_SnowRock_Spin                = 46,
	S_Ice_Roll                     = 47,
	S_Ice_Skid                     = 48,
	S_Ice_Spin                     = 49,
	S_Mud_Roll                     = 50,
	S_Mud_Skid                     = 51,
	S_Mud_Spin                     = 52,
	S_Mud_Brake                    = 53,
	S_Common_Neutral               = 54,
	S_MAX                          = 55
};


// Enum TslGame.EMortarWeaponInstallState
enum class EMortarWeaponInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Installed                      = 3,
	EMortarWeaponInstallState_MAX  = 4
};


// Enum TslGame.EDeployState
enum class EDeployState : uint8_t
{
	INVALID                        = 0,
	UNDEPLOYED                     = 1,
	DEPLOYING                      = 2,
	DEPLOYED                       = 3,
	EDeployState_MAX               = 4
};


// Enum TslGame.ERepairKitMode
enum class ERepairKitMode : uint8_t
{
	Helmet                         = 0,
	Vest                           = 1,
	None                           = 2,
	ERepairKitMode_MAX             = 3
};


// Enum TslGame.*3fd977f9f2
enum class E*3fd977f9f2 : uint8_t
{
	*a7b4ee05cd                    = 0,
	*b1708e8d4e                    = 1,
	*43ca09dcda                    = 2,
	*3fd977f9f2_MAX                = 3
};


// Enum TslGame.EInfoPointType
enum class EInfoPointType : uint8_t
{
	InfoPoint                      = 0,
	ObjectPoint                    = 1,
	SafePoint                      = 2,
	BeachPoint                     = 3,
	EInfoPointType_MAX             = 4
};


// Enum TslGame.EBlendSequenceByBoolStartType
enum class EBlendSequenceByBoolStartType : uint8_t
{
	Restart                        = 0,
	SameTime                       = 1,
	EBlendSequenceByBoolStartType_MAX = 2
};


// Enum TslGame.EJumpStartAnimationType
enum class EJumpStartAnimationType : uint8_t
{
	Stationary                     = 0,
	Forward                        = 1,
	Backward                       = 2,
	EJumpStartAnimationType_MAX    = 3
};


// Enum TslGame.ERotateBoneInputType
enum class ERotateBoneInputType : uint8_t
{
	Rotator                        = 0,
	AngleAxis                      = 1,
	ERotateBoneInputType_MAX       = 2
};


// Enum TslGame.ERotateBoneSpace
enum class ERotateBoneSpace : uint8_t
{
	BoneSpace                      = 0,
	LocalSpace                     = 1,
	WorldSpace                     = 2,
	ERotateBoneSpace_MAX           = 3
};


// Enum TslGame.ETslLocomotionNodeState
enum class ETslLocomotionNodeState : uint8_t
{
	Idle                           = 0,
	Locomotion                     = 1,
	Start                          = 2,
	Stop_Left                      = 3,
	Stop_Right                     = 4,
	Pivot_Left                     = 5,
	Pivot_Right                    = 6,
	FastTurn_Pivot                 = 7,
	ETslLocomotionNodeState_MAX    = 8
};


// Enum TslGame.EGameStartupTimeRecordType
enum class EGameStartupTimeRecordType : uint8_t
{
	ExecPubgBegin                  = 0,
	ClientBegin                    = 1,
	MoviePlaying                   = 2,
	MovieEnded                     = 3,
	WelcomeScreenLoadStarted       = 4,
	WelcomeScreenLoadEnded         = 5,
	LobbyLoadStarted               = 6,
	LobbyLoadEnded                 = 7,
	StartMoviePlaying              = 8,
	StartMovieEnded                = 9,
	Count                          = 10,
	SkipPrevRecord                 = 11,
	EGameStartupTimeRecordType_MAX = 12
};


// Enum TslGame.*b3d51b8795
enum class E*b3d51b8795 : uint8_t
{
	*b2adcdfb36                    = 0,
	*d42cb0125b                    = 1,
	*5a7bf285dd                    = 2,
	*5ab189b8c5                    = 3,
	*b3d51b8795_MAX                = 4
};


// Enum TslGame.*040fb62c45
enum class E*040fb62c45 : uint8_t
{
	*efa33fe25b                    = 0,
	*afcc9df00d                    = 1,
	*9ac32f0b22                    = 2,
	*79fc0edad9                    = 3,
	*439047dcb3                    = 4,
	*be8d6af51b                    = 5,
	*040fb62c45_MAX                = 6
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode : uint8_t
{
	FixedCamera                    = 0,
	FreeCamera                     = 1,
	PlayerCamera                   = 2,
	FollowCamera                   = 3,
	EObserverCameraMode_MAX        = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType : uint8_t
{
	None                           = 0,
	FromBeginning                  = 1,
	AfterDeath                     = 2,
	AfterExtermination             = 3,
	ArenaModeEagleEye              = 4,
	EagleEye                       = 5,
	EObserverAuthorityType_MAX     = 6
};


// Enum TslGame.*c6f8896cb0
enum class E*c6f8896cb0 : uint8_t
{
	*4b3d8b8f3a                    = 0,
	*c6410e91b2                    = 1,
	*e94b9aeeea                    = 2,
	*c6f8896cb0_MAX                = 3
};


// Enum TslGame.EGameModeType
enum class EGameModeType : uint8_t
{
	BattleRoyale                   = 0,
	War                            = 1,
	TDM                            = 2,
	Zombie                         = 3,
	ZombieDefense                  = 4,
	Conquest                       = 5,
	Training                       = 6,
	ESports                        = 7,
	Arena                          = 8,
	Challenger                     = 9,
	ZoneTag                        = 10,
	OneShot                        = 11,
	Racing                         = 12,
	Futsal                         = 13,
	AtoZTutorial                   = 14,
	ChickenRoyale                  = 15,
	HAS                            = 16,
	IntenseBattleRoyale            = 17,
	OverPower                      = 18,
	Bomb                           = 19,
	None                           = 20,
	EGameModeType_MAX              = 21
};


// Enum TslGame.EValueType
enum class EValueType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	String                         = 2,
	Bool                           = 3,
	EValueType_MAX                 = 4
};


// Enum TslGame.*df51037326
enum class E*df51037326 : uint8_t
{
	*28f2b9a787                    = 0,
	*630b5c387b                    = 1,
	*d5ef0a2ab0                    = 2,
	*523128e0b9                    = 3,
	*91297cf2c8                    = 4,
	*df51037326_MAX                = 5
};


// Enum TslGame.*5f1e7a2e1c
enum class E*5f1e7a2e1c : uint8_t
{
	*3b74303a87                    = 0,
	*3d925ca5c9                    = 1,
	*2973654061                    = 2,
	*5f1e7a2e1c_MAX                = 3
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel : uint8_t
{
	Default                        = 0,
	Low                            = 1,
	Middle                         = 2,
	High                           = 3,
	ENearClippingLevel_MAX         = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType : uint8_t
{
	GroupA                         = 0,
	GroupB                         = 1,
	GroupC                         = 2,
	GroupD                         = 3,
	GroupE                         = 4,
	GroupF                         = 5,
	GroupG                         = 6,
	GroupH                         = 7,
	GroupI                         = 8,
	GroupJ                         = 9,
	GroupK                         = 10,
	GroupL                         = 11,
	GroupM                         = 12,
	GroupN                         = 13,
	GroupO                         = 14,
	GroupP                         = 15,
	GroupQ                         = 16,
	GroupR                         = 17,
	GroupS                         = 18,
	GroupT                         = 19,
	GroupU                         = 20,
	GroupV                         = 21,
	GroupW                         = 22,
	GroupX                         = 23,
	GroupY                         = 24,
	GroupZ                         = 25,
	MAX                            = 26,
	EThingSpotGroupType_MAX        = 27
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType : uint8_t
{
	Unknown                        = 0,
	Asphalt                        = 1,
	Dirt                           = 2,
	Water                          = 3,
	Wood                           = 4,
	Stone                          = 5,
	Metal                          = 6,
	EPhysMaterialType_MAX          = 7
};


// Enum TslGame.EUIAkEvent
enum class EUIAkEvent : uint8_t
{
	None                           = 0,
	HoverWeak                      = 1,
	HoverMedium                    = 2,
	SettingSlider                  = 3,
	Confirm                        = 4,
	Cancel                         = 5,
	PopupModal                     = 6,
	SystemMessage                  = 7,
	EUIAkEvent_MAX                 = 8
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType : uint8_t
{
	None                           = 0,
	Vest                           = 1,
	LongCoat                       = 2,
	HipSack                        = 3,
	Cloth                          = 4,
	BackPack                       = 5,
	MilitaryShoes                  = 6,
	Sneakers                       = 7,
	EEquipableItemSoundType_MAX    = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8_t
{
	Default                        = 0,
	Shoes                          = 1,
	EEquipableItemSoundGroup_MAX   = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType : uint8_t
{
	Normal                         = 0,
	Deuteranopia                   = 1,
	Protanopia                     = 2,
	Tritanopia                     = 3,
	EColorBlindType_MAX            = 4
};


// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType : uint8_t
{
	Unlimited                      = 0,
	Fixed                          = 1,
	Fixed01                        = 2,
	Customizable                   = 3,
	DisplayBased                   = 4,
	EFrameRateLimitType_MAX        = 5
};


// Enum TslGame.ETslOutGameCloudRequestErrorType
enum class ETslOutGameCloudRequestErrorType : uint8_t
{
	Unknown                        = 0,
	InternalError                  = 1,
	ServerError                    = 2,
	RequestTimedOut                = 3,
	DataCorrupted                  = 4,
	CompressionFailed              = 5,
	DecompressionFailed            = 6,
	ETslOutGameCloudRequestErrorType_MAX = 7
};


// Enum TslGame.ETslOutGameCloudRequestType
enum class ETslOutGameCloudRequestType : uint8_t
{
	Invalid                        = 0,
	SaveToCloud                    = 1,
	LoadFromCloud                  = 2,
	ETslOutGameCloudRequestType_MAX = 3
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType : uint8_t
{
	Unknown                        = 0,
	Concrete                       = 1,
	Dirt                           = 2,
	Water                          = 3,
	Metal                          = 4,
	Wood                           = 5,
	Grass                          = 6,
	Glass                          = 7,
	Flesh                          = 8,
	ETslPhysMaterialType_MAX       = 9
};


// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8_t
{
	LatestAimPosition              = 0,
	LastPeekingPosition            = 1,
	ResetToRightShoulderPosition   = 2,
	ResetToLeftShoulderPosition    = 3,
	ETppAimCameraPosition_MAX      = 4
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot : uint8_t
{
	Slot_Primary                   = 0,
	Slot_Secondary                 = 1,
	Slot_SideArm                   = 2,
	Slot_Melee                     = 3,
	Slot_Thrown                    = 4,
	Slot_Belt                      = 5,
	Slot_None                      = 6,
	Slot_MAX                       = 7
};


// Enum TslGame.EInventoryListPackageType
enum class EInventoryListPackageType : uint8_t
{
	CarePackage                    = 0,
	InventoryOrDeathDropPackage    = 1,
	TrunkPackage                   = 2,
	ItemPackage                    = 3,
	Ground                         = 4,
	TacPack                        = 5,
	Max                            = 6,
	EInventoryListPackageType_MAX  = 7
};


// Enum TslGame.EInventorySlotType
enum class EInventorySlotType : uint8_t
{
	Vicinity                       = 0,
	Inventory                      = 1,
	Crafting                       = 2,
	Equipment                      = 3,
	Weapon                         = 4,
	Max                            = 5,
	EInventorySlotType_MAX         = 6
};


// Enum TslGame.ELobbyCharacterCameraType
enum class ELobbyCharacterCameraType : uint8_t
{
	None                           = 0,
	WholeBodyCamera                = 1,
	TopCamera                      = 2,
	HeadCamera                     = 3,
	BodyCamera                     = 4,
	LegCamera                      = 5,
	FootCamera                     = 6,
	Max                            = 7,
	ELobbyCharacterCameraType_MAX  = 8
};


// Enum TslGame.EAnimWeaponSpecificClass
enum class EAnimWeaponSpecificClass : uint8_t
{
	None                           = 0,
	EAnimWeaponSpecificClass_MAX   = 1
};


// Enum TslGame.EContinuousHealItem
enum class EContinuousHealItem : uint8_t
{
	Continuous_On                  = 0,
	Bandaged_Only                  = 1,
	Continuous_Off                 = 2,
	EContinuousHealItem_MAX        = 3
};


// Enum TslGame.EWeaponDisplayTypes
enum class EWeaponDisplayTypes : uint8_t
{
	None                           = 0,
	Handgun                        = 1,
	SMG                            = 2,
	AR                             = 3,
	Shotgun                        = 4,
	SR                             = 5,
	DMR                            = 6,
	LMG                            = 7,
	AMR                            = 8,
	Melee                          = 9,
	Throwable                      = 10,
	Shield                         = 11,
	Crossbow                       = 12,
	Launcher                       = 13,
	GrenadeLauncher                = 14,
	Mortar                         = 15,
	TacticalGear                   = 16,
	FlareGun                       = 17,
	Special                        = 18,
	EWeaponDisplayTypes_MAX        = 19
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass : uint8_t
{
	Class_None                     = 0,
	Class_Pistol                   = 1,
	Class_SMG                      = 2,
	Class_Rifle                    = 3,
	Class_Carbine                  = 4,
	Class_Shotgun                  = 5,
	Class_Sniper                   = 6,
	Class_DMR                      = 7,
	Class_LMG                      = 8,
	Class_Melee                    = 9,
	Class_Throwable                = 10,
	Class_Shield                   = 11,
	Class_Crossbow                 = 12,
	Class_Launcher                 = 13,
	Class_GrenadeLauncher          = 14,
	Class_Mortar                   = 15,
	EWeaponClass_MAX               = 16
};


// Enum TslGame.EAllowedThrowMode
enum class EAllowedThrowMode : uint8_t
{
	Any                            = 0,
	ThrowHigh                      = 1,
	ThrowLow                       = 2,
	EAllowedThrowMode_MAX          = 3
};


// Enum TslGame.*4b9586e27f
enum class E*4b9586e27f : uint8_t
{
	*2e640e4419                    = 0,
	*98a3fc9e0d                    = 1,
	*a51968703c                    = 2,
	*4b9586e27f_MAX                = 3
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8_t
{
	Addition                       = 0,
	Multiply                       = 1,
	EAttachmentCalculateType_MAX   = 2
};


// Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class EAutoEquipAttachmentForScopeMode : uint8_t
{
	Off                            = 0,
	Sight_Only                     = 1,
	ALL                            = 2,
	EAutoEquipAttachmentForScopeMode_MAX = 3
};


// Enum TslGame.ECustomPartType
enum class ECustomPartType : uint8_t
{
	Vehicle                        = 0,
	ECustomPartType_MAX            = 1
};


// Enum TslGame.EItemCategory
enum class EItemCategory : uint8_t
{
	None                           = 0,
	Equipment                      = 1,
	Weapon                         = 2,
	Attachment                     = 3,
	Ammunition                     = 4,
	Use                            = 5,
	Skin                           = 6,
	Event                          = 7,
	Part                           = 8,
	EItemCategory_MAX              = 9
};


// Enum TslGame.EFiringMode
enum class EFiringMode : uint8_t
{
	Normal                         = 0,
	Burst                          = 1,
	FullAuto                       = 2,
	FullAutoFast                   = 3,
	EFiringMode_MAX                = 4
};


// Enum TslGame.ECharacterGait
enum class ECharacterGait : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	ECharacterGait_MAX             = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Total                          = 2,
	EWeaponHand_MAX                = 3
};


// Enum TslGame.EWeaponArmState
enum class EWeaponArmState : uint8_t
{
	None                           = 0,
	NotArmed                       = 1,
	Arming                         = 2,
	Armed                          = 3,
	UnArming                       = 4,
	EWeaponArmState_MAX            = 5
};


// Enum TslGame.*1f020c2bed
enum class E*1f020c2bed : uint8_t
{
	*39a9061cc9                    = 0,
	*294977e566                    = 1,
	*a094fec69d                    = 2,
	*1f020c2bed_MAX                = 3
};


// Enum TslGame.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : uint8_t
{
	Rider                          = 0,
	Pillion                        = 1,
	VehicleDriver                  = 2,
	VehiclePassenger               = 3,
	Pilot                          = 4,
	AircraftPassenger              = 5,
	GliderPassenger                = 6,
	EAnimVehicleSeatType_MAX       = 7
};


// Enum TslGame.ETurningDirection
enum class ETurningDirection : uint8_t
{
	None                           = 0,
	Right                          = 1,
	Right01                        = 2,
	Right02                        = 3,
	Right03                        = 4,
	Left                           = 5,
	Left01                         = 6,
	Left02                         = 7,
	Left03                         = 8,
	ETurningDirection_MAX          = 9
};


// Enum TslGame.*c7ed5ef4b7
enum class E*c7ed5ef4b7 : uint8_t
{
	*cdc95f6502                    = 0,
	*9bed83fa70                    = 1,
	*2e66548b81                    = 2,
	*769c5f00cd                    = 3,
	*3e9694e468                    = 4,
	*ca778424fe                    = 5,
	*25ec095243                    = 6,
	*2e685ad4c8                    = 7,
	*2663f22720                    = 8,
	*c7ed5ef4b7_MAX                = 9
};


// Enum TslGame.EAnimStance
enum class EAnimStance : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Groggy                         = 3,
	EAnimStance_MAX                = 4
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType : uint8_t
{
	None                           = 0,
	Rifle                          = 1,
	Launcher                       = 2,
	Pistol                         = 3,
	Throwable                      = 4,
	SpikeTrap                      = 5,
	Melee                          = 6,
	Shield                         = 7,
	Mortar                         = 8,
	MAX                            = 9,
	EAnimWeaponType_MAX            = 10
};


// Enum TslGame.*681d450c10
enum class E*681d450c10 : uint8_t
{
	*897ed8336a                    = 0,
	*414ca4b6b6                    = 1,
	*ebcff204ec                    = 2,
	*681d450c10_MAX                = 3
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8_t
{
	FpsAndTps                      = 0,
	FpsOnly                        = 1,
	TpsOnly                        = 2,
	ECameraViewBehaviour_MAX       = 3
};


// Enum TslGame.EPlayerStartType
enum class EPlayerStartType : uint8_t
{
	OnePlace                       = 0,
	SeveralPlace                   = 1,
	EPlayerStartType_MAX           = 2
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType : uint8_t
{
	Normal                         = 0,
	Airborne                       = 1,
	Monster                        = 2,
	EMatchStartType_MAX            = 3
};


// Enum TslGame.EGender
enum class EGender : uint8_t
{
	Male                           = 0,
	Female                         = 1,
	EGender_MAX                    = 2
};


// Enum TslGame.EThermalItemType
enum class EThermalItemType : uint8_t
{
	Character                      = 0,
	Vehicle                        = 1,
	Blood                          = 2,
	Fire                           = 3,
	Ghillie                        = 4,
	CountOrNone                    = 5,
	EThermalItemType_MAX           = 6
};


// Enum TslGame.ESpecialEquipmentType
enum class ESpecialEquipmentType : uint8_t
{
	Default                        = 0,
	BluezoneBlocker                = 1,
	EmergencyParachute             = 2,
	Toolbox                        = 3,
	TacPack                        = 4,
	TraumaBag                      = 5,
	SoftRole                       = 6,
	ESpecialEquipmentType_MAX      = 7
};


// Enum TslGame.EEquipableItemLevelType
enum class EEquipableItemLevelType : uint8_t
{
	None                           = 0,
	Level1                         = 1,
	Level2                         = 2,
	Level3                         = 3,
	Level4                         = 4,
	EEquipableItemLevelType_MAX    = 5
};


// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType : uint8_t
{
	Block                          = 0,
	Hide                           = 1,
	Max                            = 2,
	EConstraintSlotType_MAX        = 3
};


// Enum TslGame.*9ba0df936e
enum class E*9ba0df936e : uint8_t
{
	*dcf0e7d2ed                    = 0,
	*848eb0da6e                    = 1,
	*0effdb3258                    = 2,
	*9ba0df936e_MAX                = 3
};


// Enum TslGame.*16d089257b
enum class E*16d089257b : uint8_t
{
	*1be79f6726                    = 0,
	*097ac31b6a                    = 1,
	*71852b3362                    = 2,
	*62dfdac549                    = 3,
	*dd663f9c43                    = 4,
	*16d089257b_MAX                = 5
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType : uint8_t
{
	GroupA                         = 0,
	GroupB                         = 1,
	GroupC                         = 2,
	GroupD                         = 3,
	GroupE                         = 4,
	GroupF                         = 5,
	GroupG                         = 6,
	GroupH                         = 7,
	GroupI                         = 8,
	GroupJ                         = 9,
	GroupK                         = 10,
	GroupL                         = 11,
	GroupM                         = 12,
	GroupN                         = 13,
	GroupO                         = 14,
	GroupP                         = 15,
	GroupQ                         = 16,
	GroupR                         = 17,
	GroupS                         = 18,
	GroupT                         = 19,
	GroupU                         = 20,
	GroupV                         = 21,
	GroupW                         = 22,
	GroupX                         = 23,
	GroupY                         = 24,
	GroupZ                         = 25,
	MAX                            = 26,
	EItemSpotGroupType_MAX         = 27
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType : uint8_t
{
	TypeA                          = 0,
	TypeB                          = 1,
	TypeC                          = 2,
	TypeD                          = 3,
	TypeE                          = 4,
	TypeF                          = 5,
	TypeG                          = 6,
	TypeH                          = 7,
	TypeI                          = 8,
	TypeJ                          = 9,
	TypeK                          = 10,
	TypeL                          = 11,
	TypeM                          = 12,
	TypeN                          = 13,
	TypeO                          = 14,
	TypeP                          = 15,
	TypeQ                          = 16,
	TypeR                          = 17,
	TypeS                          = 18,
	TypeT                          = 19,
	TypeU                          = 20,
	TypeV                          = 21,
	TypeW                          = 22,
	TypeX                          = 23,
	TypeY                          = 24,
	TypeZ                          = 25,
	MAX                            = 26,
	EItemSpotType_MAX              = 27
};


// Enum TslGame.EItemOverrideType
enum class EItemOverrideType : uint8_t
{
	NONE                           = 0,
	TypeA                          = 1,
	TypeB                          = 2,
	TypeC                          = 3,
	TypeD                          = 4,
	TypeE                          = 5,
	TypeF                          = 6,
	TypeG                          = 7,
	TypeH                          = 8,
	TypeI                          = 9,
	TypeJ                          = 10,
	TypeK                          = 11,
	TypeL                          = 12,
	TypeM                          = 13,
	TypeN                          = 14,
	EItemOverrideType_MAX          = 15
};


// Enum TslGame.ECastableItemType
enum class ECastableItemType : uint8_t
{
	None                           = 0,
	Bandage                        = 1,
	FirstAid                       = 2,
	Medkit                         = 3,
	EnergyDrink                    = 4,
	Painkiller                     = 5,
	Adrenaline                     = 6,
	GasCan                         = 7,
	Battery                        = 8,
	Key                            = 9,
	EmergencyPickup                = 10,
	SelfRevive                     = 11,
	Ascender                       = 12,
	RevivalTransmitter             = 13,
	TacticalGear                   = 14,
	ECastableItemType_MAX          = 15
};


// Enum TslGame.ECastLevel
enum class ECastLevel : uint8_t
{
	None                           = 0,
	NoRestriction                  = 1,
	Restriction                    = 2,
	OnlyRotationRestriction        = 3,
	ECastLevel_MAX                 = 4
};


// Enum TslGame.ECastPriority
enum class ECastPriority : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Normal                         = 2,
	High                           = 3,
	Max                            = 4,
	ECastPriority_MAX              = 5
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType : uint8_t
{
	Normal                         = 0,
	WeeklyDouble                   = 1,
	ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform : uint8_t
{
	PC_Steam                       = 0,
	PC_NonSteam                    = 1,
	Xbox                           = 2,
	ELobbyItemPlatform_MAX         = 3
};


// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier : uint8_t
{
	Basic                          = 0,
	Common                         = 1,
	Classic                        = 2,
	Special                        = 3,
	Rare                           = 4,
	Elite                          = 5,
	Epic                           = 6,
	Legendary                      = 7,
	Ultimate                       = 8,
	Event                          = 9,
	ELobbyItemTier_MAX             = 10
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory : uint8_t
{
	Belt                           = 0,
	Body                           = 1,
	Eyes                           = 2,
	Feet                           = 3,
	Head                           = 4,
	Jacket                         = 5,
	Legs                           = 6,
	Mask                           = 7,
	Hands                          = 8,
	Box                            = 9,
	Key                            = 10,
	WeaponSkin                     = 11,
	ParachuteSkin                  = 12,
	HelmetSkin                     = 13,
	BackpackSkin                   = 14,
	TorsoArmorSkin                 = 15,
	VehicleSkin                    = 16,
	Multislot                      = 17,
	ELobbyItemCategory_MAX         = 18
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType : uint8_t
{
	Default                        = 0,
	Character                      = 1,
	Vehicle                        = 2,
	Wheel                          = 3,
	DestructibleActor              = 4,
	ExplosiveItem                  = 5,
	DummyAI                        = 6,
	EDamageVictimActorType_MAX     = 7
};


// Enum TslGame.EVehicleConvertState
enum class EVehicleConvertState : uint8_t
{
	None                           = 0,
	Play                           = 1,
	Cancel                         = 2,
	Finish                         = 3,
	EVehicleConvertState_MAX       = 4
};


// Enum TslGame.EVehiclePartType
enum class EVehiclePartType : uint8_t
{
	BodyColor                      = 0,
	WheelColor                     = 1,
	BrakeCaliperColor              = 2,
	BoostEffect                    = 3,
	WheelMesh                      = 4,
	PinstripeColor                 = 5,
	Spoiler                        = 6,
	EVehiclePartType_MAX           = 7
};


// Enum TslGame.*b1e5129b4f
enum class E*b1e5129b4f : uint8_t
{
	*32d00c5f0c                    = 0,
	*8e4340d505                    = 1,
	*ac1e43a4fd                    = 2,
	*193a7564f6                    = 3,
	*b1e5129b4f_MAX                = 4
};


// Enum TslGame.*084c85f91f
enum class E*084c85f91f : uint8_t
{
	*d6e8a772ca                    = 0,
	*c55008d689                    = 1,
	*b7edfdf2dc                    = 2,
	*a782733cc4                    = 3,
	*844d34ac85                    = 4,
	*b5fc958720                    = 5,
	*e37a9a0f57                    = 6,
	*adaedbdd4d                    = 7,
	*9f2b0576af                    = 8,
	*febf617ee7                    = 9,
	*130807dc37                    = 10,
	*fd17aa6df7                    = 11,
	*b883cca43a                    = 12,
	*93d6d2f889                    = 13,
	*eeb2fcca01                    = 14,
	*ba82f30fdc                    = 15,
	*6271fa8a7b                    = 16,
	*11c2a338b2                    = 17,
	*96863d6a60                    = 18,
	*6f0f96eb53                    = 19,
	*715689fe8c                    = 20,
	*7811f5cc37                    = 21,
	*ba7580afcd                    = 22,
	*ba63cf4df2                    = 23,
	*a6f54587d7                    = 24,
	*9362046162                    = 25,
	*c5aa63e6ce                    = 26,
	*63db265498                    = 27,
	*b4307a6d6e                    = 28,
	*9938ef7ed2                    = 29,
	*cc795e87e9                    = 30,
	*ae96a10fcd                    = 31,
	*fe91310c54                    = 32,
	*13ba2c852f                    = 33,
	*30aaf5d2d0                    = 34,
	*deec6448a0                    = 35,
	*44fa8a2571                    = 36,
	*56d42dfcd6                    = 37,
	*78d3d9b881                    = 38,
	*58a17b7584                    = 39,
	*1eeb52331a                    = 40,
	*d49e0ced66                    = 41,
	*8b1c6fcc62                    = 42,
	*0314a24ed4                    = 43,
	*0b1ed48a61                    = 44,
	*585f5e7f1e                    = 45,
	*35a399d860                    = 46,
	*81d5738d37                    = 47,
	*f37658dcc3                    = 48,
	*fce694ff93                    = 49,
	*e115a41893                    = 50,
	*7cafeab5ab                    = 51,
	*d581eb06c3                    = 52,
	*fc57bf89d7                    = 53,
	*1d85947199                    = 54,
	*084c85f91f_MAX                = 55
};


// Enum TslGame.*db8ceedd6e
enum class E*db8ceedd6e : uint8_t
{
	*3c2550e25e                    = 0,
	*efff766d44                    = 1,
	*236f7ba6d5                    = 2,
	*65849f37c5                    = 3,
	*db8ceedd6e_MAX                = 4
};


// Enum TslGame.ERiderType
enum class ERiderType : uint8_t
{
	Driver                         = 0,
	Passenger                      = 1,
	ERiderType_MAX                 = 2
};


// Enum TslGame.EStatTrakState
enum class EStatTrakState : uint8_t
{
	Run                            = 0,
	Locked                         = 1,
	Error                          = 2,
	EStatTrakState_MAX             = 3
};


// Enum TslGame.*180ebe7073
enum class E*180ebe7073 : uint8_t
{
	*373e25fcea                    = 0,
	*04e041e9be                    = 1,
	*514121f7c2                    = 2,
	*c4259d7ef1                    = 3,
	*b000059568                    = 4,
	*180ebe7073_MAX                = 5
};


// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8_t
{
	SkeletalMesh                   = 0,
	AsyncStaticMesh                = 1,
	StaticMesh                     = 2,
	ESkinMeshType_MAX              = 3
};


// Enum TslGame.EVehicleSkinCategory
enum class EVehicleSkinCategory : uint8_t
{
	None                           = 0,
	FourSeaterSUV                  = 1,
	FourSeaterSedan                = 2,
	TwoSeaterSportsCar             = 3,
	TwoSeaterMotorbike             = 4,
	EVehicleSkinCategory_MAX       = 5
};


// Enum TslGame.ESkinCategory
enum class ESkinCategory : uint8_t
{
	Skin_None                      = 0,
	Skin_Equipment                 = 1,
	Skin_Parachute                 = 2,
	Skin_Weapon                    = 3,
	Skin_MeleeWeapon               = 4,
	Skin_Vehicle                   = 5,
	Skin_Throwable                 = 6,
	Skin_MAX                       = 7
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod : uint8_t
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	Stack                          = 3,
	EBuffOverlapSolveMethod_MAX    = 4
};


// Enum TslGame.*9840a56a43
enum class E*9840a56a43 : uint8_t
{
	*d598dbbea4                    = 0,
	*a20cff6623                    = 1,
	*142746b1d5                    = 2,
	*57155bc16b                    = 3,
	*9840a56a43_MAX                = 4
};


// Enum TslGame.EVaultAnimType
enum class EVaultAnimType : uint8_t
{
	VaultNone                      = 0,
	Vault200_Stationary            = 1,
	Vault200_Mobile                = 2,
	Vault200_Narrow                = 3,
	Vault160_Stationary            = 4,
	Vault160_Mobile                = 5,
	Vault160_Narrow                = 6,
	Vault120_Stationary            = 7,
	Vault120_Mobile                = 8,
	Vault120_Slide                 = 9,
	Vault120_Narrow                = 10,
	Vault90_Stationary             = 11,
	Vault90_Mobile                 = 12,
	Vault90_Slide                  = 13,
	Vault90_Narrow                 = 14,
	Climb200_Stationary            = 15,
	Climb200_Mobile                = 16,
	Climb200_Slide                 = 17,
	Climb200_Narrow                = 18,
	Climb160_Stationary            = 19,
	Climb160_Mobile                = 20,
	Climb160_Slide                 = 21,
	Climb160_Narrow                = 22,
	Climb120_Stationary            = 23,
	Climb120_Mobile                = 24,
	Climb120_Slide                 = 25,
	Climb120_Narrow                = 26,
	Climb90_Stationary             = 27,
	Climb90_Mobile                 = 28,
	Climb90_Slide                  = 29,
	Climb90_Narrow                 = 30,
	Vault90Roll                    = 31,
	Vault120Window                 = 32,
	Vault60_Stationary             = 33,
	Vault60_Mobile                 = 34,
	Vault60_Slide                  = 35,
	Vault60_Narrow                 = 36,
	Climb60_Stationary             = 37,
	Climb60_Mobile                 = 38,
	Climb60_Narrow                 = 39,
	LedgeGrab_Up_Climb             = 40,
	LedgeGrab_Up_Climb_Swing       = 41,
	LedgeGrab_Up_Climb_HalfSwing   = 42,
	LedgeGrab_Up_Vault             = 43,
	LedgeGrab_Up_Vault_Swing       = 44,
	LedgeGrab_Up_Vault_HalfSwing   = 45,
	LedgeGrab_High_Climb           = 46,
	LedgeGrab_High_Climb_Swing     = 47,
	LedgeGrab_High_Climb_HalfSwing = 48,
	LedgeGrab_High_Vault           = 49,
	LedgeGrab_High_Vault_Swing     = 50,
	LedgeGrab_High_Vault_HalfSwing = 51,
	LedgeGrab_Low_Climb            = 52,
	LedgeGrab_Low_Climb_Swing      = 53,
	LedgeGrab_Low_Climb_HalfSwing  = 54,
	LedgeGrab_Low_Vault            = 55,
	LedgeGrab_Low_Vault_Swing      = 56,
	LedgeGrab_Low_Vault_HalfSwing  = 57,
	LedgeGrab_Low_Vault_Narrow     = 58,
	LedgeGrab_Low_Vault_HalfSwing_Narrow = 59,
	LedgeGrab_Low_Vault_Swing_Narrow = 60,
	LedgeGrab_High_Vault_Narrow    = 61,
	LedgeGrab_High_Vault_HalfSwing_Narrow = 62,
	LedgeGrab_High_Vault_Swing_Narrow = 63,
	LedgeGrab_Up_Vault_Narrow      = 64,
	LedgeGrab_Up_Vault_HalfSwing_Narrow = 65,
	LedgeGrab_Up_Vault_Swing_Narrow = 66,
	EVaultAnimType_MAX             = 67
};


// Enum TslGame.*7cf2a5bc62
enum class E*7cf2a5bc62 : uint8_t
{
	*6670c54d2d                    = 0,
	*e5906908d1                    = 1,
	*641c0cf509                    = 2,
	*106920a310                    = 3,
	*7cf2a5bc62_MAX                = 4
};


// Enum TslGame.EPreoccupiedTeamType
enum class EPreoccupiedTeamType : uint8_t
{
	NEUTRAL                        = 0,
	RED                            = 1,
	BLUE                           = 2,
	EPreoccupiedTeamType_MAX       = 3
};


// Enum TslGame.*3eb987c2e6
enum class E*3eb987c2e6 : uint8_t
{
	*114952b4bd                    = 0,
	*3f1469a468                    = 1,
	*b77653e2a6                    = 2,
	*6aef697a88                    = 3,
	*3eb987c2e6_MAX                = 4
};


// Enum TslGame.ECollisionProfileType
enum class ECollisionProfileType : uint8_t
{
	Profiles                       = 0,
	DefaultChannelResponses        = 1,
	EditProfiles                   = 2,
	ProfileRedirects               = 3,
	CollisionChannelRedirects      = 4,
	ECollisionProfileType_MAX      = 5
};


// Enum TslGame.EMovingState
enum class EMovingState : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EMovingState_MAX               = 3
};


// Enum TslGame.EPlayerInputType
enum class EPlayerInputType : uint8_t
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	Mixed                          = 2,
	EPlayerInputType_MAX           = 3
};


// Enum TslGame.EAntiCheatKickType
enum class EAntiCheatKickType : uint8_t
{
	Default                        = 0,
	HWID                           = 1,
	MouseMacro                     = 2,
	InGame                         = 3,
	BattleEye                      = 4,
	EAntiCheatKickType_MAX         = 5
};


// Enum TslGame.ECheatType
enum class ECheatType : uint8_t
{
	None                           = 0,
	SpeedHack                      = 1,
	IgnoreWall_Hit                 = 2,
	IgnoreWall_Sight               = 3,
	IgnoreVelocity_Hit             = 4,
	IgnoreVelocity                 = 5,
	IgnoreVelocity2                = 6,
	ItemPackage                    = 7,
	CarePackageMount               = 8,
	Aimbot                         = 9,
	VerifyLagSwitch                = 10,
	InvalidNetConnectionClose      = 11,
	InvalidImpact                  = 12,
	InvalidImpactZ                 = 13,
	InvalidImpact_Gun_C            = 14,
	InvalidOrigin_Gun              = 15,
	InvalidOrigin_Melee            = 16,
	InvalidOrigin_Punch            = 17,
	InvalidOrigin_Throwable        = 18,
	InvalidOrigin_MeleeThrow       = 19,
	InvalidSimStep_MeleeThrow      = 20,
	InvalidRange                   = 21,
	InvalidRange2                  = 22,
	InvalidReviving                = 23,
	InvalidKick                    = 24,
	InvalidA0                      = 25,
	InvalidB1                      = 26,
	InvalidB101                    = 27,
	InvalidH0                      = 28,
	InvalidOrigin_Gun_C            = 29,
	InvalidD0                      = 30,
	InvalidS0                      = 31,
	InvalidH1                      = 32,
	InvalidH2                      = 33,
	InvalidH3                      = 34,
	InvalidC0                      = 35,
	InvalidC1                      = 36,
	InvalidC2                      = 37,
	InvalidC3                      = 38,
	InvalidC4                      = 39,
	InvalidC5                      = 40,
	InvalidC6                      = 41,
	InvalidC7                      = 42,
	InvalidT0                      = 43,
	InvalidT1                      = 44,
	InvalidT2                      = 45,
	InvalidAimDir                  = 46,
	InvalidPelletDir               = 47,
	InvalidAmmoSpeed               = 48,
	InvalidAmmoDir                 = 49,
	InvalidCharacterFlag           = 50,
	InvalidPropertyCrc             = 51,
	InvalidWeaponCrc               = 52,
	InvalidWeaponRecoil            = 53,
	InvalidSwayBuffer              = 54,
	InvalidCameraYaw               = 55,
	InvalidWeaponPackageCrc        = 56,
	InvalidWeaponFlag              = 57,
	InvalidHitComponent            = 58,
	InvalidCollisionProfileCrc     = 59,
	InvalidPakListCrc              = 60,
	InvalidCharacterCrc            = 61,
	InvalidHitLocation             = 62,
	InvalidSight                   = 63,
	InvalidBackface                = 64,
	InvalidMovementCurveCrc        = 65,
	InvalidDriverFire              = 66,
	InvalidVehicleOverlap          = 67,
	InvalidViewRotation            = 68,
	InvalidPenetration             = 69,
	InvalidPunchSpeed              = 70,
	CHKSUM_PUNCH                   = 71,
	CHKSUM_MELEE                   = 72,
	CHKSUM_A0                      = 73,
	CHKSUM_T0                      = 74,
	CHKSUM_S0                      = 75,
	CHKSUM_D0                      = 76,
	CHKSUM_V0                      = 77,
	CHKSUM_W0                      = 78,
	CHKSUM_T1                      = 79,
	CHKSUM_D1                      = 80,
	CHKSUM_CD                      = 81,
	CHKSUM_LC                      = 82,
	CHKSUM_P0                      = 83,
	CHKSUM_BP                      = 84,
	CHKSUM_G1                      = 85,
	CHKSUM_H2                      = 86,
	CHKSUM_H3                      = 87,
	CHKSUM_UO                      = 88,
	CHKSUM_UF                      = 89,
	VHC_RI                         = 90,
	VHC_MG_FF                      = 91,
	VHC_MG_FC                      = 92,
	VHC_MG_SW                      = 93,
	VHC_MG_OS                      = 94,
	VHC_MG_BC                      = 95,
	VHC_MG_TC                      = 96,
	VHC_MG_PL                      = 97,
	VHC_MG_HL                      = 98,
	VHC_MG_SD                      = 99,
	VHC_MG_AA                      = 100,
	VHC_MG_AV                      = 101,
	VHC_MG_AD                      = 102,
	VHC_MGB_FF                     = 103,
	VHC_MGB_FC                     = 104,
	VHC_MGB_OS                     = 105,
	VHC_MGB_BC                     = 106,
	VHC_MGB_TC                     = 107,
	VHC_MGB_PL                     = 108,
	VHC_MGB_HL                     = 109,
	VHC_MGB_AA                     = 110,
	VHC_MGB_AV                     = 111,
	VHC_MGB_AD                     = 112,
	VHC_MGF_OS                     = 113,
	VHC_MGF_TC                     = 114,
	VHC_MGF_BC                     = 115,
	VHC_MGF_SD                     = 116,
	VHC_MGF_AA                     = 117,
	VHC_MGF_AV                     = 118,
	VHC_KILL                       = 119,
	VHC_ED                         = 120,
	VHC_SERVERSIMUL                = 121,
	VHC_SIMULATION_ACTIVATE        = 122,
	VHC_SIMULATION_DEACTIVATE      = 123,
	VHC_TRY_BYPASS_SERVERSIMUL     = 124,
	VHC_BYPASSED_SERVERSIMUL       = 125,
	VHC_FORCE_SERVERSIMUL          = 126,
	CK_ACTIVATE                    = 127,
	CK_DEACTIVATE                  = 128,
	AntiCheatKick_WallHack         = 129,
	AntiCheatKick_ESP              = 130,
	AntiCheatKick_SpeedHack1       = 131,
	AntiCheatKick_SpeedHack2       = 132,
	AntiCheatKick_SpeedHack3       = 133,
	AntiCheatKick_PLFC             = 134,
	AntiCheatKick_TCFC             = 135,
	AntiCheatKick_HL               = 136,
	AntiCheatKick_OS               = 137,
	AntiCheatKick_FC               = 138,
	AntiCheatKick_SV               = 139,
	VehicleSimulation_PLFC         = 140,
	VehicleSimulation_TCFC         = 141,
	VehicleSimulation_HL           = 142,
	VehicleSimulation_OS           = 143,
	VehicleSimulation_FC           = 144,
	CC_ACTIVATE                    = 145,
	CC_DEACTIVATE                  = 146,
	CC_FORCE_ERROR_CORRECTION      = 147,
	QS_AJ                          = 148,
	QS_VZ                          = 149,
	KGB_AF                         = 150,
	InputLog                       = 151,
	FireInputLog                   = 152,
	ESPLog                         = 153,
	ESPRatioLog                    = 154,
	IsEnabledAntiESP               = 155,
	HighLocationVehicle            = 156,
	HighLocationBoat               = 157,
	UnderLandscapeBoat             = 158,
	UnderLandscapeCharacter        = 159,
	InsideMeshCharacter            = 160,
	BC_BoatCorrection              = 161,
	HBR_InvalidDashDistance        = 162,
	UNC_ACTIVATE                   = 163,
	UNC_DEACTIVATE                 = 164,
	UncAddUserFail                 = 165,
	UncSetUserInfoFail             = 166,
	UncDeleteUserFail              = 167,
	UncGetCookieFail               = 168,
	UncCookieVerifyFail            = 169,
	UncCookieNotRespond            = 170,
	DESP_SelfInfo                  = 171,
	DESP_SelfInvalidCheckSum       = 172,
	DESP_SelfInvalidCount          = 173,
	DESP_RemoteInfo                = 174,
	DESP_RemoteInvalidCheckSum     = 175,
	HitInSmoke                     = 176,
	BoneFocusedShoot               = 177,
	CenterFocusedShoot             = 178,
	Combination_Undefined          = 179,
	Combination_FlyingCar          = 180,
	Combination_InsideMeshAttack   = 181,
	ECheatType_MAX                 = 182
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle : uint8_t
{
	Ok_Cancel                      = 0,
	Ok                             = 1,
	Yes_No                         = 2,
	Controller_KeyboardMouse       = 3,
	EPopupStyle_MAX                = 4
};


// Enum TslGame.EKillcamDisplayCode
enum class EKillcamDisplayCode : uint8_t
{
	NotVisible                     = 0,
	OptionDisabled                 = 1,
	Recording                      = 2,
	Playable                       = 3,
	Replay                         = 4,
	FailToLoad                     = 5,
	DemoFailure                    = 6,
	DetectedUnusualMovement        = 7,
	EKillcamDisplayCode_MAX        = 8
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	Toggle                         = 2,
	EWidgetShowType_MAX            = 3
};


// Enum TslGame.EAIPoseState
enum class EAIPoseState : uint8_t
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Jump                           = 3,
	Reload                         = 4,
	UnArmed                        = 5,
	EAIPoseState_MAX               = 6
};


// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8_t
{
	Forward                        = 0,
	Down_45_Degrees                = 1,
	Down                           = 2,
	ERaycastDirection_MAX          = 3
};


// Enum TslGame.EAIPolyType
enum class EAIPolyType : uint8_t
{
	AIPoly_None                    = 0,
	AIPoly_Attack                  = 1,
	AIPoly_Moving                  = 2,
	AIPoly_Moving_Directly         = 3,
	AIPoly_Jump                    = 4,
	AIPoly_MovingTargetPos         = 5,
	AIPoly_Max                     = 6
};


// Enum TslGame.*e0affb18d0
enum class E*e0affb18d0 : uint8_t
{
	*894555a791                    = 0,
	*1909d8cb2b                    = 1,
	*4cdff67a8b                    = 2,
	*3adb9d7b0c                    = 3,
	*4396ba9ec8                    = 4,
	*e0affb18d0_MAX                = 5
};


// Enum TslGame.*a8ad17bc4f
enum class E*a8ad17bc4f : uint8_t
{
	*785a17dbcc                    = 0,
	*2a197d67de                    = 1,
	*7a58aae591                    = 2,
	*a8ad17bc4f_MAX                = 3
};


// Enum TslGame.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8_t
{
	SWPS_MainShootWeapon1          = 0,
	SWPS_MainShootWeapon2          = 1,
	SWPS_SubShootWeapon            = 2,
	SWPS_MeleeWeapon               = 3,
	SWPS_HandProp                  = 4,
	SWPS_Max                       = 5
};


// Enum TslGame.*6a2531d763
enum class E*6a2531d763 : uint8_t
{
	*4ff11667d0                    = 0,
	*0aca36e0cf                    = 1,
	*99ee31d3c5                    = 2,
	*4e33bc6ef6                    = 3,
	*e0db03ade3                    = 4,
	*a88ef63579                    = 5,
	*a21338c793                    = 6,
	*3bd1bd3cdd                    = 7,
	*6a2531d763_MAX                = 8
};


// Enum TslGame.*a911229804
enum class E*a911229804 : uint8_t
{
	*4844730772                    = 0,
	*77e4dde573                    = 1,
	*c3695aa6dd                    = 2,
	*97cb9e740a                    = 3,
	*51eb720d8f                    = 4,
	*a911229804_MAX                = 5
};


// Enum TslGame.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8_t
{
	InDefault                      = 0,
	InPlane                        = 1,
	InParachute                    = 2,
	InVehicle                      = 3,
	InDying                        = 4,
	InDied                         = 5,
	Offline                        = 6,
	ExtraPlayerLiveState_MAX       = 7
};


// Enum TslGame.*93d50b0aa8
enum class E*93d50b0aa8 : uint8_t
{
	*3a911ca1e6                    = 0,
	*200907db10                    = 1,
	*5a75f1f0a3                    = 2,
	*93d50b0aa8_MAX                = 3
};


// Enum TslGame.EAIWeaponShootType
enum class EAIWeaponShootType : uint8_t
{
	SingleShot                     = 0,
	Auto                           = 1,
	EAIWeaponShootType_MAX         = 2
};


// Enum TslGame.EAINewFocusPriority
enum class EAINewFocusPriority : uint8_t
{
	Default                        = 0,
	Move                           = 1,
	Gameplay                       = 2,
	EAINewFocusPriority_MAX        = 3
};


// Enum TslGame.EAIMovePose
enum class EAIMovePose : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	CrouchSprint                   = 2,
	KeepCurrentPose                = 3,
	EAIMovePose_MAX                = 4
};


// Enum TslGame.EAITriggerAttrType
enum class EAITriggerAttrType : uint8_t
{
	None                           = 0,
	Health                         = 1,
	Energy                         = 2,
	EAITriggerAttrType_MAX         = 3
};


// Enum TslGame.EAIAttrCompareType
enum class EAIAttrCompareType : uint8_t
{
	None                           = 0,
	Great                          = 1,
	Less                           = 2,
	EAIAttrCompareType_MAX         = 3
};


// Enum TslGame.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8_t
{
	Shoot_Weap                     = 0,
	Backpack                       = 1,
	other                          = 2,
	EAIEquipSpawnItemType_MAX      = 3
};


// Enum TslGame.ESpecialZoneAdditionalEffect
enum class ESpecialZoneAdditionalEffect : uint8_t
{
	RemoveFireAndSmoke             = 0,
	DestructDrone                  = 1,
	DeactivateBluezoneBlocker      = 2,
	DeactivateSpotterScope         = 3,
	DeactivateBlueChipDetector     = 4,
	DeactivateBlueChipRevival      = 5,
	ESpecialZoneAdditionalEffect_MAX = 6
};


// Enum TslGame.ESpecialZoneState
enum class ESpecialZoneState : uint8_t
{
	Disabled                       = 0,
	BeforeMatch                    = 1,
	WaitingStartDelay              = 2,
	Warning                        = 3,
	Activating                     = 4,
	ActivationDone                 = 5,
	Deactivating                   = 6,
	Removed                        = 7,
	Finished                       = 8,
	ESpecialZoneState_MAX          = 9
};


// Enum TslGame.ESpecialZoneType
enum class ESpecialZoneType : uint8_t
{
	None                           = 0,
	Blizzard                       = 1,
	SandStorm                      = 2,
	ESpecialZoneType_MAX           = 3
};


// Enum TslGame.EMovementSpamType
enum class EMovementSpamType : uint8_t
{
	LeanRight                      = 0,
	LeanLeft                       = 1,
	Crouch                         = 2,
	EMovementSpamType_MAX          = 3
};


// Enum TslGame.EAttackType
enum class EAttackType : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	VehicleCrash                   = 2,
	VehicleExplosion               = 3,
	Fall                           = 4,
	BlueZone                       = 5,
	RedZone                        = 6,
	BlackZone                      = 7,
	EAttackType_MAX                = 8
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType : uint8_t
{
	OnFoot                         = 0,
	OnSwim                         = 1,
	OnVehicle                      = 2,
	OnParachute                    = 3,
	OnFreefall                     = 4,
	EPlayerMoveType_MAX            = 5
};


// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	None                           = 0,
	All                            = 1,
	GlobalOnly                     = 2,
	TeamOnly                       = 3,
	EVoiceChannelType_MAX          = 4
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState : uint8_t
{
	NotRequested                   = 0,
	Requested                      = 1,
	Fail                           = 2,
	Success                        = 3,
	EVivoxResponseState_MAX        = 4
};


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8_t
{
	None                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	VeryHeavy                      = 3,
	ELandingSoundSwitchState_MAX   = 4
};


// Enum TslGame.*7e2b12eba8
enum class E*7e2b12eba8 : uint8_t
{
	*7048779f1a                    = 0,
	*587e9d79ec                    = 1,
	*eae3dd3bef                    = 2,
	*54b834020a                    = 3,
	*fdf86c751c                    = 4,
	*7e2b12eba8_MAX                = 5
};


// Enum TslGame.ECustomGripBlendSpaceType
enum class ECustomGripBlendSpaceType : uint8_t
{
	None                           = 0,
	Stand                          = 1,
	Crouch                         = 2,
	Prone                          = 3,
	ProneTransition                = 4,
	ProneLocomotion                = 5,
	ECustomGripBlendSpaceType_MAX  = 6
};


// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8_t
{
	Charm                          = 0,
	Mesh                           = 1,
	EMasteryItemType_MAX           = 2
};


// Enum TslGame.TableType
enum class ETableType : uint8_t
{
	Ammo                           = 0,
	Attachment                     = 1,
	Equipment                      = 2,
	Skin                           = 3,
	SkinThrowable                  = 4,
	Weapon                         = 5,
	WeaponThrowable                = 6,
	WeaponShield                   = 7,
	Castable                       = 8,
	UsedByAction                   = 9,
	Event                          = 10,
	Craft                          = 11,
	VehiclePart                    = 12,
	Bluechip                       = 13,
	TableType_MAX                  = 14
};


// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8_t
{
	Open                           = 0,
	Closed                         = 1,
	Inspect                        = 2,
	ESoftRoleState_MAX             = 3
};


// Enum TslGame.*13aabb9689
enum class E*13aabb9689 : uint8_t
{
	*fdc7f0e6c6                    = 0,
	*26a668b313                    = 1,
	*ba03842a71                    = 2,
	*76bf1651e1                    = 3,
	*13aabb9689_MAX                = 4
};


// Enum TslGame.ESandboxConsoleGuideKeyType
enum class ESandboxConsoleGuideKeyType : uint8_t
{
	None                           = 0,
	ExpandAndClose                 = 1,
	SpawnAndBack                   = 2,
	AdjustAndClose                 = 3,
	ConfirmAndBack                 = 4,
	SpawnAndClose                  = 5,
	ESandboxConsoleGuideKeyType_MAX = 6
};


// Enum TslGame.ESandboxGroypType
enum class ESandboxGroypType : uint8_t
{
	None                           = 0,
	Weapon                         = 1,
	Attachment                     = 2,
	Item                           = 3,
	Vehicle                        = 4,
	Sensitivity                    = 5,
	Power                          = 6,
	Special                        = 7,
	ESandboxGroypType_MAX          = 8
};


// Enum TslGame.ESandboxQuantityType
enum class ESandboxQuantityType : uint8_t
{
	None                           = 0,
	Item                           = 1,
	Vehicle                        = 2,
	ESandboxQuantityType_MAX       = 3
};


// Enum TslGame.ESandboxSpecialButtonType
enum class ESandboxSpecialButtonType : uint8_t
{
	None                           = 0,
	EquipLv3                       = 1,
	AddAmmo                        = 2,
	SettingAPrevious               = 3,
	SettingAGunset                 = 4,
	ESandboxSpecialButtonType_MAX  = 5
};


// Enum TslGame.ESandboxPowerType
enum class ESandboxPowerType : uint8_t
{
	None                           = 0,
	Fly                            = 1,
	InvulnerableEffect             = 2,
	CarePackage                    = 3,
	RedZone                        = 4,
	Revive                         = 5,
	TeamRevive                     = 6,
	GiveItemToEveryone             = 7,
	BlueZone                       = 8,
	ESandboxPowerType_MAX          = 9
};


// Enum TslGame.ESandboxSoundType
enum class ESandboxSoundType : uint8_t
{
	None                           = 0,
	ItemSpawnClick                 = 1,
	ItemSpawnSuccess               = 2,
	ESandboxSoundType_MAX          = 3
};


// Enum TslGame.*d1b22bba2d
enum class E*d1b22bba2d : uint8_t
{
	*399f21852e                    = 0,
	*2f605af087                    = 1,
	*346cc92c31                    = 2,
	*994074f0e7                    = 3,
	*fe82ab83da                    = 4,
	*aa3efefcfc                    = 5,
	*e85e61ea7b                    = 6,
	*d1b22bba2d_MAX                = 7
};


// Enum TslGame.ECurrentSoundState
enum class ECurrentSoundState : uint8_t
{
	None                           = 0,
	MovingUp                       = 1,
	MovingUpSprinting              = 2,
	MovingDown                     = 3,
	MovingDownSprinting            = 4,
	Stopping                       = 5,
	ECurrentSoundState_MAX         = 6
};


// Enum TslGame.*89b12a40bf
enum class E*89b12a40bf : uint8_t
{
	*fe38737a3b                    = 0,
	*232ad6ea2d                    = 1,
	*83e556f0f0                    = 2,
	*89b12a40bf_MAX                = 3
};


// Enum TslGame.*ad06f19b48
enum class E*ad06f19b48 : uint8_t
{
	*119f84c0c1                    = 0,
	*dbd5fa5a1c                    = 1,
	*cd5457d81b                    = 2,
	*5fdc2f5395                    = 3,
	*ad06f19b48_MAX                = 4
};


// Enum TslGame.EAscenderDirection
enum class EAscenderDirection : uint8_t
{
	AscenderUp                     = 0,
	AscenderDown                   = 1,
	Max                            = 2,
	EAscenderDirection_MAX         = 3
};


// Enum TslGame.EAscenderRopeType
enum class EAscenderRopeType : uint8_t
{
	None                           = 0,
	AscenderRope                   = 1,
	AscenderZipline                = 2,
	EAscenderRopeType_MAX          = 3
};


// Enum TslGame.EEmoteMoveType
enum class EEmoteMoveType : uint8_t
{
	None                           = 0,
	MoveFoward                     = 1,
	EEmoteMoveType_MAX             = 2
};


// Enum TslGame.EEmotePlayType
enum class EEmotePlayType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	TeamMate                       = 2,
	Interaction                    = 3,
	EEmotePlayType_MAX             = 4
};


// Enum TslGame.*e855f1e21c
enum class E*e855f1e21c : uint8_t
{
	*2b3e8306c8                    = 0,
	*33396ae880                    = 1,
	*7599c0b87e                    = 2,
	*3ff3071558                    = 3,
	*e855f1e21c_MAX                = 4
};


// Enum TslGame.EControlType
enum class EControlType : uint8_t
{
	Move                           = 0,
	Jump                           = 1,
	Fire                           = 2,
	Aim                            = 3,
	Arm                            = 4,
	Unarm                          = 5,
	Reload                         = 6,
	Interact                       = 7,
	Peek                           = 8,
	Roll                           = 9,
	Crouch                         = 10,
	Prone                          = 11,
	UseItem                        = 12,
	ThrowMelee                     = 13,
	CookThrowable                  = 14,
	ItemCatch                      = 15,
	ItemThrow                      = 16,
	InspectWeapon                  = 17,
	ToggleFiringMode               = 18,
	ToggleThrowMode                = 19,
	EControlType_MAX               = 20
};


// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal : uint8_t
{
	IsGroggying                    = 0,
	IsActiveRagdollActive          = 1,
	HasShieldEquipped              = 2,
	IsInBluezone                   = 3,
	IsBeingHealed                  = 4,
	IsSelfHemostasis               = 5,
	ECharFlagsNormal_MAX           = 6
};


// Enum TslGame.ELandingState
enum class ELandingState : uint8_t
{
	None                           = 0,
	Falling                        = 1,
	HeavyFalling                   = 2,
	ExtremeFalling                 = 3,
	FallingRecovery                = 4,
	PostLandingRecovery            = 5,
	ELandingState_MAX              = 6
};


// Enum TslGame.ECharFlagsSkipOwner
enum class ECharFlagsSkipOwner : uint8_t
{
	WantsToRun                     = 0,
	WantsToSprint                  = 1,
	WantsToSprintingAuto           = 2,
	WantsToRollingLeft             = 3,
	WantsToRollingRight            = 4,
	AimStateActive                 = 5,
	IsThirdPerson                  = 6,
	IsReviving                     = 7,
	IgnoreRotation                 = 8,
	IsWeaponObstructed             = 9,
	IsCoatEquipped                 = 10,
	IsThrowHigh                    = 11,
	WantsToCancelVault             = 12,
	IsScopingRemote                = 13,
	IsAimingRemote                 = 14,
	IsFirstPersonRemote            = 15,
	IsInVehicleRemote              = 16,
	IsPeekLeftRemote               = 17,
	IsPeekRightRemote              = 18,
	IsHoldingAngled                = 19,
	ECharFlagsSkipOwner_MAX        = 20
};


// Enum TslGame.*39bc1b88e5
enum class E*39bc1b88e5 : uint8_t
{
	*680b4b68a7                    = 0,
	*fc4448e197                    = 1,
	*a755572dd5                    = 2,
	*39bc1b88e5_MAX                = 3
};


// Enum TslGame.EMovementType
enum class EMovementType : uint8_t
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	Count                          = 18,
	EMovementType_MAX              = 19
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3
};


// Enum TslGame.ETslRedeployPlayerState
enum class ETslRedeployPlayerState : uint8_t
{
	None                           = 0,
	Initialized                    = 1,
	RespawnTarget                  = 2,
	ReadyToFight                   = 3,
	Fighting                       = 4,
	Dead                           = 5,
	Survived                       = 6,
	Redeployed                     = 7,
	RevivalTarget                  = 8,
	RevivalRegisted                = 9,
	Revived                        = 10,
	ETslRedeployPlayerState_MAX    = 11
};


// Enum TslGame.EDestrucibleSurfaceSourceType
enum class EDestrucibleSurfaceSourceType : uint8_t
{
	Unknown                        = 0,
	Projectile                     = 1,
	Grenade                        = 2,
	Warhead                        = 3,
	Slashing                       = 4,
	EDestrucibleSurfaceSourceType_MAX = 5
};


// Enum TslGame.EAttachParent
enum class EAttachParent : uint8_t
{
	None                           = 0,
	Character                      = 1,
	WeaponGun                      = 2,
	EAttachParent_MAX              = 3
};


// Enum TslGame.EDoorState
enum class EDoorState : uint8_t
{
	Closed                         = 0,
	Closing                        = 1,
	Opened                         = 2,
	Opening                        = 3,
	EDoorState_MAX                 = 4
};


// Enum TslGame.*f66bb41895
enum class E*f66bb41895 : uint8_t
{
	*ae61f2a137                    = 0,
	*de3e203f06                    = 1,
	*f5fa622063                    = 2,
	*486c19ca4d                    = 3,
	*d47a824ff1                    = 4,
	*f66bb41895_MAX                = 5
};


// Enum TslGame.eDESPMode
enum class EeDESPMode : uint8_t
{
	None                           = 0,
	UniformDivision                = 1,
	RadiusFromCenter               = 2,
	eDESPMode_MAX                  = 3
};


// Enum TslGame.ETdmSpawnKit
enum class ETdmSpawnKit : uint8_t
{
	Shotgun                        = 0,
	Smg                            = 1,
	Ar                             = 2,
	Dmr                            = 3,
	Sr                             = 4,
	Etc                            = 5,
	Max                            = 6,
	ETdmSpawnKit_MAX               = 7
};


// Enum TslGame.EWeaponReloadCancelReason
enum class EWeaponReloadCancelReason : uint8_t
{
	Default                        = 0,
	PlayerInterrupted              = 1,
	PlayerMovement                 = 2,
	PlayerInteraction              = 3,
	WeaponSwitch                   = 4,
	PlayerIncapacitated            = 5,
	VehicleMoving                  = 6,
	EWeaponReloadCancelReason_MAX  = 7
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec : uint8_t
{
	Tactical                       = 0,
	Charge                         = 1,
	Single                         = 2,
	Loop                           = 3,
	EWeaponReloadAnimExec_MAX      = 4
};


// Enum TslGame.EWeaponState
enum class EWeaponState : uint8_t
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	EWeaponState_MAX               = 3
};


// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8_t
{
	Stable                         = 0,
	Arming                         = 1,
	UnArming                       = 2,
	EWeaponTransitionState_MAX     = 3
};


// Enum TslGame.EPerceptionType
enum class EPerceptionType : uint8_t
{
	Sight                          = 0,
	Disapp                         = 1,
	Hearing                        = 2,
	Attack                         = 3,
	None                           = 4,
	EPerceptionType_MAX            = 5
};


// Enum TslGame.EBombGameJoinType
enum class EBombGameJoinType : uint8_t
{
	Normal                         = 0,
	IntrusionStart                 = 1,
	IntrusionFinish                = 2,
	EBombGameJoinType_MAX          = 3
};


// Enum TslGame.EBombGameAreaType
enum class EBombGameAreaType : uint8_t
{
	None                           = 0,
	StartArea                      = 1,
	PlantedASite                   = 2,
	PlantedBSite                   = 3,
	NormalArea                     = 4,
	EBombGameAreaType_MAX          = 5
};


// Enum TslGame.EBombItemCategory
enum class EBombItemCategory : uint8_t
{
	None                           = 0,
	Pistol                         = 1,
	SMG                            = 2,
	AR                             = 3,
	SG                             = 4,
	DMR                            = 5,
	SR                             = 6,
	Equipment                      = 7,
	Throwable                      = 8,
	ETC                            = 9,
	EBombItemCategory_MAX          = 10
};


// Enum TslGame.EBombTeamStateInfoType
enum class EBombTeamStateInfoType : uint8_t
{
	MoveASite                      = 0,
	MoveBSite                      = 1,
	SaveMoney                      = 2,
	GiveMoney                      = 3,
	Rush                           = 4,
	SaveMe                         = 5,
	MAX                            = 6,
	EBombTeamStateInfoType_MAX     = 7
};


// Enum TslGame.ECoinTakeType
enum class ECoinTakeType : uint8_t
{
	None                           = 0,
	StoreSellItemToCustomer        = 1,
	CustomerSellItemToStore        = 2,
	KillReward                     = 3,
	KillAssistReward               = 4,
	BombInstallReward              = 5,
	BombDefuseReward               = 6,
	RoundWin                       = 7,
	Donate                         = 8,
	Receipt                        = 9,
	RoundStartNormal               = 10,
	RoundStartDecisive             = 11,
	RoundDefeat                    = 12,
	TeamRoleChange                 = 13,
	MinAllowanceCoin               = 14,
	MaxAllowanceCoin               = 15,
	ThriftyDiffSpendCoin           = 16,
	Admin                          = 17,
	ECoinTakeType_MAX              = 18
};


// Enum TslGame.EBombModeSoundType
enum class EBombModeSoundType : uint8_t
{
	Unknown                        = 0,
	BombPlanting_Phase1            = 1,
	BombPlanting_Phase2            = 2,
	BombPlanting_Phase3            = 3,
	BombExplosion                  = 4,
	BombDefusing                   = 5,
	GiveCoin                       = 6,
	ReceiveCoin                    = 7,
	Purchase                       = 8,
	BombTimerStart                 = 9,
	BombTimerDismantle             = 10,
	BombTimeStop                   = 11,
	RestrictionTimer               = 12,
	EBombModeSoundType_MAX         = 13
};


// Enum TslGame.ETimeBombPhaseType
enum class ETimeBombPhaseType : uint8_t
{
	Unknown                        = 0,
	Planting_Phase1                = 1,
	Planting_Phase2                = 2,
	Planting_Phase3                = 3,
	Explosion                      = 4,
	Defusing                       = 5,
	ETimeBombPhaseType_MAX         = 6
};


// Enum TslGame.ETslBombMatchWinType
enum class ETslBombMatchWinType : uint8_t
{
	Draw                           = 0,
	ExceedRoundWin                 = 1,
	ExceedUseBombKit               = 2,
	ExceedKillCount                = 3,
	EnemyAllLogout                 = 4,
	ETslBombMatchWinType_MAX       = 5
};


// Enum TslGame.*fb744f3cc0
enum class E*fb744f3cc0 : uint8_t
{
	*cd56fd60bb                    = 0,
	*cadd6a3e9c                    = 1,
	*0cc007ce29                    = 2,
	*293e75d16a                    = 3,
	*7ddb0afb51                    = 4,
	*fb744f3cc0_MAX                = 5
};


// Enum TslGame.ETslBombPlantedState
enum class ETslBombPlantedState : uint8_t
{
	NotSet                         = 0,
	Planting                       = 1,
	Planted                        = 2,
	Defused                        = 3,
	Exploded                       = 4,
	ETslBombPlantedState_MAX       = 5
};


// Enum TslGame.ETslBombRoundInProgressState
enum class ETslBombRoundInProgressState : uint8_t
{
	Invalid                        = 0,
	TeamDecision                   = 1,
	Preparing                      = 2,
	Playing                        = 3,
	Ending                         = 4,
	ETslBombRoundInProgressState_MAX = 5
};


// Enum TslGame.EBombKeyNotifyState
enum class EBombKeyNotifyState : uint8_t
{
	None                           = 0,
	InStartArea                    = 1,
	DefenseTeam                    = 2,
	AttackTeam                     = 3,
	HoldBombPlantingKit            = 4,
	EBombKeyNotifyState_MAX        = 5
};


// Enum TslGame.EBombRoundAttribute
enum class EBombRoundAttribute : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	OverTime                       = 2,
	TeamRoleChanged                = 3,
	EBombRoundAttribute_MAX        = 4
};


// Enum TslGame.EBombRoundResultConditionType
enum class EBombRoundResultConditionType : uint8_t
{
	None                           = 0,
	Excellent                      = 1,
	Impressive                     = 2,
	Overwhelming                   = 3,
	Perfect                        = 4,
	Thrifty                        = 5,
	MAX                            = 6,
	EBombRoundResultConditionType_MAX = 7
};


// Enum TslGame.ETslBombRoundResultHistoryType
enum class ETslBombRoundResultHistoryType : uint8_t
{
	None                           = 0,
	TimeUp                         = 1,
	BombExploded                   = 2,
	BombDefused                    = 3,
	TeamElimination                = 4,
	TeamGameLogout                 = 5,
	ETslBombRoundResultHistoryType_MAX = 6
};


// Enum TslGame.EBombUITeamStatusType
enum class EBombUITeamStatusType : uint8_t
{
	None                           = 0,
	Attack                         = 1,
	Defence                        = 2,
	MAX                            = 3,
	EBombUITeamStatusType_MAX      = 4
};


// Enum TslGame.EBombScopeInfo
enum class EBombScopeInfo : uint8_t
{
	None                           = 0,
	Hologram                       = 1,
	Reddot                         = 2,
	Scope2x                        = 3,
	Scope3x                        = 4,
	Scope4x                        = 5,
	Scope6x                        = 6,
	Scope8x                        = 7,
	Scope15x                       = 8,
	MAX                            = 9,
	EBombScopeInfo_MAX             = 10
};


// Enum TslGame.ETslBombKDAMType
enum class ETslBombKDAMType : uint8_t
{
	Kill                           = 0,
	Death                          = 1,
	Assist                         = 2,
	MissionInstallBomb             = 3,
	MissionDefuseBomb              = 4,
	ETslBombKDAMType_MAX           = 5
};


// Enum TslGame.ETslBombTeamRole
enum class ETslBombTeamRole : uint8_t
{
	None                           = 0,
	AttackTeam                     = 1,
	DefenseTeam                    = 2,
	ROLE_MAX                       = 3,
	ETslBombTeamRole_MAX           = 4
};


// Enum TslGame.EHealingItemType
enum class EHealingItemType : uint8_t
{
	HealItem                       = 0,
	BoostItem                      = 1,
	EHealingItemType_MAX           = 2
};


// Enum TslGame.EComparisonTarget
enum class EComparisonTarget : uint8_t
{
	Value                          = 0,
	BBKey                          = 1,
	EComparisonTarget_MAX          = 2
};


// Enum TslGame.EAIMapName
enum class EAIMapName : uint8_t
{
	Baltic                         = 0,
	Desert                         = 1,
	Sanhok                         = 2,
	DihorOtok                      = 3,
	Summerland                     = 4,
	Paramo                         = 5,
	Tiger                          = 6,
	Chimera                        = 7,
	Heaven                         = 8,
	Kiki                           = 9,
	Other                          = 10,
	EAIMapName_MAX                 = 11
};


// Enum TslGame.ETeamModeType
enum class ETeamModeType : uint8_t
{
	Solo                           = 0,
	Duo                            = 1,
	Squad                          = 2,
	ETeamModeType_MAX              = 3
};


// Enum TslGame.*e06fbd160d
enum class E*e06fbd160d : uint8_t
{
	*e7e2d6fe36                    = 0,
	*59ede77bb3                    = 1,
	*2992825a7d                    = 2,
	*7ff9868a39                    = 3,
	*987519e196                    = 4,
	*fa94350203                    = 5,
	*e06fbd160d_MAX                = 6
};


// Enum TslGame.EAICommand
enum class EAICommand : uint8_t
{
	None                           = 0,
	Moving                         = 1,
	Battle                         = 2,
	EAICommand_MAX                 = 3
};


// Enum TslGame.EAIActionState
enum class EAIActionState : uint8_t
{
	Idle                           = 0,
	Battle                         = 1,
	BattleMoving                   = 2,
	Healing                        = 3,
	Farming                        = 4,
	Moving                         = 5,
	Swimming                       = 6,
	EAIActionState_MAX             = 7
};


// Enum TslGame.EAIAliveState
enum class EAIAliveState : uint8_t
{
	Alive                          = 0,
	Groggy                         = 1,
	Dead                           = 2,
	EAIAliveState_MAX              = 3
};


// Enum TslGame.EPickupItemStatus
enum class EPickupItemStatus : uint8_t
{
	NeedWeapon                     = 0,
	NeedBaseEquip                  = 1,
	NeedOneMoreWeapon              = 2,
	NeedHealItem                   = 3,
	NeedBoostItem                  = 4,
	NeedThrowableItem              = 5,
	NeedPan                        = 6,
	NeedNoItem                     = 7,
	EPickupItemStatus_MAX          = 8
};


// Enum TslGame.EIntoCircleLevel
enum class EIntoCircleLevel : uint8_t
{
	AlreadyInWhite                 = 0,
	NearWhite                      = 1,
	MiddleWhite                    = 2,
	ReachableWhite                 = 3,
	UnreachableWhite               = 4,
	EIntoCircleLevel_MAX           = 5
};


// Enum TslGame.EValueCompareFunc
enum class EValueCompareFunc : uint8_t
{
	MoreThan                       = 0,
	MoreThanOrEqual                = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	Equal                          = 4,
	NotEqual                       = 5,
	EValueCompareFunc_MAX          = 6
};


// Enum TslGame.EAIParameter
enum class EAIParameter : uint8_t
{
	None                           = 0,
	Offensive                      = 1,
	PrepareType                    = 2,
	EAIParameter_MAX               = 3
};


// Enum TslGame.EPrepareType
enum class EPrepareType : uint8_t
{
	StopMovement                   = 0,
	MoveRandomLoc                  = 1,
	ThrowToy                       = 2,
	TypeEnd                        = 3,
	EPrepareType_MAX               = 4
};


// Enum TslGame.EAIBehaviors
enum class EAIBehaviors : uint8_t
{
	Normal                         = 0,
	Chasing                        = 1,
	Runaway                        = 2,
	EAIBehaviors_MAX               = 3
};


// Enum TslGame.ERightMoveDirection
enum class ERightMoveDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ERightMoveDirection_MAX        = 3
};


// Enum TslGame.EForwardMoveDirection
enum class EForwardMoveDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Stop                           = 2,
	EForwardMoveDirection_MAX      = 3
};


// Enum TslGame.EUltronWithCircle
enum class EUltronWithCircle : uint8_t
{
	InWhiteCircle                  = 0,
	InBlueCircle                   = 1,
	OutBlueCircle                  = 2,
	MaxNum                         = 3,
	EUltronWithCircle_MAX          = 4
};


// Enum TslGame.EComparisonTargetCircle
enum class EComparisonTargetCircle : uint8_t
{
	WhiteCircle                    = 0,
	BlueCircle                     = 1,
	EComparisonTargetCircle_MAX    = 2
};


// Enum TslGame.ETurnDirection
enum class ETurnDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Stop                           = 2,
	ETurnDirection_MAX             = 3
};


// Enum TslGame.EPercivedGrenadeType
enum class EPercivedGrenadeType : uint8_t
{
	FragGrenade                    = 0,
	StickyBomb                     = 1,
	C4                             = 2,
	EPercivedGrenadeType_MAX       = 3
};


// Enum TslGame.EEnemyCompareElement
enum class EEnemyCompareElement : uint8_t
{
	None                           = 0,
	HouseId                        = 1,
	EEnemyCompareElement_MAX       = 2
};


// Enum TslGame.EInfoPointWithHouse
enum class EInfoPointWithHouse : uint8_t
{
	All                            = 0,
	InHouse                        = 1,
	OutHouse                       = 2,
	EInfoPointWithHouse_MAX        = 3
};


// Enum TslGame.ETargetLocation
enum class ETargetLocation : uint8_t
{
	WhiteCircle                    = 0,
	OtherLocation                  = 1,
	ETargetLocation_MAX            = 2
};


// Enum TslGame.ETestMoveDirection
enum class ETestMoveDirection : uint8_t
{
	Front                          = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	ETestMoveDirection_MAX         = 4
};


// Enum TslGame.EThownWeapon_AI
enum class EThownWeapon_AI : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4
};


// Enum TslGame.EThrowablePoseState_AI
enum class EThrowablePoseState_AI : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5
};


// Enum TslGame.*b6d43735f5
enum class E*b6d43735f5 : uint8_t
{
	*72487ecd25                    = 0,
	*24db5db224                    = 1,
	*fc0e6de622                    = 2,
	*b6d43735f5_MAX                = 3
};


// Enum TslGame.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8_t
{
	Int                            = 0,
	Float                          = 1,
	Bool                           = 2,
	String                         = 3,
	Object                         = 4,
	Vector3                        = 5,
	EModifyBlackboardDataValueType_MAX = 6
};


// Enum TslGame.EThownWeapon
enum class EThownWeapon : uint8_t
{
	GRENADE                        = 0,
	MOLOTOV                        = 1,
	SMOKEBOMB                      = 2,
	FLASHBANG                      = 3,
	EThownWeapon_MAX               = 4
};


// Enum TslGame.EThrowablePoseState
enum class EThrowablePoseState : uint8_t
{
	Idle                           = 0,
	PinOffStart                    = 1,
	Cooking                        = 2,
	WaitForThrow                   = 3,
	Throwing                       = 4,
	EThrowablePoseState_MAX        = 5
};


// Enum TslGame.EBoosterItem
enum class EBoosterItem : uint8_t
{
	ADRENALINE                     = 0,
	PAINKILLER                     = 1,
	ENERGYDRINK                    = 2,
	EBoosterItem_MAX               = 3
};


// Enum TslGame.*aeec389627
enum class E*aeec389627 : uint8_t
{
	*1d1de68fdd                    = 0,
	*929a1e0736                    = 1,
	*38da245ff6                    = 2,
	*a59b3fb585                    = 3,
	*1ae0e32a0d                    = 4,
	*aeec389627_MAX                = 5
};


// Enum TslGame.EFightMovingType
enum class EFightMovingType : uint8_t
{
	FM_Target                      = 0,
	FM_TargetPos                   = 1,
	FM_RandomPos                   = 2,
	FM_Max                         = 3
};


// Enum TslGame.EMonsterPatrol
enum class EMonsterPatrol : uint8_t
{
	Patrol_BackDomain              = 0,
	Patrol_Flee                    = 1,
	Patrol_RunawayHouse            = 2,
	Patrol_SpawnSpot               = 3,
	Patrol_Hearing                 = 4,
	Patrol_Random                  = 5,
	Patrol_Max                     = 6
};


// Enum TslGame.*ac3fe82612
enum class E*ac3fe82612 : uint8_t
{
	*b345d17dfa                    = 0,
	*a933054438                    = 1,
	*2a664b2a44                    = 2,
	*720f56bc54                    = 3,
	*145319a09c                    = 4,
	*ac3fe82612_MAX                = 5
};


// Enum TslGame.*a9b56aab30
enum class E*a9b56aab30 : uint8_t
{
	*368b31b047                    = 0,
	*685feaa497                    = 1,
	*df255a04de                    = 2,
	*e37055aa66                    = 3,
	*5298084313                    = 4,
	*a9b56aab30_MAX                = 5
};


// Enum TslGame.*aebf1d052d
enum class E*aebf1d052d : uint8_t
{
	*7fbf9b9c41                    = 0,
	*9d740e4558                    = 1,
	*fee3156310                    = 2,
	*0ce068ba5d                    = 3,
	*aebf1d052d_MAX                = 4
};


// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8_t
{
	Fence                          = 0,
	Hay                            = 1,
	Camera                         = 2,
	EReactionObjectType_MAX        = 3
};


// Enum TslGame.*beab555f0b
enum class E*beab555f0b : uint8_t
{
	*decef1ff80                    = 0,
	*b6e10d5fa7                    = 1,
	*3a14d01a20                    = 2,
	*4c542c42d7                    = 3,
	*beab555f0b_MAX                = 4
};


// Enum TslGame.ECraftResult
enum class ECraftResult : uint8_t
{
	Success                        = 0,
	Invalid_Character              = 1,
	Invalid_Inventory              = 2,
	Invalid_Equipment              = 3,
	Invalid_CraftingRuleComponent  = 4,
	Invalid_CraftItemData          = 5,
	Invalid_ReservedCraftItem      = 6,
	Invalid_PlayerState            = 7,
	Not_Enough_Material            = 8,
	Not_Enough_Space               = 9,
	Miss_Matched_RestrictFilter    = 10,
	Restricted_Stance              = 11,
	ECraftResult_MAX               = 12
};


// Enum TslGame.*7715a25dcb
enum class E*7715a25dcb : uint8_t
{
	*21fb3a7cec                    = 0,
	*506f8408e2                    = 1,
	*b4044b1860                    = 2,
	*6de094ddf5                    = 3,
	*3db52c30fe                    = 4,
	*7715a25dcb_MAX                = 5
};


// Enum TslGame.ECustomCarepackageState
enum class ECustomCarepackageState : uint8_t
{
	Transporting                   = 0,
	Falling                        = 1,
	Landing                        = 2,
	ECustomCarepackageState_MAX    = 3
};


// Enum TslGame.EDecoyFiringState
enum class EDecoyFiringState : uint8_t
{
	Firing                         = 0,
	BetweenShots                   = 1,
	BetweenSequences               = 2,
	EDecoyFiringState_MAX          = 3
};


// Enum TslGame.EDecoyState
enum class EDecoyState : uint8_t
{
	Uninitialized                  = 0,
	Cooking                        = 1,
	DelayedFiring                  = 2,
	Firing                         = 3,
	Reloading                      = 4,
	DelayedEnding                  = 5,
	EndOfLife                      = 6,
	EDecoyState_MAX                = 7
};


// Enum TslGame.EWhiteZoneShape
enum class EWhiteZoneShape : uint8_t
{
	None                           = 0,
	Circle                         = 1,
	EWhiteZoneShape_MAX            = 2
};


// Enum TslGame.EBluezoneType
enum class EBluezoneType : uint8_t
{
	Normal                         = 0,
	Fast                           = 1,
	EBluezoneType_MAX              = 2
};


// Enum TslGame.EVendingMachineType
enum class EVendingMachineType : uint8_t
{
	AMMUNITION                     = 0,
	BOOSTING                       = 1,
	THROWABLE                      = 2,
	WEAPON                         = 3,
	HEALING                        = 4,
	EVendingMachineType_MAX        = 5
};


// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8_t
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EPatrolSpeed_MAX               = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState : uint8_t
{
	None                           = 0,
	Login                          = 1,
	Logout                         = 2,
	EPlayerAuthState_MAX           = 3
};


// Enum TslGame.EBlueChipTowerState
enum class EBlueChipTowerState : uint8_t
{
	IsUnavailable                  = 0,
	IsAvailable                    = 1,
	IsInUse                        = 2,
	IsLaunching                    = 3,
	RegisterFinished               = 4,
	NeedToCharge                   = 5,
	Cancel                         = 6,
	Broken                         = 7,
	EBlueChipTowerState_MAX        = 8
};


// Enum TslGame.EEmPickupAircraftStatus
enum class EEmPickupAircraftStatus : uint8_t
{
	Available                      = 0,
	InvalidPhase_Early             = 1,
	InvalidPhase_Late              = 2,
	QueueFull                      = 3,
	Disabled                       = 4,
	EEmPickupAircraftStatus_MAX    = 5
};


// Enum TslGame.EItemClientAnimSeqUnload
enum class EItemClientAnimSeqUnload : uint8_t
{
	None                           = 0,
	Disable                        = 1,
	Enable                         = 2,
	EItemClientAnimSeqUnload_MAX   = 3
};


// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8_t
{
	Default                        = 0,
	PropaneTank                    = 1,
	SmallTank                      = 2,
	RacingExplosive                = 3,
	GasPump                        = 4,
	EFExplosivePropDataType_MAX    = 5
};


// Enum TslGame.*374e136c90
enum class E*374e136c90 : uint8_t
{
	*b4b5122611                    = 0,
	*71f9617e8a                    = 1,
	*f8a2e97433                    = 2,
	*707068f9f6                    = 3,
	*374e136c90_MAX                = 4
};


// Enum TslGame.ELoadingScreenType
enum class ELoadingScreenType : uint8_t
{
	NONE                           = 0,
	ICE_BRAKE                      = 1,
	RULE_SET                       = 2,
	WEAPON                         = 3,
	ATTACHMENT                     = 4,
	EQUIPMENT                      = 5,
	ITEM                           = 6,
	VEHICLE                        = 7,
	SYSTEM                         = 8,
	DEFAULT                        = 9,
	GAME_MODE                      = 10,
	EXPOSE_WITH_HIGHEST_PRIORITY   = 11,
	ELoadingScreenType_MAX         = 12
};


// Enum TslGame.ETslControllerType
enum class ETslControllerType : uint8_t
{
	Mouse                          = 0,
	GamePad                        = 1,
	Total                          = 2,
	ETslControllerType_MAX         = 3
};


// Enum TslGame.EVoiceInterfaceType
enum class EVoiceInterfaceType : uint8_t
{
	VIVOX                          = 0,
	XIM                            = 1,
	GVOICE                         = 2,
	EVoiceInterfaceType_MAX        = 3
};


// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType : uint8_t
{
	None                           = 0,
	ToAll                          = 1,
	ToChannel                      = 2,
	EVoiceTransmissionType_MAX     = 3
};


// Enum TslGame.EVoiceChannelJoinState
enum class EVoiceChannelJoinState : uint8_t
{
	NotJoined                      = 0,
	Joining                        = 1,
	Leaving                        = 2,
	Joined                         = 3,
	EVoiceChannelJoinState_MAX     = 4
};


// Enum TslGame.EVoiceLoginState
enum class EVoiceLoginState : uint8_t
{
	NotLoggedin                    = 0,
	Loggingin                      = 1,
	Loggedin                       = 2,
	EVoiceLoginState_MAX           = 3
};


// Enum TslGame.EVoiceConnectionState
enum class EVoiceConnectionState : uint8_t
{
	NotConnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	EVoiceConnectionState_MAX      = 3
};


// Enum TslGame.ETableCheckerHideOption
enum class ETableCheckerHideOption : uint8_t
{
	Hide                           = 0,
	Show                           = 1,
	ETableCheckerHideOption_MAX    = 2
};


// Enum TslGame.EKeyHintGradeSettingValue
enum class EKeyHintGradeSettingValue : uint8_t
{
	Basic                          = 0,
	Advanced                       = 1,
	EKeyHintGradeSettingValue_MAX  = 2
};


// Enum TslGame.EKeyHintGradeBitmask
enum class EKeyHintGradeBitmask : uint8_t
{
	Basic                          = 0,
	Advanced                       = 1,
	EKeyHintGradeBitmask_MAX       = 2
};


// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8_t
{
	NotDefined                     = 0,
	Initialized                    = 1,
	Prolonged                      = 2,
	ETslWeatherAction_MAX          = 3
};


// Enum TslGame.ECharacterInteractBehaviorType
enum class ECharacterInteractBehaviorType : uint8_t
{
	None                           = 0,
	ExtraSlotForMode               = 1,
	Revive                         = 2,
	BodyCarry                      = 3,
	TraumaBag                      = 4,
	InstantRevivalKit              = 5,
	TeamEmote                      = 6,
	ItemRequest                    = 7,
	RepairKit                      = 8,
	ECharacterInteractBehaviorType_MAX = 9
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase : uint8_t
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType : uint8_t
{
	Bundle                         = 0,
	Generator                      = 1,
	ELobbyItemBundleType_MAX       = 2
};


// Enum TslGame.EItemSpawnType
enum class EItemSpawnType : uint8_t
{
	FixedRatioAndAdjustableTotalNumber = 0,
	AdjustableRatioAndFixedTotalNumber = 1,
	AdjustableRatioAndAdjustableTotalNumber = 2,
	Invalid                        = 3,
	EItemSpawnType_MAX             = 4
};


// Enum TslGame.EThreatType
enum class EThreatType : uint8_t
{
	Damage                         = 0,
	Sight                          = 1,
	Noise                          = 2,
	EThreatType_MAX                = 3
};


// Enum TslGame.ELocationType
enum class ELocationType : uint8_t
{
	LANDMARK                       = 0,
	EXTRA_LANDMARK                 = 1,
	CITY                           = 2,
	CITY_DETAIL                    = 3,
	TOWN                           = 4,
	COMPOUNDS                      = 5,
	EXTRA                          = 6,
	TEST_SHOW_ALL                  = 7,
	ELocationType_MAX              = 8
};


// Enum TslGame.*e810842c83
enum class E*e810842c83 : uint8_t
{
	*32b4778722                    = 0,
	*cdb094b2a4                    = 1,
	*4e842448d7                    = 2,
	*4572bd2158                    = 3,
	*fa5f31f68b                    = 4,
	*46ca022c17                    = 5,
	*18f51bc156                    = 6,
	*1568ff5b58                    = 7,
	*7c0449b141                    = 8,
	*209ce410c3                    = 9,
	*5ecdbf16bf                    = 10,
	*69662bfbbc                    = 11,
	*2b014a4fe8                    = 12,
	*e810842c83_MAX                = 13
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState : uint8_t
{
	Disconnect                     = 0,
	WaitInitialize                 = 1,
	WaitStart                      = 2,
	Gaming                         = 3,
	Finished                       = 4,
	ELobbyLinkState_MAX            = 5
};


// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8_t
{
	Default                        = 0,
	Wardrobe                       = 1,
	Appearance                     = 2,
	ELobbyCharacterAnimationType_MAX = 3
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	RGBA                           = 4,
	Undefined                      = 5,
	EParameterLUTChannel_MAX       = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType : uint8_t
{
	Bool                           = 0,
	Scalar                         = 1,
	Vector                         = 2,
	Texture                        = 3,
	Undefined                      = 4,
	EMaterialParameterType_MAX     = 5
};


// Enum TslGame.EBlackZoneState
enum class EBlackZoneState : uint8_t
{
	BZ_WaitingForMatchStart        = 0,
	BZ_SelectNewBlackZone          = 1,
	BZ_BeginStrike                 = 2,
	BZ_FireMisile                  = 3,
	BZ_EndBombing                  = 4,
	BZ_MAX                         = 5
};


// Enum TslGame.*7abbd45c1b
enum class E*7abbd45c1b : uint8_t
{
	*7b94671e1e                    = 0,
	*2e9305239f                    = 1,
	*3834756677                    = 2,
	*8149896900                    = 3,
	*e8590b0ed1                    = 4,
	*7abbd45c1b_MAX                = 5
};


// Enum TslGame.*914e3555c5
enum class E*914e3555c5 : uint8_t
{
	*4d4002431c                    = 0,
	*a9b9e746d5                    = 1,
	*dd518eea4a                    = 2,
	*005ea20ad8                    = 3,
	*914e3555c5_MAX                = 4
};


// Enum TslGame.ENpcDirection
enum class ENpcDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	ForwardRight                   = 4,
	BackwardRight                  = 5,
	BackwardLeft                   = 6,
	ForwardLeft                    = 7,
	ENpcDirection_MAX              = 8
};


// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType : uint8_t
{
	Idle                           = 0,
	Walk                           = 1,
	Run                            = 2,
	Sprint                         = 3,
	ENpcWalkingSpeedType_MAX       = 4
};


// Enum TslGame.ENpcCharacterStateType
enum class ENpcCharacterStateType : uint8_t
{
	Default                        = 0,
	Respawn                        = 1,
	Fire1                          = 2,
	Fire2                          = 3,
	Fire3                          = 4,
	Knockback                      = 5,
	Knockdown                      = 6,
	Getup                          = 7,
	ThrowPhase1                    = 8,
	ThrowPhase2                    = 9,
	ThrowPhase3                    = 10,
	Blind                          = 11,
	Despawn                        = 12,
	ENpcCharacterStateType_MAX     = 13
};


// Enum TslGame.ERandomType
enum class ERandomType : uint8_t
{
	Random                         = 0,
	Shuffle                        = 1,
	Ascending                      = 2,
	Descending                     = 3,
	ERandomType_MAX                = 4
};


// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType : uint8_t
{
	CustomAnimData                 = 0,
	AnimSequence                   = 1,
	ECustomAnimDataType_MAX        = 2
};


// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType : uint8_t
{
	FullBody                       = 0,
	UpperBody                      = 1,
	FullBodyInstance               = 2,
	UpperBodyInstance              = 3,
	LowerBody                      = 4,
	ECustomAnimSlotType_MAX        = 5
};


// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter : uint8_t
{
	First                          = 0,
	Sec                            = 1,
	Third                          = 2,
	Fourth                         = 3,
	ERetriggerCounter_MAX          = 4
};


// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8_t
{
	None                           = 0,
	Location                       = 1,
	SelectNpc                      = 2,
	EPathDebugType_MAX             = 3
};


// Enum TslGame.EOneOnOneRoomState
enum class EOneOnOneRoomState : uint8_t
{
	None                           = 0,
	MatchPrepare                   = 1,
	MatchStart                     = 2,
	MatchEnd                       = 3,
	MatchEndResult                 = 4,
	RoundStart                     = 5,
	RoundPlaying                   = 6,
	GiveScore                      = 7,
	BreakTime                      = 8,
	RoundResult                    = 9,
	RoundEnd                       = 10,
	EOneOnOneRoomState_MAX         = 11
};


// Enum TslGame.EOneOnOneStageType
enum class EOneOnOneStageType : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Audience                       = 2,
	EOneOnOneStageType_MAX         = 3
};


// Enum TslGame.EOneOnOneTicketState
enum class EOneOnOneTicketState : uint8_t
{
	None                           = 0,
	Waiting                        = 1,
	CountDown                      = 2,
	Playing                        = 3,
	EOneOnOneTicketState_MAX       = 4
};


// Enum TslGame.EOneOnOneSideType
enum class EOneOnOneSideType : uint8_t
{
	None                           = 0,
	Home                           = 1,
	Away                           = 2,
	Audience                       = 3,
	EOneOnOneSideType_MAX          = 4
};


// Enum TslGame.EOneOnOneInvenRecoverType
enum class EOneOnOneInvenRecoverType : uint8_t
{
	None                           = 0,
	Empty                          = 1,
	Recover                        = 2,
	EOneOnOneInvenRecoverType_MAX  = 3
};


// Enum TslGame.EOneOnOneResultType
enum class EOneOnOneResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	Escape                         = 4,
	EOneOnOneResultType_MAX        = 5
};


// Enum TslGame.EOneOnOneMessageType
enum class EOneOnOneMessageType : uint8_t
{
	None                           = 0,
	StartSearch_Message            = 1,
	StopSearch_Message_Normal      = 2,
	StopSearch_Message_UseDiffFacility = 3,
	EnterArena_Message             = 4,
	ExitArena_Message_Normal       = 5,
	ExitArena_Message_FromAudience = 6,
	CannotSearch_Message_NotInProgress = 7,
	EOneOnOneMessageType_MAX       = 8
};


// Enum TslGame.*811b5ab295
enum class E*811b5ab295 : uint8_t
{
	*197fe15eb5                    = 0,
	*ce55537b51                    = 1,
	*c4074a9d8f                    = 2,
	*7a339c5a5d                    = 3,
	*3b722d4a83                    = 4,
	*811b5ab295_MAX                = 5
};


// Enum TslGame.*36e227681f
enum class E*36e227681f : uint8_t
{
	*badb2968f5                    = 0,
	*55449c1a00                    = 1,
	*35b9a34e27                    = 2,
	*c5c9a006ce                    = 3,
	*36e227681f_MAX                = 4
};


// Enum TslGame.*ce9d2a5a86
enum class E*ce9d2a5a86 : uint8_t
{
	*c8ff2be060                    = 0,
	*4b128dff01                    = 1,
	*291f931e32                    = 2,
	*a0b3553e67                    = 3,
	*ce9d2a5a86_MAX                = 4
};


// Enum TslGame.*30e23011e7
enum class E*30e23011e7 : uint8_t
{
	*22438a6796                    = 0,
	*8bfeca7fc0                    = 1,
	*5dcee2c8c8                    = 2,
	*abed9994d6                    = 3,
	*89a65d63b9                    = 4,
	*30e23011e7_MAX                = 5
};


// Enum TslGame.*d5bf15c820
enum class E*d5bf15c820 : uint8_t
{
	*8f17312003                    = 0,
	*43212cef54                    = 1,
	*c52cad9f2b                    = 2,
	*d5bf15c820_MAX                = 3
};


// Enum TslGame.ECorrectedSpawnLocationTraceType
enum class ECorrectedSpawnLocationTraceType : uint8_t
{
	Sweep                          = 0,
	Trace                          = 1,
	ECorrectedSpawnLocationTraceType_MAX = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState : uint8_t
{
	Idle                           = 0,
	PinOff                         = 1,
	Cooking                        = 2,
	Throw                          = 3,
	Dropped                        = 4,
	EThrowableState_MAX            = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8_t
{
	NotStart                       = 0,
	Impact                         = 1,
	Delay                          = 2,
	ImpactOrDelay                  = 3,
	EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.*5a06832434
enum class E*5a06832434 : uint8_t
{
	*d32de386af                    = 0,
	*e4710131cf                    = 1,
	*08a7dcfcee                    = 2,
	*47dfb7cdfe                    = 3,
	*5a06832434_MAX                = 4
};


// Enum TslGame.*f999ee1900
enum class E*f999ee1900 : uint8_t
{
	*de905a5984                    = 0,
	*a11482a42d                    = 1,
	*c1fe56f5b3                    = 2,
	*11b4bda571                    = 3,
	*f999ee1900_MAX                = 4
};


// Enum TslGame.*3db9e91fb9
enum class E*3db9e91fb9 : uint8_t
{
	*351c806ad5                    = 0,
	*bf24b7f9af                    = 1,
	*da39b29ff6                    = 2,
	*457a5e18d3                    = 3,
	*3db9e91fb9_MAX                = 4
};


// Enum TslGame.ETargetInteractionPurpose
enum class ETargetInteractionPurpose : uint8_t
{
	Move                           = 0,
	Reset                          = 1,
	ETargetInteractionPurpose_MAX  = 2
};


// Enum TslGame.ETrainingRoomInteractionType
enum class ETrainingRoomInteractionType : uint8_t
{
	None                           = 0,
	Training_Stop                  = 1,
	ETrainingRoomInteractionType_MAX = 2
};


// Enum TslGame.ESeatDirection
enum class ESeatDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	ESeatDirection_MAX             = 4
};


// Enum TslGame.ESpareTireProcessState
enum class ESpareTireProcessState : uint8_t
{
	None                           = 0,
	PutWorking                     = 1,
	PutCancel                      = 2,
	PutFinish                      = 3,
	TakeWorking                    = 4,
	TakeCancel                     = 5,
	TakeFinish                     = 6,
	ESpareTireProcessState_MAX     = 7
};


// Enum TslGame.EMapColor
enum class EMapColor : uint8_t
{
	Undefined                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Yellow                         = 4,
	EMapColor_MAX                  = 5
};


// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EEngineStateAutoOff            = 0,
	EEngineStateAutoOn             = 1,
	EEngineStateManualOff          = 2,
	EEngineStateManualOn           = 3,
	EVehicleEngineState_MAX        = 4
};


// Enum TslGame.*f7f7dd2132
enum class E*f7f7dd2132 : uint8_t
{
	*7143a384e6                    = 0,
	*9ff92296d4                    = 1,
	*f7e0febc0e                    = 2,
	*07f2f758bd                    = 3,
	*53063c651a                    = 4,
	*f7f7dd2132_MAX                = 5
};


// Enum TslGame.EPackageState
enum class EPackageState : uint8_t
{
	Normal                         = 0,
	Broken                         = 1,
	Empty                          = 2,
	EPackageState_MAX              = 3
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8_t
{
	None                           = 0,
	Probability                    = 1,
	TotalCount                     = 2,
	EThingGroupSpawnType_MAX       = 3
};


// Enum TslGame.EInteractionErrorType
enum class EInteractionErrorType : uint8_t
{
	None                           = 0,
	Success                        = 1,
	Fail_SearchingOneOnOne         = 2,
	Fail_PlayingOneOnOne           = 3,
	EInteractionErrorType_MAX      = 4
};


// Enum TslGame.*a85aacdd06
enum class E*a85aacdd06 : uint8_t
{
	*d262db283b                    = 0,
	*e2d8f0e006                    = 1,
	*4bf29108bb                    = 2,
	*521f31631f                    = 3,
	*a85aacdd06_MAX                = 4
};


// Enum TslGame.*59b3c98926
enum class E*59b3c98926 : uint8_t
{
	*9387f3cd0e                    = 0,
	*545f2f65e1                    = 1,
	*e73b87f673                    = 2,
	*fe18700d77                    = 3,
	*59b3c98926_MAX                = 4
};


// Enum TslGame.EContainerState
enum class EContainerState : uint8_t
{
	Closed                         = 0,
	Opening                        = 1,
	Opened                         = 2,
	EContainerState_MAX            = 3
};


// Enum TslGame.ESpawnDestroyTiming
enum class ESpawnDestroyTiming : uint8_t
{
	Undefined                      = 0,
	SpawnOnMatchStart              = 1,
	DestoryOnMatchStart            = 2,
	ESpawnDestroyTiming_MAX        = 3
};


// Enum TslGame.ELastMoveTask
enum class ELastMoveTask : uint8_t
{
	MoveTo                         = 0,
	MoveDirectlyToward             = 1,
	ELastMoveTask_MAX              = 2
};


// Enum TslGame.EEjectAllowed
enum class EEjectAllowed : uint8_t
{
	NotAllowed                     = 0,
	Waiting                        = 1,
	Allowed                        = 2,
	EEjectAllowed_MAX              = 3
};


// Enum TslGame.EUltAutoEquipItemType
enum class EUltAutoEquipItemType : uint8_t
{
	SubParts                       = 0,
	Throwable                      = 1,
	Boost                          = 2,
	Heal                           = 3,
	Other                          = 4,
	EUltAutoEquipItemType_MAX      = 5
};


// Enum TslGame.ECompareTeamDist
enum class ECompareTeamDist : uint8_t
{
	CurDest                        = 0,
	FinalDest                      = 1,
	SafeZone                       = 2,
	ECompareTeamDist_MAX           = 3
};


// Enum TslGame.EHelicopterState
enum class EHelicopterState : uint8_t
{
	Normal                         = 0,
	Smoke                          = 1,
	Explosion                      = 2,
	EHelicopterState_MAX           = 3
};


// Enum TslGame.EEmergencyAircraftState
enum class EEmergencyAircraftState : uint8_t
{
	None                           = 0,
	Flame                          = 1,
	Explosion                      = 2,
	LastExplosion                  = 3,
	Destroy                        = 4,
	EEmergencyAircraftState_MAX    = 5
};


// Enum TslGame.EEmPickup_PathValidationState
enum class EEmPickup_PathValidationState : uint8_t
{
	None                           = 0,
	InProgress                     = 1,
	Valid                          = 2,
	Invalid                        = 3,
	EEmPickup_MAX                  = 4
};


// Enum TslGame.*c73f2c0345
enum class E*c73f2c0345 : uint8_t
{
	*07f4337a76                    = 0,
	*c191b5e5b5                    = 1,
	*c73f2c0345_MAX                = 2
};


// Enum TslGame.*0dc0496b35
enum class E*0dc0496b35 : uint8_t
{
	*6e886f4e58                    = 0,
	*895d75b38c                    = 1,
	*291fd9e1e4                    = 2,
	*be07382c9a                    = 3,
	*c4fc02c920                    = 4,
	*fc35f56ebd                    = 5,
	*67a7403ac2                    = 6,
	*a3835dc9be                    = 7,
	*efbfe0bd96                    = 8,
	*21a881cdf6                    = 9,
	*43cf24a612                    = 10,
	*64ddb6d9b5                    = 11,
	*b0a7949668                    = 12,
	*0dc0496b35_MAX                = 13
};


// Enum TslGame.*f55eb54ad0
enum class E*f55eb54ad0 : uint8_t
{
	*d6ccbcda99                    = 0,
	*e29c34c686                    = 1,
	*6871109c7e                    = 2,
	*cbd4770ca4                    = 3,
	*f55eb54ad0_MAX                = 4
};


// Enum TslGame.*a922b2c5ca
enum class E*a922b2c5ca : uint8_t
{
	*587935df4c                    = 0,
	*4b5565067b                    = 1,
	*9dc30387fe                    = 2,
	*bf18a03f75                    = 3,
	*7f5fc0992f                    = 4,
	*6424f6ff21                    = 5,
	*a922b2c5ca_MAX                = 6
};


// Enum TslGame.EOPUIBuffLocationType
enum class EOPUIBuffLocationType : uint8_t
{
	None                           = 0,
	TPP                            = 1,
	FPP                            = 2,
	FPPWithMosnterHp               = 3,
	MAX                            = 4,
	EOPUIBuffLocationType_MAX      = 5
};


// Enum TslGame.EClanNoticeUGCLevel
enum class EClanNoticeUGCLevel : uint8_t
{
	Hide                           = 0,
	Show                           = 1,
	EClanNoticeUGCLevel_MAX        = 2
};


// Enum TslGame.EClanNameUGCLevel
enum class EClanNameUGCLevel : uint8_t
{
	HideAll                        = 0,
	OnlyMine                       = 1,
	MineAndOthersTag               = 2,
	ShowAll                        = 3,
	EClanNameUGCLevel_MAX          = 4
};


// Enum TslGame.EPlayerArenaObserverState
enum class EPlayerArenaObserverState : uint8_t
{
	Off                            = 0,
	RoundPreview                   = 1,
	FinalRoundPreview              = 2,
	WonAlive                       = 3,
	WonDead                        = 4,
	RoundFinished                  = 5,
	RoundFinishedWhileLoot         = 6,
	RoundResultWithObserve         = 7,
	RoundResult                    = 8,
	Eliminated                     = 9,
	AfterRoundLoadout              = 10,
	EPlayerArenaObserverState_MAX  = 11
};


// Enum TslGame.EArenaMoneySource
enum class EArenaMoneySource : uint8_t
{
	Initial                        = 0,
	Kill                           = 1,
	Revive                         = 2,
	WinArena                       = 3,
	LoseArena                      = 4,
	Buy                            = 5,
	EArenaMoneySource_MAX          = 6
};


// Enum TslGame.EArenaScreenOpen
enum class EArenaScreenOpen : uint8_t
{
	Loadout                        = 0,
	Leaderboard                    = 1,
	EArenaScreenOpen_MAX           = 2
};


// Enum TslGame.EArenaCameraObserveState
enum class EArenaCameraObserveState : uint8_t
{
	Off                            = 0,
	FreeFly                        = 1,
	AttachedToPlayer               = 2,
	EArenaCameraObserveState_MAX   = 3
};


// Enum TslGame.*df885ee22e
enum class E*df885ee22e : uint8_t
{
	*0d991b7458                    = 0,
	*c58482edaa                    = 1,
	*0501034cfe                    = 2,
	*f609610bf0                    = 3,
	*cfccc42f53                    = 4,
	*7df4b02217                    = 5,
	*bc2d512a2c                    = 6,
	*4859f30efc                    = 7,
	*a15bd2af9c                    = 8,
	*df885ee22e_MAX                = 9
};


// Enum TslGame.EStrictSelectObserveTarget
enum class EStrictSelectObserveTarget : uint8_t
{
	None                           = 0,
	Arena                          = 1,
	Player                         = 2,
	EStrictSelectObserveTarget_MAX = 3
};


// Enum TslGame.EFutsalSoundType
enum class EFutsalSoundType : uint8_t
{
	Goal                           = 0,
	Start                          = 1,
	Finish                         = 2,
	EFutsalSoundType_MAX           = 3
};


// Enum TslGame.EHASSurvivorItemLevel
enum class EHASSurvivorItemLevel : uint8_t
{
	None                           = 0,
	Lv1                            = 1,
	Lv2                            = 2,
	EHASSurvivorItemLevel_MAX      = 3
};


// Enum TslGame.EHASSurvivorItemType
enum class EHASSurvivorItemType : uint8_t
{
	None                           = 0,
	Flashbang                      = 1,
	Healkit                        = 2,
	Toolkit                        = 3,
	SmokeBomb                      = 4,
	EHASSurvivorItemType_MAX       = 5
};


// Enum TslGame.EHASSurvivorCorruptPhase
enum class EHASSurvivorCorruptPhase : uint8_t
{
	None                           = 0,
	PhaseOne                       = 1,
	PhaseTwo                       = 2,
	Corrupted                      = 3,
	EHASSurvivorCorruptPhase_MAX   = 4
};


// Enum TslGame.EHASSurvivorBreathState
enum class EHASSurvivorBreathState : uint8_t
{
	None                           = 0,
	NormalBreath                   = 1,
	FastBreath                     = 2,
	Exhausted                      = 3,
	EHASSurvivorBreathState_MAX    = 4
};


// Enum TslGame.EHASSurvivorState
enum class EHASSurvivorState : uint8_t
{
	Normal                         = 0,
	Injured                        = 1,
	DBNO                           = 2,
	BodyCarried                    = 3,
	Captured                       = 4,
	Dead                           = 5,
	Escaped                        = 6,
	Sacrificed                     = 7,
	EndgameDead                    = 8,
	EHASSurvivorState_MAX          = 9
};


// Enum TslGame.EHASSeekerState
enum class EHASSeekerState : uint8_t
{
	Normal                         = 0,
	Stunned                        = 1,
	EHASSeekerState_MAX            = 2
};


// Enum TslGame.EHASPlayerRole
enum class EHASPlayerRole : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	Survivor                       = 2,
	EHASPlayerRole_MAX             = 3
};


// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType : uint8_t
{
	None                           = 0,
	Distance                       = 1,
	Frustum                        = 2,
	LastRenderedTime               = 3,
	SameTransform                  = 4,
	NearbyTransform                = 5,
	DistAndFrustumAndNear          = 6,
	All                            = 7,
	ETslParticleCullType_MAX       = 8
};


// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority : uint8_t
{
	High                           = 0,
	Low                            = 1,
	ETslParticleGroupPriority_MAX  = 2
};


// Enum TslGame.ETslHASStencilColor
enum class ETslHASStencilColor : uint8_t
{
	None                           = 0,
	SpectatedCharacter             = 1,
	SpectatedCharacterTeam         = 2,
	SpectatedCharacterEnemy        = 3,
	WithoutSpectatedCharacter      = 4,
	WithoutSpectatedTeamCharacter  = 5,
	InteractionFocusingColor       = 6,
	SandboxOutline                 = 7,
	Invincible                     = 8,
	ETslHASStencilColor_MAX        = 9
};


// Enum TslGame.*c212fb8fdf
enum class E*c212fb8fdf : uint8_t
{
	*e4c999f7e6                    = 0,
	*545fad00a5                    = 1,
	*a0e27c3c18                    = 2,
	*ceda127af4                    = 3,
	*e5f269ae69                    = 4,
	*124decce63                    = 5,
	*0df4c5cfe5                    = 6,
	*c212fb8fdf_MAX                = 7
};


// Enum TslGame.ETslHASInteractType
enum class ETslHASInteractType : uint8_t
{
	BlockAllInteractive            = 0,
	InteractionObjectCanPassThrough = 1,
	ETslHASInteractType_MAX        = 2
};


// Enum TslGame.ETslHASFixTargetState
enum class ETslHASFixTargetState : uint8_t
{
	PreStart                       = 0,
	Normal                         = 1,
	StopFixing                     = 2,
	Fixing                         = 3,
	Explode                        = 4,
	Broken                         = 5,
	Fixed                          = 6,
	ETslHASFixTargetState_MAX      = 7
};


// Enum TslGame.EHASSoundType
enum class EHASSoundType : uint8_t
{
	Breath                         = 0,
	BreathStop                     = 1,
	FastBreath                     = 2,
	FastBreathStop                 = 3,
	HeartBeat                      = 4,
	ReadyToFire                    = 5,
	Exhausted                      = 6,
	ExhaustedStop                  = 7,
	Moan                           = 8,
	MoanStop                       = 9,
	Panic                          = 10,
	CabinetPanic                   = 11,
	SeekerStun                     = 12,
	EHASSoundType_MAX              = 13
};


// Enum TslGame.ETslHAS_QTEType
enum class ETslHAS_QTEType : uint8_t
{
	Generator                      = 0,
	Wiggle                         = 1,
	Prison                         = 2,
	Healing                        = 3,
	None                           = 4,
	ETslHAS_MAX                    = 5
};


// Enum TslGame.ETslHASActiveEffet
enum class ETslHASActiveEffet : uint8_t
{
	GeneratorActive                = 0,
	PrisonActive                   = 1,
	ExitActive                     = 2,
	None                           = 3,
	ETslHASActiveEffet_MAX         = 4
};


// Enum TslGame.EPrivateTrainingRoomPhase
enum class EPrivateTrainingRoomPhase : uint8_t
{
	None                           = 0,
	FinishSelect_Practice          = 1,
	StartSelect_Weapon             = 2,
	SetupStart_Practice            = 3,
	CountDownStart_Practice        = 4,
	Start_Practice                 = 5,
	Cancel_Practice                = 6,
	Finish_Practice                = 7,
	Restart_Practice               = 8,
	Exit_Practice                  = 9,
	EPrivateTrainingRoomPhase_MAX  = 10
};


// Enum TslGame.EPrivateWaitingRoomPhase
enum class EPrivateWaitingRoomPhase : uint8_t
{
	None                           = 0,
	LoadingMap                     = 1,
	Ready                          = 2,
	StartSelect_Practice           = 3,
	EPrivateWaitingRoomPhase_MAX   = 4
};


// Enum TslGame.ETrainingScoreType
enum class ETrainingScoreType : uint8_t
{
	None                           = 0,
	HeadShot                       = 1,
	Kill                           = 2,
	SoundCatch                     = 3,
	TotalScore                     = 4,
	AimAccuracy                    = 5,
	ETrainingScoreType_MAX         = 6
};


// Enum TslGame.ETrainingPracticeType
enum class ETrainingPracticeType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETrainingPracticeType_MAX      = 3
};


// Enum TslGame.ETslTrainingTeleportType
enum class ETslTrainingTeleportType : uint8_t
{
	InfoThumnail                   = 0,
	MapIconVolume                  = 1,
	NONE                           = 2,
	ETslTrainingTeleportType_MAX   = 3
};


// Enum TslGame.EBombUIHUDTimerStatusType
enum class EBombUIHUDTimerStatusType : uint8_t
{
	None                           = 0,
	RoundTime                      = 1,
	Attack                         = 2,
	Defence                        = 3,
	MAX                            = 4,
	EBombUIHUDTimerStatusType_MAX  = 5
};


// Enum TslGame.EBombUIMatchResultType
enum class EBombUIMatchResultType : uint8_t
{
	None                           = 0,
	Lose                           = 1,
	Win                            = 2,
	Draw                           = 3,
	MAX                            = 4,
	EBombUIMatchResultType_MAX     = 5
};


// Enum TslGame.EBombUIPlayerStatusType
enum class EBombUIPlayerStatusType : uint8_t
{
	None                           = 0,
	Alive                          = 1,
	DBNO                           = 2,
	Die                            = 3,
	Disconnected                   = 4,
	MAX                            = 5,
	EBombUIPlayerStatusType_MAX    = 6
};


// Enum TslGame.ETslPreloadPriority
enum class ETslPreloadPriority : uint8_t
{
	Static                         = 0,
	Dynamic                        = 1,
	ETslPreloadPriority_MAX        = 2
};


// Enum TslGame.BlueChipTowerAnimState
enum class EBlueChipTowerAnimState : uint8_t
{
	Wait                           = 0,
	IsInUse                        = 1,
	Success                        = 2,
	BlueChipTowerAnimState_MAX     = 3
};


// Enum TslGame.EFollowTargetType
enum class EFollowTargetType : uint8_t
{
	Bot                            = 0,
	CurrentPlayer                  = 1,
	EFollowTargetType_MAX          = 2
};


// Enum TslGame.*36a4a75216
enum class E*36a4a75216 : uint8_t
{
	*9510cb7e67                    = 0,
	*29f4a8ca48                    = 1,
	*36a4a75216_MAX                = 2
};


// Enum TslGame.EHASGamePhase
enum class EHASGamePhase : uint8_t
{
	NotStarted                     = 0,
	Started                        = 1,
	GeneratorAllFixed              = 2,
	EndGame                        = 3,
	MatchEnded                     = 4,
	EHASGamePhase_MAX              = 5
};


// Enum TslGame.EHASPrisonSoundType
enum class EHASPrisonSoundType : uint8_t
{
	Bluezone                       = 0,
	BluezoneStop                   = 1,
	Sink                           = 2,
	EHASPrisonSoundType_MAX        = 3
};


// Enum TslGame.ETslHASPrisonState
enum class ETslHASPrisonState : uint8_t
{
	PreStart                       = 0,
	Normal                         = 1,
	Broken                         = 2,
	SurvivorHooked                 = 3,
	Sacrificed                     = 4,
	Reload                         = 5,
	ETslHASPrisonState_MAX         = 6
};


// Enum TslGame.*f157e9f383
enum class E*f157e9f383 : uint8_t
{
	*a7812e0a3e                    = 0,
	*719e074502                    = 1,
	*f9c32a2e32                    = 2,
	*c793cce022                    = 3,
	*d4ec6989ca                    = 4,
	*e6dc859018                    = 5,
	*31452564ec                    = 6,
	*05b32addff                    = 7,
	*dd9c1babdb                    = 8,
	*f157e9f383_MAX                = 9
};


// Enum TslGame.EHealthDebuffType
enum class EHealthDebuffType : uint8_t
{
	None                           = 0,
	Bleed                          = 1,
	EHealthDebuffType_MAX          = 2
};


// Enum TslGame.EControlDebuffType
enum class EControlDebuffType : uint8_t
{
	None                           = 0,
	Stun                           = 1,
	Trap                           = 2,
	Slow                           = 3,
	EControlDebuffType_MAX         = 4
};


// Enum TslGame.EBulletproofShieldDurabilityState
enum class EBulletproofShieldDurabilityState : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Damaged                        = 2,
	DamagedSeverely                = 3,
	Destroyed                      = 4,
	EBulletproofShieldDurabilityState_MAX = 5
};


// Enum TslGame.EBulletproofShieldInstallState
enum class EBulletproofShieldInstallState : uint8_t
{
	None                           = 0,
	InstallInprogress              = 1,
	InstallComplete                = 2,
	Destroyed                      = 3,
	EBulletproofShieldInstallState_MAX = 4
};


// Enum TslGame.*55fe2048b7
enum class E*55fe2048b7 : uint8_t
{
	*1055985323                    = 0,
	*090438dd7a                    = 1,
	*1de26ea2df                    = 2,
	*c65f50a072                    = 3,
	*98bd734e8c                    = 4,
	*2ccc7062a1                    = 5,
	*55fe2048b7_MAX                = 6
};


// Enum TslGame.EAITaskState
enum class EAITaskState : uint8_t
{
	Idle                           = 0,
	Tasking                        = 1,
	Done                           = 2,
	InValid                        = 3,
	EAITaskState_MAX               = 4
};


// Enum TslGame.EDroneOperationalState
enum class EDroneOperationalState : uint8_t
{
	INVALID                        = 0,
	ENABLED_ENUM_START             = 1,
	ENABLED                        = 2,
	ENABLED_CONTROLLED             = 3,
	ENABLED_RETURNING_TO_OWNER     = 4,
	ENABLED_ENUM_END               = 5,
	DISABLED_ENUM_START            = 6,
	DISABLED                       = 7,
	DISABLED_IN_WATER              = 8,
	DISABLED_DESTROYED             = 9,
	DISABLED_ENUM_END              = 10,
	COUNT                          = 11,
	EDroneOperationalState_MAX     = 12
};


// Enum TslGame.EDroneState
enum class EDroneState : uint8_t
{
	INVALID                        = 0,
	STOWED                         = 1,
	STOWING                        = 2,
	PICK_UP                        = 3,
	EQUIPPING                      = 4,
	EQUIPPED                       = 5,
	DEPLOYED                       = 6,
	COUNT                          = 7,
	EDroneState_MAX                = 8
};


// Enum TslGame.*f56255f04e
enum class E*f56255f04e : uint8_t
{
	*96ffa97346                    = 0,
	*361bb7191a                    = 1,
	*8d6c9b41b2                    = 2,
	*5ee8407b5a                    = 3,
	*f56255f04e_MAX                = 4
};


// Enum TslGame.*0b9e16671b
enum class E*0b9e16671b : uint8_t
{
	*8bfeca7fc0                    = 0,
	*c30b405684                    = 1,
	*dbd4e85960                    = 2,
	*0b9e16671b_MAX                = 3
};


// Enum TslGame.EBodyCarryState
enum class EBodyCarryState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	PickingUp                      = 2,
	Dropping                       = 3,
	EBodyCarryState_MAX            = 4
};


// Enum TslGame.ECountInfoAnimType
enum class ECountInfoAnimType : uint8_t
{
	None                           = 0,
	Default                        = 1,
	Decreasing                     = 2,
	Increasing                     = 3,
	Warning                        = 4,
	Emerging                       = 5,
	Vanishing                      = 6,
	ECountInfoAnimType_MAX         = 7
};


// Enum TslGame.*0d897c742d
enum class E*0d897c742d : uint8_t
{
	*4f239ac670                    = 0,
	*c17c050cf2                    = 1,
	*0d897c742d_MAX                = 2
};


// Enum TslGame.ETrainingDashboardRange
enum class ETrainingDashboardRange : uint8_t
{
	None                           = 0,
	Range10                        = 1,
	Range50                        = 2,
	Range100                       = 3,
	ETrainingDashboardRange_MAX    = 4
};


// Enum TslGame.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	SpawnActor                     = 0,
	StopSpawnedParticles           = 1,
	HideMesh                       = 2,
	HideMeshInstance               = 3,
	HideBone                       = 4,
	ApplyPhysicalAnimationProfile  = 5,
	SetCollisionEnabled            = 6,
	ECustomDamageEventReactionType_MAX = 7
};


// Enum TslGame.*e9a63b27c4
enum class E*e9a63b27c4 : uint8_t
{
	*9b602ace61                    = 0,
	*36f4771944                    = 1,
	*d08214f036                    = 2,
	*e9a63b27c4_MAX                = 3
};


// Enum TslGame.EScmCollisionGroup
enum class EScmCollisionGroup : uint8_t
{
	Default                        = 0,
	FireField                      = 1,
	ExplosiveItem                  = 2,
	EScmCollisionGroup_MAX         = 3
};


// Enum TslGame.EDamageFieldType
enum class EDamageFieldType : uint8_t
{
	Default                        = 0,
	DirectTick                     = 1,
	EDamageFieldType_MAX           = 2
};


// Enum TslGame.EOptionTab
enum class EOptionTab : uint8_t
{
	Graphics                       = 0,
	Audio                          = 1,
	Controls                       = 2,
	Gameplay                       = 3,
	KeyBindings                    = 4,
	EOptionTab_MAX                 = 5
};


// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType : uint8_t
{
	None                           = 0,
	Action                         = 1,
	Axis                           = 2,
	ETslGameOptionKeyBindingType_MAX = 3
};


// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType : uint8_t
{
	None                           = 0,
	KeyboardLayout                 = 1,
	PreviewImage                   = 2,
	PreviewCrosshair               = 3,
	VolumeUnitMeter                = 4,
	PreviewMaterial                = 5,
	LinkButton                     = 6,
	ETslGameOptionSupplementaryType_MAX = 7
};


// Enum TslGame.ENaviGamepadInputType
enum class ENaviGamepadInputType : uint8_t
{
	DPad_Pressed                   = 0,
	DPad_Released                  = 1,
	Axis                           = 2,
	Axis_Hold                      = 3,
	ENaviGamepadInputType_MAX      = 4
};


// Enum TslGame.EDynamicWeather
enum class EDynamicWeather : uint8_t
{
	NotInitialized                 = 0,
	Initialized                    = 1,
	BlendInStarted                 = 2,
	Saturated                      = 3,
	BlendOutStarted                = 4,
	BlendOutEnded                  = 5,
	Finished                       = 6,
	EDynamicWeather_MAX            = 7
};


// Enum TslGame.EEffectSpreadState
enum class EEffectSpreadState : uint8_t
{
	ESS_InitialTrace               = 0,
	ESS_InitialProcess             = 1,
	ESS_Spreading                  = 2,
	ESS_SpreadDone                 = 3,
	ESS_Ending                     = 4,
	ESS_MAX                        = 5
};


// Enum TslGame.*d2c21e4dfd
enum class E*d2c21e4dfd : uint8_t
{
	*eb212fce11                    = 0,
	*ce49f5c008                    = 1,
	*34e85bad2c                    = 2,
	*1dafdc096d                    = 3,
	*d2c21e4dfd_MAX                = 4
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector : uint8_t
{
	None                           = 0,
	Use                            = 1,
	Use01                          = 2,
	Use02                          = 3,
	Use03                          = 4,
	ETslFenceSelector_MAX          = 5
};


// Enum TslGame.EFlowTextState
enum class EFlowTextState : uint8_t
{
	None                           = 0,
	Wait                           = 1,
	FlowLeftOut                    = 2,
	FlowLeftIn                     = 3,
	FlowRightOut                   = 4,
	FlowRightIn                    = 5,
	BlinkAnimation                 = 6,
	EFlowTextState_MAX             = 7
};


// Enum TslGame.*8d9dac68b4
enum class E*8d9dac68b4 : uint8_t
{
	*ae6ee80ac2                    = 0,
	*ccd36d53f5                    = 1,
	*d8c6e2f882                    = 2,
	*d25f8fc689                    = 3,
	*6693f44c54                    = 4,
	*cceba0e8e2                    = 5,
	*c4d99e8388                    = 6,
	*8d9dac68b4_MAX                = 7
};


// Enum TslGame.EBBHolderSelectMethod
enum class EBBHolderSelectMethod : uint8_t
{
	Closest                        = 0,
	Random                         = 1,
	EBBHolderSelectMethod_MAX      = 2
};


// Enum TslGame.*1324b81a2b
enum class E*1324b81a2b : uint8_t
{
	*08f5034ba0                    = 0,
	*5f2609f203                    = 1,
	*25aa8d92a3                    = 2,
	*4e150374e6                    = 3,
	*1324b81a2b_MAX                = 4
};


// Enum TslGame.ERacingBgmTheme
enum class ERacingBgmTheme : uint8_t
{
	Default                        = 0,
	WinterRaicng                   = 1,
	ERacingBgmTheme_MAX            = 2
};


// Enum TslGame.EWarModeCarePackageKitType
enum class EWarModeCarePackageKitType : uint8_t
{
	CarepackageKit_Off             = 0,
	CarepackageKit_Basic           = 1,
	CarepackageKit_ARKit           = 2,
	CarepackageKit_SRKit           = 3,
	CarepackageKit_MAX             = 4
};


// Enum TslGame.*f6a3f0b96c
enum class E*f6a3f0b96c : uint8_t
{
	*6adb4b533e                    = 0,
	*b709324504                    = 1,
	*4ea8cfb582                    = 2,
	*f6a3f0b96c_MAX                = 3
};


// Enum TslGame.*8805f3570e
enum class E*8805f3570e : uint8_t
{
	*4f8921428c                    = 0,
	*d7dab71d1b                    = 1,
	*72542d1219                    = 2,
	*8805f3570e_MAX                = 3
};


// Enum TslGame.EVoiceChatChannel
enum class EVoiceChatChannel : uint8_t
{
	All                            = 0,
	TeamOnly                       = 1,
	None                           = 2,
	MAX                            = 3,
	EVoiceChatChannel_MAX          = 4
};


// Enum TslGame.EVoiceInputMode_Console
enum class EVoiceInputMode_Console : uint8_t
{
	OpenMic                        = 0,
	Disable                        = 1,
	MAX                            = 2,
	EVoiceInputMode_MAX            = 3
};


// Enum TslGame.EVoiceInputMode_PC
enum class EVoiceInputMode_PC : uint8_t
{
	OpenMic                        = 0,
	PushToTalk                     = 1,
	Toggle                         = 2,
	Disable                        = 3,
	MAX                            = 4,
	EVoiceInputMode_MAX            = 5
};


// Enum TslGame.ERacingGamePhase
enum class ERacingGamePhase : uint8_t
{
	NotStarted                     = 0,
	PrepareState                   = 1,
	InProgress                     = 2,
	EndPhase                       = 3,
	End                            = 4,
	ERacingGamePhase_MAX           = 5
};


// Enum TslGame.EGasPumpState
enum class EGasPumpState : uint8_t
{
	Inactive                       = 0,
	StartFueling                   = 1,
	StopFueling                    = 2,
	StopFuelingFull                = 3,
	EGasPumpState_MAX              = 4
};


// Enum TslGame.ETslHelperInputActionType
enum class ETslHelperInputActionType : uint8_t
{
	DPad                           = 0,
	Shoulder                       = 1,
	Face                           = 2,
	Keyboard                       = 3,
	ETslHelperInputActionType_MAX  = 4
};


// Enum TslGame.*7fc6491d79
enum class E*7fc6491d79 : uint8_t
{
	*165f5209d6                    = 0,
	*6f2f4da369                    = 1,
	*b6ec81e4e4                    = 2,
	*7fc6491d79_MAX                = 3
};


// Enum TslGame.*ca3db901f3
enum class E*ca3db901f3 : uint8_t
{
	*e4c999f7e6                    = 0,
	*a0e27c3c18                    = 1,
	*b2125c3b9f                    = 2,
	*7cdc33aa98                    = 3,
	*d2e1986e61                    = 4,
	*2d8d9b984a                    = 5,
	*ca3db901f3_MAX                = 6
};


// Enum TslGame.*00de150239
enum class E*00de150239 : uint8_t
{
	*e4c999f7e6                    = 0,
	*69fd40e914                    = 1,
	*a0e27c3c18                    = 2,
	*1d5f5ce06b                    = 3,
	*00de150239_MAX                = 4
};


// Enum TslGame.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8_t
{
	Default                        = 0,
	AimTrainingOnly                = 1,
	ETrainingButtonActiveType_MAX  = 2
};


// Enum TslGame.EVendingMachineState
enum class EVendingMachineState : uint8_t
{
	ACTIVATED                      = 0,
	DEACTIVATED_TEMPORARILY_BY_PICK_DELAY = 1,
	DEACTIVATED_TEMPORARILY_BY_DAMAGE = 2,
	DEACTIVATED_TEMPORARILY_BY_JACKPOT = 3,
	DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_PICK_COUNT = 4,
	EVendingMachineState_MAX       = 5
};


// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState : uint8_t
{
	Default                        = 0,
	Playing                        = 1,
	Interrupted                    = 2,
	Finished                       = 3,
	EOutGameMontageState_MAX       = 4
};


// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Ammo                           = 2,
	EItemRequestType_MAX           = 3
};


// Enum TslGame.JukeBoxAnimState
enum class EJukeBoxAnimState : uint8_t
{
	OPEN                           = 0,
	CLOSED                         = 1,
	JukeBoxAnimState_MAX           = 2
};


// Enum TslGame.ELivingThingThreatLevel
enum class ELivingThingThreatLevel : uint8_t
{
	NoChanged                      = 0,
	IncrementThreatLevel           = 1,
	DecrementThreatLevel           = 2,
	Calm                           = 3,
	Fear                           = 4,
	Panic                          = 5,
	Dead                           = 6,
	MAX                            = 7,
	ELivingThingThreatLevel_MAX    = 8
};


// Enum TslGame.ELivingThingCustomEvent
enum class ELivingThingCustomEvent : uint8_t
{
	HittedByBullet                 = 0,
	HittedByExplosion              = 1,
	HittedByCar                    = 2,
	HittedByCharacter              = 3,
	HittedByLivingThing            = 4,
	HittedByPhysicsBody            = 5,
	HittedByOthers                 = 6,
	Custom1                        = 7,
	Custom2                        = 8,
	Custom3                        = 9,
	Custom4                        = 10,
	Custom5                        = 11,
	Custom6                        = 12,
	Custom7                        = 13,
	Custom8                        = 14,
	Custom9                        = 15,
	Custom10                       = 16,
	Custom11                       = 17,
	Custom12                       = 18,
	Custom13                       = 19,
	Custom14                       = 20,
	Custom15                       = 21,
	Custom16                       = 22,
	Custom17                       = 23,
	Custom18                       = 24,
	Custom19                       = 25,
	Custom20                       = 26,
	MAX                            = 27,
	ELivingThingCustomEvent_MAX    = 28
};


// Enum TslGame.ETLMeshSelection
enum class ETLMeshSelection : uint8_t
{
	Auto                           = 0,
	StaticMesh                     = 1,
	SkeletalMesh                   = 2,
	None                           = 3,
	ETLMeshSelection_MAX           = 4
};


// Enum TslGame.ELobbyCharacterPosition
enum class ELobbyCharacterPosition : uint8_t
{
	Position1                      = 0,
	Position2                      = 1,
	Position3                      = 2,
	Position4                      = 3,
	ELobbyCharacterPosition_MAX    = 4
};


// Enum TslGame.ELobbyCharacterReadyType
enum class ELobbyCharacterReadyType : uint8_t
{
	Ready                          = 0,
	NotReady                       = 1,
	ReadyToNotReady                = 2,
	NotReadyToReady                = 3,
	EmoteToReady                   = 4,
	EmoteToNotReady                = 5,
	ELobbyCharacterReadyType_MAX   = 6
};


// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8_t
{
	Distance                       = 0,
	Kill                           = 1,
	Survivor                       = 2,
	Max                            = 3,
	EObserverPlayerListType_MAX    = 4
};


// Enum TslGame.*b3e0144f8a
enum class E*b3e0144f8a : uint8_t
{
	*fcb70975ba                    = 0,
	*2190d63205                    = 1,
	*cf3c1762f2                    = 2,
	*b3e0144f8a_MAX                = 3
};


// Enum TslGame.EZombieAttackType
enum class EZombieAttackType : uint8_t
{
	Melee                          = 0,
	Throw                          = 1,
	EZombieAttackType_MAX          = 2
};


// Enum TslGame.ECustomDamageZoneType
enum class ECustomDamageZoneType : uint8_t
{
	Head                           = 0,
	UpperBody                      = 1,
	LowerBody                      = 2,
	Arms                           = 3,
	Legs                           = 4,
	ECustomDamageZoneType_MAX      = 5
};


// Enum TslGame.ECustomDamageWeaponClass
enum class ECustomDamageWeaponClass : uint8_t
{
	Bullet                         = 0,
	Melee                          = 1,
	ECustomDamageWeaponClass_MAX   = 2
};


// Enum TslGame.EArenaStartType
enum class EArenaStartType : uint8_t
{
	Player                         = 0,
	AircraftStart                  = 1,
	AircraftEnd                    = 2,
	EArenaStartType_MAX            = 3
};


// Enum TslGame.ERacingItemIcon
enum class ERacingItemIcon : uint8_t
{
	Heal                           = 0,
	Ammo                           = 1,
	Boost                          = 2,
	Gun                            = 3,
	FlareAmmo                      = 4,
	FlashBang                      = 5,
	Granade                        = 6,
	SmokeBomb                      = 7,
	SpikeTrap                      = 8,
	StickyBomb                     = 9,
	FirstKillBombardItem           = 10,
	FirstKillBombardItem_NotActivate = 11,
	ERacingItemIcon_MAX            = 12
};


// Enum TslGame.ERacingGameScoreType
enum class ERacingGameScoreType : uint8_t
{
	CheckPoint                     = 0,
	Trick                          = 1,
	Kill                           = 2,
	ERacingGameScoreType_MAX       = 3
};


// Enum TslGame.EPGALOutput
enum class EPGALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EPGALOutput_MAX                = 2
};


// Enum TslGame.*f6b50c3ac1
enum class E*f6b50c3ac1 : uint8_t
{
	*6902ecf0f1                    = 0,
	*bafe2a9c3c                    = 1,
	*0c81e3e946                    = 2,
	*fe5003d8d3                    = 3,
	*0ae2c31831                    = 4,
	*f6b50c3ac1_MAX                = 5
};


// Enum TslGame.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8_t
{
	PreDeploy                      = 0,
	Deploying                      = 1,
	PostDeploy                     = 2,
	Popped                         = 3,
	Idle                           = 4,
	ESpikeDeploymentState_MAX      = 5
};


// Enum TslGame.E40mmDeployState
enum class E40mmDeployState : uint8_t
{
	None                           = 0,
	FuseTriggered                  = 1,
	DeployStarted                  = 2,
	DeployFinished                 = 3,
	DeployFailed                   = 4,
	E40mmDeployState_MAX           = 5
};


// Enum TslGame.*1532109731
enum class E*1532109731 : uint8_t
{
	*2da402d215                    = 0,
	*b949d420c0                    = 1,
	*f565e02cd1                    = 2,
	*1532109731_MAX                = 3
};


// Enum TslGame.ETslPubgIdAssetType
enum class ETslPubgIdAssetType : uint8_t
{
	NONE                           = 0,
	NAMEPLATE                      = 1,
	EMBLEM                         = 2,
	EMBLEM_ANIMATED                = 3,
	MEDAL1                         = 4,
	MEDAL2                         = 5,
	CLANPLATE                      = 6,
	CLANPLATE_LOW_DEFINITION       = 7,
	TIER                           = 8,
	ETslPubgIdAssetType_MAX        = 9
};


// Enum TslGame.*12b085cdaf
enum class E*12b085cdaf : uint8_t
{
	*4160021fd6                    = 0,
	*3a8cb04e57                    = 1,
	*1629318fd3                    = 2,
	*12b085cdaf_MAX                = 3
};


// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8_t
{
	GameMode                       = 0,
	Character                      = 1,
	Preload                        = 2,
	ETslReferenceObjType_MAX       = 3
};


// Enum TslGame.*8559fc72c6
enum class E*8559fc72c6 : uint8_t
{
	*df2f493e05                    = 0,
	*27ddcbb959                    = 1,
	*62b97b65c6                    = 2,
	*da589fdd61                    = 3,
	*3a71d01252                    = 4,
	*8559fc72c6_MAX                = 5
};


// Enum TslGame.ESandStormSoundType
enum class ESandStormSoundType : uint8_t
{
	None                           = 0,
	StartSound                     = 1,
	LoopSound                      = 2,
	InSound                        = 3,
	OutSound                       = 4,
	ESandStormSoundType_MAX        = 5
};


// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8_t
{
	ReplayPlay                     = 0,
	ReplayEditor                   = 1,
	ReplayRender                   = 2,
	EReplayTimelineMode_MAX        = 3
};


// Enum TslGame.*f3ac8a8569
enum class E*f3ac8a8569 : uint8_t
{
	*e119dc8d24                    = 0,
	*3b23ea7bb7                    = 1,
	*294d219258                    = 2,
	*da81696138                    = 3,
	*b801ddeecc                    = 4,
	*f3ac8a8569_MAX                = 5
};


// Enum TslGame.*136faad802
enum class E*136faad802 : uint8_t
{
	*4adf5c35ac                    = 0,
	*17993105ff                    = 1,
	*4d0f0a2106                    = 2,
	*0c64ea0b4b                    = 3,
	*1d70cc69a5                    = 4,
	*0d566df04c                    = 5,
	*5b579458f5                    = 6,
	*194d793799                    = 7,
	*f9a73a0c4d                    = 8,
	*afc8a17962                    = 9,
	*c5846d5849                    = 10,
	*65e594ebed                    = 11,
	*136faad802_MAX                = 12
};


// Enum TslGame.ERideVehicle
enum class ERideVehicle : uint8_t
{
	None                           = 0,
	Ride                           = 1,
	Leave                          = 2,
	ERideVehicle_MAX               = 3
};


// Enum TslGame.*fd23751917
enum class E*fd23751917 : uint8_t
{
	*56079d079a                    = 0,
	*2e770a0841                    = 1,
	*4ffe1a61e9                    = 2,
	*fd23751917_MAX                = 3
};


// Enum TslGame.*ef2f477fcb
enum class E*ef2f477fcb : uint8_t
{
	*f4f26d4482                    = 0,
	*acea41c792                    = 1,
	*219414b200                    = 2,
	*ef2f477fcb_MAX                = 3
};


// Enum TslGame.ERedeployProgressDotType
enum class ERedeployProgressDotType : uint8_t
{
	None                           = 0,
	Pass                           = 1,
	Start                          = 2,
	Recruit                        = 3,
	NotOpenYet                     = 4,
	PlayingRedeploy                = 5,
	MAX                            = 6,
	ERedeployProgressDotType_MAX   = 7
};


// Enum TslGame.ETslTrainingDashboardRangeUIType
enum class ETslTrainingDashboardRangeUIType : uint8_t
{
	None                           = 0,
	Range10                        = 1,
	Range50                        = 2,
	Range100                       = 3,
	ETslTrainingDashboardRangeUIType_MAX = 4
};


// Enum TslGame.ETslTrainingDashboardPracticeUIType
enum class ETslTrainingDashboardPracticeUIType : uint8_t
{
	None                           = 0,
	Practice_Aim                   = 1,
	Practice_Sound                 = 2,
	ETslTrainingDashboardPracticeUIType_MAX = 3
};


// Enum TslGame.*73c992bf57
enum class E*73c992bf57 : uint8_t
{
	*1f9fbb06b9                    = 0,
	*88e8ede6af                    = 1,
	*51aeeb2426                    = 2,
	*3d17a52022                    = 3,
	*295b1d3b41                    = 4,
	*fecb9f27c8                    = 5,
	*f1ee646595                    = 6,
	*73c992bf57_MAX                = 7
};


// Enum TslGame.*c1dcbb8cbc
enum class E*c1dcbb8cbc : uint8_t
{
	*1552c11be4                    = 0,
	*8f022ef69c                    = 1,
	*683903776d                    = 2,
	*c1dcbb8cbc_MAX                = 3
};


// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8_t
{
	Idle                           = 0,
	Prepare                        = 1,
	Throw                          = 2,
	EMeleeThrowState_MAX           = 3
};


// Enum TslGame.*fc41af2c27
enum class E*fc41af2c27 : uint8_t
{
	*b19f7bf2ba                    = 0,
	*f75214faf3                    = 1,
	*aea39fa5c3                    = 2,
	*fc41af2c27_MAX                = 3
};


// Enum TslGame.EMinimapFocus
enum class EMinimapFocus : uint8_t
{
	CharacterFocus                 = 0,
	NextPlayzoneFocus              = 1,
	None                           = 2,
	EMinimapFocus_MAX              = 3
};


// Enum TslGame.ETslArenaLoadoutItemCategory
enum class ETslArenaLoadoutItemCategory : uint8_t
{
	PistolAndShotgun               = 0,
	Smg                            = 1,
	Ar                             = 2,
	Dmr                            = 3,
	Sr                             = 4,
	Equipment                      = 5,
	ETslArenaLoadoutItemCategory_MAX = 6
};


// Enum TslGame.ETslArenaLoadoutDirections
enum class ETslArenaLoadoutDirections : uint8_t
{
	Up                             = 0,
	Right                          = 1,
	Down                           = 2,
	Left                           = 3,
	ETslArenaLoadoutDirections_MAX = 4
};


// Enum TslGame.*06a879a190
enum class E*06a879a190 : uint8_t
{
	*76474c865c                    = 0,
	*53957293a4                    = 1,
	*0ddf58dd23                    = 2,
	*68c3d81593                    = 3,
	*06a879a190_MAX                = 4
};


// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath : uint8_t
{
	HeadShot                       = 0,
	DBNO                           = 1,
	DBNOByHeadShot                 = 2,
	None                           = 3,
	EConditionOfDeath_MAX          = 4
};


// Enum TslGame.ETslTeamInfoIconState
enum class ETslTeamInfoIconState : uint8_t
{
	Default                        = 0,
	Vehicle                        = 1,
	Parachute                      = 2,
	Die                            = 3,
	Groggy                         = 4,
	Quitter                        = 5,
	AirCraft                       = 6,
	ItemRequest                    = 7,
	EmergencyPickup                = 8,
	BlueBallHolder                 = 9,
	Redeploy                       = 10,
	RedeployFighting               = 11,
	Revival                        = 12,
	SpecificMode                   = 13,
	ETslTeamInfoIconState_MAX      = 14
};


// Enum TslGame.EControllerImageType
enum class EControllerImageType : uint8_t
{
	XboxOne                        = 0,
	PS4                            = 1,
	Quail                          = 2,
	Quail_ThirdParty               = 3,
	None                           = 4,
	EControllerImageType_MAX       = 5
};


// Enum TslGame.EBinaryStepperType
enum class EBinaryStepperType : uint8_t
{
	OFF                            = 0,
	ON                             = 1,
	EBinaryStepperType_MAX         = 2
};


// Enum TslGame.EKeyIconCombinationDisplayType
enum class EKeyIconCombinationDisplayType : uint8_t
{
	NotUsed                        = 0,
	Empty                          = 1,
	Plus                           = 2,
	Slash                          = 3,
	EKeyIconCombinationDisplayType_MAX = 4
};


// Enum TslGame.EGamepadKeyIconDisplayType
enum class EGamepadKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	ComboHold                      = 2,
	TimerHoldCircle                = 3,
	TimerHoldBar                   = 4,
	EGamepadKeyIconDisplayType_MAX = 5
};


// Enum TslGame.EDirectMessageColorType
enum class EDirectMessageColorType : uint8_t
{
	Alert                          = 0,
	System                         = 1,
	Chat                           = 2,
	Clan                           = 3,
	MAX                            = 4,
	EDirectMessageColorType_MAX    = 5
};


// Enum TslGame.*821a046d91
enum class E*821a046d91 : uint8_t
{
	*d3687ec526                    = 0,
	*45ace222e8                    = 1,
	*9897d351c4                    = 2,
	*095192ec50                    = 3,
	*821a046d91_MAX                = 4
};


// Enum TslGame.*209065607c
enum class E*209065607c : uint8_t
{
	*f2a0e23ed4                    = 0,
	*91765a4604                    = 1,
	*0021ed3fbc                    = 2,
	*209065607c_MAX                = 3
};


// Enum TslGame.EEmotePlayViewType
enum class EEmotePlayViewType : uint8_t
{
	Disable                        = 0,
	TeamMate_Enable                = 1,
	Interaction_Enable             = 2,
	EEmotePlayViewType_MAX         = 3
};


// Enum TslGame.*a0be41cdff
enum class E*a0be41cdff : uint8_t
{
	*52454eae8f                    = 0,
	*2013885efb                    = 1,
	*edb95dbf9b                    = 2,
	*0021ed3fbc                    = 3,
	*a0be41cdff_MAX                = 4
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState : uint8_t
{
	Wait                           = 0,
	Release                        = 1,
	NoRestrict                     = 2,
	EBluezoneState_MAX             = 3
};


// Enum TslGame.EStatInfoType
enum class EStatInfoType : uint8_t
{
	Kill                           = 0,
	Damage                         = 1,
	Assist                         = 2,
	EStatInfoType_MAX              = 3
};


// Enum TslGame.EDisplayPlayerInfoType
enum class EDisplayPlayerInfoType : uint8_t
{
	PlayerList                     = 0,
	EngagedEnemies                 = 1,
	NearbyPlayers                  = 2,
	OtherEngagements               = 3,
	ObserverTeamInfoList           = 4,
	EDisplayPlayerInfoType_MAX     = 5
};


// Enum TslGame.MatchResultTypeEnum
enum class EMatchResultTypeEnum : uint8_t
{
	INVALID                        = 0,
	DEFAULT                        = 1,
	OBSERVER                       = 2,
	ZOMBIE                         = 3,
	LEAGUE                         = 4,
	TYPE_NUM                       = 5,
	MatchResultTypeEnum_MAX        = 6
};


// Enum TslGame.EMarkStates
enum class EMarkStates : uint8_t
{
	Normal                         = 0,
	Groggy                         = 1,
	Dead                           = 2,
	Vehicle                        = 3,
	Parachute                      = 4,
	Quitter                        = 5,
	Aircraft                       = 6,
	ItemRequest                    = 7,
	EmergencyPickup                = 8,
	EMarkStates_MAX                = 9
};


// Enum TslGame.ETeenageInfoType
enum class ETeenageInfoType : uint8_t
{
	Normal                         = 0,
	Season                         = 1,
	ETeenageInfoType_MAX           = 2
};


// Enum TslGame.EGuideKeyType
enum class EGuideKeyType : uint8_t
{
	PickUp                         = 0,
	Drop                           = 1,
	QuickPickUp                    = 2,
	QuickDrop                      = 3,
	QuickPack                      = 4,
	Equip                          = 5,
	Unequip                        = 6,
	Swap                           = 7,
	Detach                         = 8,
	Unpack                         = 9,
	Use                            = 10,
	SwitchSlot                     = 11,
	Confirm                        = 12,
	Cancel                         = 13,
	Apply                          = 14,
	Purchase                       = 15,
	DetachAll                      = 16,
	UnpackAll                      = 17,
	PickUpAmount                   = 18,
	DropAmount                     = 19,
	SwapWeapon                     = 20,
	DropWeapon                     = 21,
	QuickEquip                     = 22,
	QuickEquip_NoHold              = 23,
	MoveToTrunk                    = 24,
	DropFromTrunk                  = 25,
	VicinityToTrunk                = 26,
	WeaponToTrunk                  = 27,
	Pack                           = 28,
	Pack_NoHold                    = 29,
	None                           = 30,
	EGuideKeyType_MAX              = 31
};


// Enum TslGame.EBlueBlockerStateUIType
enum class EBlueBlockerStateUIType : uint8_t
{
	None                           = 0,
	Active                         = 1,
	Deactive                       = 2,
	Hide                           = 3,
	EBlueBlockerStateUIType_MAX    = 4
};


// Enum TslGame.EFiremode
enum class EFiremode : uint8_t
{
	FullAuto                       = 0,
	ThreeRoundBurst                = 1,
	TwoRoundBurst                  = 2,
	SemiAuto                       = 3,
	Single                         = 4,
	FullAutoFast                   = 5,
	FullAuto_SG                    = 6,
	ThreeRoundBurst_SG             = 7,
	SemiAuto_SG                    = 8,
	EFiremode_MAX                  = 9
};


// Enum TslGame.ETraumaBagHealMode
enum class ETraumaBagHealMode : uint8_t
{
	NoHealItem                     = 0,
	Bandage                        = 1,
	FirstAidKit                    = 2,
	Medkit                         = 3,
	MaxAndNone                     = 4,
	ETraumaBagHealMode_MAX         = 5
};


// Enum TslGame.EHeatState
enum class EHeatState : uint8_t
{
	Stable                         = 0,
	IncreaseHeat                   = 1,
	DecreaseHeat                   = 2,
	OverHeated                     = 3,
	CoolingDown                    = 4,
	EHeatState_MAX                 = 5
};


// Enum TslGame.EKeyboardKeyIconDisplayType
enum class EKeyboardKeyIconDisplayType : uint8_t
{
	Tap                            = 0,
	DoubleTap                      = 1,
	Hold                           = 2,
	EKeyboardKeyIconDisplayType_MAX = 3
};


// Enum TslGame.ETslHASInteractionState
enum class ETslHASInteractionState : uint8_t
{
	Normal                         = 0,
	Buffed                         = 1,
	Debuffed                       = 2,
	Multiple                       = 3,
	ETslHASInteractionState_MAX    = 4
};


// Enum TslGame.ETslHASInteractionType
enum class ETslHASInteractionType : uint8_t
{
	None                           = 0,
	Generator                      = 1,
	Exit                           = 2,
	Healing                        = 3,
	BeingHealed                    = 4,
	Chest                          = 5,
	SelfHeal                       = 6,
	Wiggle                         = 7,
	Scoping                        = 8,
	CabinetKnock                   = 9,
	ETslHASInteractionType_MAX     = 10
};


// Enum TslGame.ETslHASInteractionMethod
enum class ETslHASInteractionMethod : uint8_t
{
	None                           = 0,
	Hand                           = 1,
	Medkit                         = 2,
	Toolbox                        = 3,
	Win94                          = 4,
	ETslHASInteractionMethod_MAX   = 5
};


// Enum TslGame.EHASEndGamePhase
enum class EHASEndGamePhase : uint8_t
{
	NotStarted                     = 0,
	Lv0                            = 1,
	Lv1                            = 2,
	Lv2                            = 3,
	Lv3                            = 4,
	Lv4                            = 5,
	EHASEndGamePhase_MAX           = 6
};


// Enum TslGame.*4aa81b4d4b
enum class E*4aa81b4d4b : uint8_t
{
	*fd4dc38ae9                    = 0,
	*6e44b87b55                    = 1,
	*335c3f2359                    = 2,
	*5590c186c2                    = 3,
	*4aa81b4d4b_MAX                = 4
};


// Enum TslGame.EHASSeekerWeapon
enum class EHASSeekerWeapon : uint8_t
{
	None                           = 0,
	Win94                          = 1,
	Machete                        = 2,
	StickyBomb                     = 3,
	EHASSeekerWeapon_MAX           = 4
};


// Enum TslGame.EConsoleHitDirections
enum class EConsoleHitDirections : uint8_t
{
	None                           = 0,
	Front_Right                    = 1,
	Front_Left                     = 2,
	Rear                           = 3,
	EConsoleHitDirections_MAX      = 4
};


// Enum TslGame.EPresetNumSlotState
enum class EPresetNumSlotState : uint8_t
{
	Normal                         = 0,
	Focus                          = 1,
	Select                         = 2,
	Lock                           = 3,
	Disable                        = 4,
	FocusConsole                   = 5,
	SelectFocus                    = 6,
	SelectFocusConsole             = 7,
	EPresetNumSlotState_MAX        = 8
};



// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 3,
	EWidgetDesignFlags_MAX         = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	FillScreen                     = 0,
	Custom                         = 1,
	CustomOnScreen                 = 2,
	Desired                        = 3,
	DesiredOnScreen                = 4,
	EDesignPreviewSizeMode_MAX     = 5
};


// Enum UMG.EWidgetForcedLOD
enum class EWidgetForcedLOD : uint8_t
{
	None                           = 0,
	Inactive                       = 1,
	LOD0                           = 2,
	LOD1                           = 3,
	LOD2                           = 4,
	LOD3                           = 5,
	LOD4                           = 6,
	LOD5                           = 7,
	LOD6                           = 8,
	LOD7                           = 9,
	EWidgetForcedLOD_MAX           = 10
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	EWidgetGeometryMode_MAX        = 3
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4
};



// Enum PhysXVehicles.*93e46e39ea
enum class E*93e46e39ea : uint8_t
{
	*4187083271                    = 0,
	*ae5f63eb07                    = 1,
	*697aa27019                    = 2,
	*1c89b03f77                    = 3,
	*7ba985b4dd                    = 4,
	*324753f751                    = 5,
	*ac3d9b2f26                    = 6,
	*93e46e39ea_MAX                = 7
};



// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4,
	EAILockSource_MAX              = 5
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5,
	EAIRequestPriority_MAX         = 6
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5,
	EPawnActionAbortState_MAX      = 6
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3,
	FAIDistanceType_MAX            = 4
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	EAIOptionFlag_MAX              = 4
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3
};


// Enum AIModule.*097f8aa5a8
enum class E*097f8aa5a8 : uint8_t
{
	*694ca67428                    = 0,
	*cfc795be2a                    = 1,
	*0b7db6819f                    = 2,
	*097f8aa5a8_MAX                = 3
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest                         = 0,
	Low                            = 1,
	AutonomousAI                   = 2,
	High                           = 3,
	Ultimate                       = 4,
	EAITaskPriority_MAX            = 5
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2
};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None                           = 0,
	Navigation                     = 1,
	Geometry                       = 2,
	NavigationOverLedges           = 3,
	EEnvQueryTrace_MAX             = 4
};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EAIParamType_MAX               = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4
};


// Enum AIModule.*ba890a47bd
enum class E*ba890a47bd : uint8_t
{
	*e5b539ca98                    = 0,
	*eec3eb3db4                    = 1,
	*43e0f1d6e0                    = 2,
	*8c70cf4b9f                    = 3,
	*ba890a47bd_MAX                = 4
};


// Enum AIModule.*fa8a712b46
enum class E*fa8a712b46 : uint8_t
{
	*ecfaa141cb                    = 0,
	*a497e3355e                    = 1,
	*f5f8319398                    = 2,
	*fa8a712b46_MAX                = 3
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5
};


// Enum AIModule.*7f8621520a
enum class E*7f8621520a : uint8_t
{
	*a16cbdfdb7                    = 0,
	*a72c5544d4                    = 1,
	*c71bebb0ea                    = 2,
	*7f8621520a_MAX                = 3
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2
};


// Enum AIModule.*ec90b792bf
enum class E*ec90b792bf : uint8_t
{
	*e6f5f5420c                    = 0,
	*2be351c079                    = 1,
	*e03eebbc13                    = 2,
	*ec90b792bf_MAX                = 3
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2
};


// Enum AIModule.*8d54f9e880
enum class E*8d54f9e880 : uint8_t
{
	*f16c0e9694                    = 0,
	*ef04929566                    = 1,
	*dc4af27e92                    = 2,
	*8d54f9e880_MAX                = 3
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2
};


// Enum AIModule.*9df48f9096
enum class E*9df48f9096 : uint8_t
{
	*fed710b9d1                    = 0,
	*93e1602664                    = 1,
	*50c24b6ada                    = 2,
	*a4811967ca                    = 3,
	*550856bbb9                    = 4,
	*9df48f9096_MAX                = 5
};


// Enum AIModule.*6cd3b859e0
enum class E*6cd3b859e0 : uint8_t
{
	*ee4bee1ffc                    = 0,
	*52afb4193d                    = 1,
	*d0d9627dd6                    = 2,
	*6cd3b859e0_MAX                = 3
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3
};


// Enum AIModule.*5793f0b2ba
enum class E*5793f0b2ba : uint8_t
{
	*d0a6e9cc4a                    = 0,
	*7127db1882                    = 1,
	*2a879fab5a                    = 2,
	*5793f0b2ba_MAX                = 3
};


// Enum AIModule.*6724b4723d
enum class E*6724b4723d : uint8_t
{
	*45639e4c7c                    = 0,
	*e10caf6adf                    = 1,
	*e787e8aa4f                    = 2,
	*6724b4723d_MAX                = 3
};


// Enum AIModule.*ff81ef027f
enum class E*ff81ef027f : uint8_t
{
	*7741319a7d                    = 0,
	*85ee6adf81                    = 1,
	*0537c15194                    = 2,
	*ff81ef027f_MAX                = 3
};



// Enum GameplayAbilities.*0a29f0b876
enum class E*0a29f0b876 : uint8_t
{
	*43e2b6154a                    = 0,
	*d8718456ac                    = 1,
	*9269f95593                    = 2,
	*0ac060a1ac                    = 3,
	*0a29f0b876_MAX                = 4
};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm                 = 0,
	GenericCancel                  = 1,
	InputPressed                   = 2,
	InputReleased                  = 3,
	GenericSignalFromClient        = 4,
	GenericSignalFromServer        = 5,
	GameCustom1                    = 6,
	GameCustom2                    = 7,
	GameCustom3                    = 8,
	GameCustom4                    = 9,
	GameCustom5                    = 10,
	GameCustom6                    = 11,
	MAX                            = 12,
	EAbilityGenericReplicatedEvent_MAX = 13
};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5
};


// Enum GameplayAbilities.*198bb36469
enum class E*198bb36469 : uint8_t
{
	*2a7e4d37b6                    = 0,
	*7909946217                    = 1,
	*d6cc6e07b0                    = 2,
	*198bb36469_MAX                = 3
};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4
};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3
};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4,
	EGameplayModOp_MAX             = 5
};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Channel4                       = 4,
	Channel5                       = 5,
	Channel6                       = 6,
	Channel7                       = 7,
	Channel8                       = 8,
	Channel9                       = 9,
	Channel_MAX                    = 10,
	EGameplayModEvaluationChannel_MAX = 11
};


// Enum GameplayAbilities.*a58479684c
enum class E*a58479684c : uint8_t
{
	*b3da37a644                    = 0,
	*761a3b6ba1                    = 1,
	*5ec8376fbc                    = 2,
	*9114ac732b                    = 3,
	*a58479684c_MAX                = 4
};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4
};


// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
	Position                       = 0,
	CurrentSectionId               = 1,
	ERepAnimPositionMethod_MAX     = 2
};


// Enum GameplayAbilities.*eb39a48418
enum class E*eb39a48418 : uint8_t
{
	*5192fd3833                    = 0,
	*4effc5ace0                    = 1,
	*13b0255865                    = 2,
	*fa487164f2                    = 3,
	*eb39a48418_MAX                = 4
};


// Enum GameplayAbilities.*ab244db2c7
enum class E*ab244db2c7 : uint8_t
{
	*9352550186                    = 0,
	*c517e19e0c                    = 1,
	*16f1e0efac                    = 2,
	*ab244db2c7_MAX                = 3
};


// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	ClientOrServer                 = 0,
	ServerOnlyExecution            = 1,
	ServerOnlyTermination          = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetSecurityPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};


// Enum GameplayAbilities.*a6692a5b31
enum class E*a6692a5b31 : uint8_t
{
	*039a56b669                    = 0,
	*e17093870c                    = 1,
	*e4d4468288                    = 2,
	*fb02e406cf                    = 3,
	*a6692a5b31_MAX                = 4
};


// Enum GameplayAbilities.*f107706e33
enum class E*f107706e33 : uint8_t
{
	*78afd84844                    = 0,
	*dd22127af7                    = 1,
	*4647a929d8                    = 2,
	*673abd22f6                    = 3,
	*f107706e33_MAX                = 4
};


// Enum GameplayAbilities.*3ddfc5b5ea
enum class E*3ddfc5b5ea : uint8_t
{
	*1e3df05811                    = 0,
	*cd894a799f                    = 1,
	*49151c4347                    = 2,
	*8113e23a1f                    = 3,
	*3ddfc5b5ea_MAX                = 4
};


// Enum GameplayAbilities.*11482146df
enum class E*11482146df : uint8_t
{
	*49523bab84                    = 0,
	*149ec53036                    = 1,
	*160c30efa9                    = 2,
	*be6913884c                    = 3,
	*11482146df_MAX                = 4
};


// Enum GameplayAbilities.*d76b1bfaba
enum class E*d76b1bfaba : uint8_t
{
	*59978e9e86                    = 0,
	*1e3df05811                    = 1,
	*31c036468d                    = 2,
	*d76b1bfaba_MAX                = 3
};


// Enum GameplayAbilities.*135652cbfc
enum class E*135652cbfc : uint8_t
{
	*14e5789e99                    = 0,
	*a2decb0458                    = 1,
	*0a1714c0f3                    = 2,
	*135652cbfc_MAX                = 3
};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	CapturedAttributeBacked        = 0,
	Transient                      = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2
};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EGameplayEffectReplicationMode_MAX = 3
};


// Enum GameplayAbilities.*22de9068e1
enum class E*22de9068e1 : uint8_t
{
	*aa55ca558d                    = 0,
	*736074e0bd                    = 1,
	*1c1c3a58f6                    = 2,
	*8fc13dc245                    = 3,
	*22de9068e1_MAX                = 4
};


// Enum GameplayAbilities.*22e16e460e
enum class E*22e16e460e : uint8_t
{
	*c8f6892fc1                    = 0,
	*d40d0852b4                    = 1,
	*1b4d7c6d5b                    = 2,
	*ab0fb66531                    = 3,
	*22e16e460e_MAX                = 4
};


// Enum GameplayAbilities.*d56126decc
enum class E*d56126decc : uint8_t
{
	*94208abb71                    = 0,
	*09d4cc718d                    = 1,
	*06a3a5cf72                    = 2,
	*89ccd45f28                    = 3,
	*d56126decc_MAX                = 4
};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	None                           = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	GreaterThanOrEqualTo           = 3,
	LessThanOrEqualTo              = 4,
	NotEqualTo                     = 5,
	ExactlyEqualTo                 = 6,
	MAX                            = 7,
	EWaitAttributeChangeComparison_MAX = 8
};


// Enum GameplayAbilities.*7fdd2aa37a
enum class E*7fdd2aa37a : uint8_t
{
	*d30bf91ee4                    = 0,
	*cf3a133b03                    = 1,
	*e90db95e34                    = 2,
	*f2e77db1bb                    = 3,
	*f53ce6a044                    = 4,
	*83e6741009                    = 5,
	*7f113dc3e0                    = 6,
	*b605e5fcba                    = 7,
	*cf74581019                    = 8,
	*9689e97cae                    = 9,
	*7fdd2aa37a_MAX                = 10
};


// Enum GameplayAbilities.*30e0f2109e
enum class E*30e0f2109e : uint8_t
{
	*114a3e8c24                    = 0,
	*f26a40cc12                    = 1,
	*681b794719                    = 2,
	*30e0f2109e_MAX                = 3
};



// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};



// Enum GameplayTasks.*de9abf3cb2
enum class E*de9abf3cb2 : uint8_t
{
	*f37427d48e                    = 0,
	*585f7f2233                    = 1,
	*ba93d0d728                    = 2,
	*de9abf3cb2_MAX                = 3
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5
};



// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	Invalid                        = 5,
	EUINavigationRule_MAX          = 6
};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3
};


// Enum SlateCore.*9684876cf9
enum class E*9684876cf9 : uint8_t
{
	*2741244536                    = 0,
	*2dc393491c                    = 1,
	*dd106488c1                    = 2,
	*686a6677c9                    = 3,
	*9684876cf9_MAX                = 4
};


// Enum SlateCore.*07f5b909cc
enum class E*07f5b909cc : uint8_t
{
	*0df74996a2                    = 0,
	*b11eb9320d                    = 1,
	*2257f763a5                    = 2,
	*07f5b909cc_MAX                = 3
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.*660597fc36
enum class E*660597fc36 : uint8_t
{
	*d7663204f2                    = 0,
	*b191e4bfcd                    = 1,
	*bed77cd0b7                    = 2,
	*db0c05dcd6                    = 3,
	*f4048634a7                    = 4,
	*a428c91cc3                    = 5,
	*634fbcb6ee                    = 6,
	*a2ba4d342f                    = 7,
	*b8de94abf9                    = 8,
	*56f43b8ae2                    = 9,
	*be9230f943                    = 10,
	*fe37ef7eaf                    = 11,
	*5159cb4865                    = 12,
	*660597fc36_MAX                = 13
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3
};


// Enum SlateCore.*d481a3c60d
enum class E*d481a3c60d : uint8_t
{
	*ebc48e99a8                    = 0,
	*ae6f07a750                    = 1,
	*1198b2ef55                    = 2,
	*d481a3c60d_MAX                = 3
};


// Enum SlateCore.*6bf28f7dc0
enum class E*6bf28f7dc0 : uint8_t
{
	*f7029ffd89                    = 0,
	*df643fd33c                    = 1,
	*7c618760dc                    = 2,
	*9631e2c75c                    = 3,
	*6bf28f7dc0_MAX                = 4
};


// Enum SlateCore.*990fff132f
enum class E*990fff132f : uint8_t
{
	*f7029ffd89                    = 0,
	*19c739d668                    = 1,
	*3ec1d2896b                    = 2,
	*990fff132f_MAX                = 3
};


// Enum SlateCore.*18ef1be11e
enum class E*18ef1be11e : uint8_t
{
	*f7029ffd89                    = 0,
	*4d3baabaea                    = 1,
	*3d67f1cfa9                    = 2,
	*e34fc22fca                    = 3,
	*c4a7f546af                    = 4,
	*18ef1be11e_MAX                = 5
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6
};



// Enum ChromaSDKPlugin.EChromaSDKStreamStatusEnum
enum class EChromaSDKStreamStatusEnum : uint8_t
{
	READY                          = 0,
	AUTHORIZING                    = 1,
	BROADCASTING                   = 2,
	WATCHING                       = 3,
	NOT_AUTHORIZED                 = 4,
	BROADCAST_DUPLICATE            = 5,
	SERVICE_OFFLINE                = 6,
	EChromaSDKStreamStatusEnum_MAX = 7
};


// Enum ChromaSDKPlugin.*3e0af8d20a
enum class E*3e0af8d20a : uint8_t
{
	*a12e79bab1                    = 0,
	*01e484857d                    = 1,
	*0745fb56a9                    = 2,
	*d91869767d                    = 3,
	*f3d6117f83                    = 4,
	*b02c4f6c91                    = 5,
	*2f1c56bc51                    = 6,
	*3e0af8d20a_MAX                = 7
};


// Enum ChromaSDKPlugin.*1a251a6ad7
enum class E*1a251a6ad7 : uint8_t
{
	*e91a0ba5b1                    = 0,
	*ece8dfbcbd                    = 1,
	*f2038bfe7d                    = 2,
	*5837729dae                    = 3,
	*7fec42c1d5                    = 4,
	*1a251a6ad7_MAX                = 5
};


// Enum ChromaSDKPlugin.*e0ab161485
enum class E*e0ab161485 : uint8_t
{
	*d7d8e6f0eb                    = 0,
	*8b38f6279e                    = 1,
	*e9af09cc30                    = 2,
	*923c08579a                    = 3,
	*dc4c791a62                    = 4,
	*a6f179329c                    = 5,
	*2178c4a561                    = 6,
	*b704920bf8                    = 7,
	*cfaa5e7a3c                    = 8,
	*0c12bf5764                    = 9,
	*b78f4eae5b                    = 10,
	*7057da3984                    = 11,
	*7d1ed00765                    = 12,
	*59367ba9a3                    = 13,
	*a19bc5373e                    = 14,
	*750ac6b4c6                    = 15,
	*d7ee86fd25                    = 16,
	*2cb3072332                    = 17,
	*54c2887a5a                    = 18,
	*a670b4e49c                    = 19,
	*aa925ddf11                    = 20,
	*bb055668aa                    = 21,
	*4f2f754855                    = 22,
	*e0ab161485_MAX                = 23
};


// Enum ChromaSDKPlugin.*e964b94446
enum class E*e964b94446 : uint8_t
{
	*5d4fc0a7e9                    = 0,
	*c4d404d23c                    = 1,
	*ab2cd9fece                    = 2,
	*0b440d7d2e                    = 3,
	*26ee524350                    = 4,
	*7093aaab8b                    = 5,
	*0eaf9246b6                    = 6,
	*edd3fb1b4c                    = 7,
	*06b1d380ba                    = 8,
	*1883be0b83                    = 9,
	*ad08de2be5                    = 10,
	*0ed928ecb0                    = 11,
	*a507c2e44b                    = 12,
	*92eece04ed                    = 13,
	*de600f8a36                    = 14,
	*cb6e86fdba                    = 15,
	*588753fc51                    = 16,
	*3dfbea9a13                    = 17,
	*5191b4fc85                    = 18,
	*9037328718                    = 19,
	*4950b1f712                    = 20,
	*da7b07c8b6                    = 21,
	*ae39c02bf2                    = 22,
	*33524e51d4                    = 23,
	*bf6a4efb66                    = 24,
	*1a64141c20                    = 25,
	*af0bbc5de0                    = 26,
	*e07e46bc2e                    = 27,
	*2bff5c33e9                    = 28,
	*79bfcb108a                    = 29,
	*c2edb0889f                    = 30,
	*f6d3f6cb2a                    = 31,
	*4c5d1e8c21                    = 32,
	*6f6095c8f1                    = 33,
	*6b4d2554ca                    = 34,
	*0080f8896b                    = 35,
	*5296331839                    = 36,
	*3379e01f24                    = 37,
	*004e059d72                    = 38,
	*27641b123c                    = 39,
	*83bd66df6b                    = 40,
	*7c424fe545                    = 41,
	*a0b2db35c9                    = 42,
	*8968fdcbf3                    = 43,
	*2f1bf16109                    = 44,
	*648a371b2b                    = 45,
	*e73e9df58a                    = 46,
	*1b328377bc                    = 47,
	*879fc3fe5e                    = 48,
	*b2dac26f8d                    = 49,
	*263c0e7d56                    = 50,
	*3c37ec418e                    = 51,
	*fe49786f2d                    = 52,
	*f19340a28d                    = 53,
	*2bde363d19                    = 54,
	*4488d2743b                    = 55,
	*c02c1bd86f                    = 56,
	*dca8b04c01                    = 57,
	*d34763f212                    = 58,
	*050c6d8089                    = 59,
	*312ae3e87e                    = 60,
	*615cfef9a7                    = 61,
	*1a80feb5bd                    = 62,
	*7b2af7b777                    = 63,
	*8514bedd8e                    = 64,
	*938f8948d2                    = 65,
	*38184cddf0                    = 66,
	*c69db559e9                    = 67,
	*ba28ccd051                    = 68,
	*a3f4143b46                    = 69,
	*1926d04dac                    = 70,
	*e06254f610                    = 71,
	*f20864594a                    = 72,
	*f985e2e4ce                    = 73,
	*c190f852f4                    = 74,
	*55558f5d44                    = 75,
	*731324c9cd                    = 76,
	*646189a5f1                    = 77,
	*64dba63b12                    = 78,
	*a07e915a83                    = 79,
	*558f5d5289                    = 80,
	*b7492e0521                    = 81,
	*722eb2a88c                    = 82,
	*f4aa059601                    = 83,
	*0f97d9e515                    = 84,
	*ed65b93e7a                    = 85,
	*c6a1ab0247                    = 86,
	*051aaaab32                    = 87,
	*1cb3c51427                    = 88,
	*76d29dbc82                    = 89,
	*65e9304ec4                    = 90,
	*84c4502461                    = 91,
	*e44d88dd6b                    = 92,
	*4c1061d1a6                    = 93,
	*1b8ca87b0a                    = 94,
	*7f5b02723e                    = 95,
	*1bfd9a41a6                    = 96,
	*c3813666c4                    = 97,
	*c4d81fae8c                    = 98,
	*600e1b7651                    = 99,
	*3775068232                    = 100,
	*12ea2af1de                    = 101,
	*00389aade0                    = 102,
	*7099d66ae0                    = 103,
	*d3805c3c1f                    = 104,
	*607f073aa2                    = 105,
	*a6d3f2cea8                    = 106,
	*e8183d959e                    = 107,
	*9d9b297900                    = 108,
	*211795023a                    = 109,
	*27fad15ff5                    = 110,
	*b6a1e18cfa                    = 111,
	*763c3d46cd                    = 112,
	*fbcf2af12b                    = 113,
	*65694a3318                    = 114,
	*e0d8026daf                    = 115,
	*891276ab1a                    = 116,
	*205e2ffbf1                    = 117,
	*cf6a3438fd                    = 118,
	*257ee27394                    = 119,
	*2e486b538d                    = 120,
	*b1795d471a                    = 121,
	*717b674316                    = 122,
	*e3c6f165f2                    = 123,
	*969ba65fe0                    = 124,
	*5c53fcb5bb                    = 125,
	*e964b94446_MAX                = 126
};


// Enum ChromaSDKPlugin.*f54b433fba
enum class E*f54b433fba : uint8_t
{
	*f5ae9aef3b                    = 0,
	*293d501c94                    = 1,
	*1c4c481223                    = 2,
	*0fef1ba40b                    = 3,
	*b15ccfee90                    = 4,
	*b884280280                    = 5,
	*74426fb1df                    = 6,
	*f54b433fba_MAX                = 7
};


// Enum ChromaSDKPlugin.*572a540470
enum class E*572a540470 : uint8_t
{
	*1c4c481223                    = 0,
	*0fef1ba40b                    = 1,
	*b15ccfee90                    = 2,
	*74426fb1df                    = 3,
	*572a540470_MAX                = 4
};


// Enum ChromaSDKPlugin.*78772098a9
enum class E*78772098a9 : uint8_t
{
	*f5ae9aef3b                    = 0,
	*293d501c94                    = 1,
	*b884280280                    = 2,
	*74426fb1df                    = 3,
	*78772098a9_MAX                = 4
};


// Enum ChromaSDKPlugin.*9a10a3b0fc
enum class E*9a10a3b0fc : uint8_t
{
	*1f40c8ca71                    = 0,
	*c0da7463b5                    = 1,
	*74426fb1df                    = 2,
	*9a10a3b0fc_MAX                = 3
};



// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t
{
	LeftMouseButton                = 0,
	RightMouseButton               = 1,
	MiddleMouseButton              = 2,
	ThumbMouseButton               = 3,
	ThumbMouseButton2              = 4,
	BackSpace                      = 5,
	Tab                            = 6,
	Enter                          = 7,
	Pause                          = 8,
	CapsLock                       = 9,
	Escape                         = 10,
	SpaceBar                       = 11,
	PageUp                         = 12,
	PageDown                       = 13,
	End                            = 14,
	Home                           = 15,
	Left                           = 16,
	Up                             = 17,
	Right                          = 18,
	Down                           = 19,
	Insert                         = 20,
	Delete                         = 21,
	Zero                           = 22,
	One                            = 23,
	Two                            = 24,
	Three                          = 25,
	Four                           = 26,
	Five                           = 27,
	Six                            = 28,
	Seven                          = 29,
	Eight                          = 30,
	Nine                           = 31,
	A                              = 32,
	B                              = 33,
	C                              = 34,
	D                              = 35,
	E                              = 36,
	F                              = 37,
	G                              = 38,
	H                              = 39,
	I                              = 40,
	J                              = 41,
	K                              = 42,
	L                              = 43,
	M                              = 44,
	N                              = 45,
	O                              = 46,
	P                              = 47,
	Q                              = 48,
	R                              = 49,
	S                              = 50,
	T                              = 51,
	U                              = 52,
	V                              = 53,
	W                              = 54,
	X                              = 55,
	Y                              = 56,
	Z                              = 57,
	NumPadZero                     = 58,
	NumPadOne                      = 59,
	NumPadTwo                      = 60,
	NumPadThree                    = 61,
	NumPadFour                     = 62,
	NumPadFive                     = 63,
	NumPadSix                      = 64,
	NumPadSeven                    = 65,
	NumPadEight                    = 66,
	NumPadNine                     = 67,
	Multiply                       = 68,
	Add                            = 69,
	Subtract                       = 70,
	Decimal                        = 71,
	Divide                         = 72,
	F1                             = 73,
	F2                             = 74,
	F3                             = 75,
	F4                             = 76,
	F5                             = 77,
	F6                             = 78,
	F7                             = 79,
	F8                             = 80,
	F9                             = 81,
	F10                            = 82,
	F11                            = 83,
	F12                            = 84,
	NumLock                        = 85,
	ScrollLock                     = 86,
	LeftShift                      = 87,
	RightShift                     = 88,
	LeftControl                    = 89,
	RightControl                   = 90,
	LeftAlt                        = 91,
	RightAlt                       = 92,
	LeftCommand                    = 93,
	RightCommand                   = 94,
	Semicolon                      = 95,
	Equals                         = 96,
	Comma                          = 97,
	Underscore                     = 98,
	Period                         = 99,
	Slash                          = 100,
	Tilde                          = 101,
	LeftBracket                    = 102,
	Backslash                      = 103,
	RightBracket                   = 104,
	Quote                          = 105,
	Unknown                        = 106,
	ECoherentUIGTKeys_MAX          = 107
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Joystick                       = 2,
	KeyboardAndJoystick            = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.*b66e64dfe4
enum class E*b66e64dfe4 : uint8_t
{
	*17b1d024f8                    = 0,
	*ac5b0d49fc                    = 1,
	*4ecae8ae1e                    = 2,
	*5d85e690e3                    = 3,
	*b66e64dfe4_MAX                = 4
};


// Enum CoherentUIGTPlugin.*fb7cce23a3
enum class E*fb7cce23a3 : uint8_t
{
	*786bfacd23                    = 0,
	*6f658925d9                    = 1,
	*4d76062ace                    = 2,
	*fb7cce23a3_MAX                = 3
};


// Enum CoherentUIGTPlugin.*59f3385f2b
enum class E*59f3385f2b : uint8_t
{
	*12c0b5c562                    = 0,
	*1ba2a3b52b                    = 1,
	*8d37e87f01                    = 2,
	*b718592ae3                    = 3,
	*59f3385f2b_MAX                = 4
};


// Enum CoherentUIGTPlugin.*c62ba4fa5c
enum class E*c62ba4fa5c : uint8_t
{
	*694ba42093                    = 0,
	*7a44c0ba7c                    = 1,
	*419d64ff98                    = 2,
	*0aa403f10e                    = 3,
	*c62ba4fa5c_MAX                = 4
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6
};



// Enum EngineSettings.*09c3d7cebd
enum class E*09c3d7cebd : uint8_t
{
	*f867ec10c7                    = 0,
	*69e5d0d93d                    = 1,
	*b300a1b290                    = 2,
	*09c3d7cebd_MAX                = 3
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2
};



// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	Planar                         = 0,
	Cylindrical                    = 1,
	Wrapping                       = 2,
	ECustomizableObjectProjectorType_MAX = 3
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2
};



// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_Banned       = 10,
	ReservationRequestCanceled     = 11,
	ReservationInvalid             = 12,
	BadSessionId                   = 13,
	EPartyReservationResult_MAX    = 14
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	EClientRequestType_MAX         = 6
};



// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	ETouchIndex_MAX                = 10
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	Ended                          = 3,
	NumTypes                       = 4,
	ETouchType_MAX                 = 5
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Pad                            = 2,
	ExternalCamera                 = 3,
	Gun                            = 4,
	Special                        = 5,
	Special01                      = 6,
	Special02                      = 7,
	Special03                      = 8,
	Special04                      = 9,
	Special05                      = 10,
	Special06                      = 11,
	Special07                      = 12,
	Special08                      = 13,
	EControllerHand_MAX            = 14
};



// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3
};


// Enum Slate.*101008fdc5
enum class E*101008fdc5 : uint8_t
{
	*0667fa8a3e                    = 0,
	*07258a411a                    = 1,
	*7ee31e753c                    = 2,
	*101008fdc5_MAX                = 3
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	EStretch_MAX                   = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	EProgressBarFillType_MAX       = 5
};



// Enum MaterialShaderQualitySettings.*044e966ebc
enum class E*044e966ebc : uint8_t
{
	*7cd693e112                    = 0,
	*4e61604509                    = 1,
	*2b4d0c3347                    = 2,
	*9b2003ab5f                    = 3,
	*044e966ebc_MAX                = 4
};



// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3
};



// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5
};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};


// Enum Foliage.*7f05801c53
enum class E*7f05801c53 : uint8_t
{
	*97c8f20312                    = 0,
	*31ea265e0c                    = 1,
	*cf96c38482                    = 2,
	*744380a477                    = 3,
	*7f05801c53_MAX                = 4
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3
};



// Enum Landscape.*859ade60d6
enum class E*859ade60d6 : uint8_t
{
	*a697138a3f                    = 0,
	*20fe875419                    = 1,
	*6c4e4784fd                    = 2,
	*2b5c21df72                    = 3,
	*859ade60d6_MAX                = 4
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentWhitelist          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.*6c693b7168
enum class E*6c693b7168 : uint8_t
{
	*4fe7bb2970                    = 0,
	*9725f18f0b                    = 1,
	*8ed09ee459                    = 2,
	*f1a0746648                    = 3,
	*d56c18314c                    = 4,
	*6c693b7168_MAX                = 5
};


// Enum Landscape.*e5afab2c37
enum class E*e5afab2c37 : uint8_t
{
	*13ec450a0d                    = 0,
	*f40bea897a                    = 1,
	*20c843222a                    = 2,
	*e5afab2c37_MAX                = 3
};


// Enum Landscape.*4b8d0738cf
enum class E*4b8d0738cf : uint8_t
{
	*9e1739448a                    = 0,
	*0a66107dbd                    = 1,
	*cd51667a0a                    = 2,
	*41dbfc1dc2                    = 3,
	*4b8d0738cf_MAX                = 4
};


// Enum Landscape.*2a642595fb
enum class E*2a642595fb : uint8_t
{
	*4435a6b249                    = 0,
	*b5748ad3b0                    = 1,
	*25baac3063                    = 2,
	*e63e4311d3                    = 3,
	*9cf9b3ed89                    = 4,
	*b14b2377b1                    = 5,
	*2a642595fb_MAX                = 6
};


// Enum Landscape.*949809424e
enum class E*949809424e : uint8_t
{
	*ae6368ef09                    = 0,
	*133a91012e                    = 1,
	*c4a9fe93db                    = 2,
	*da4173d1c5                    = 3,
	*2c2223a631                    = 4,
	*949809424e_MAX                = 5
};



// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.*686a0c3e66
enum class E*686a0c3e66 : uint8_t
{
	*9dc062c34b                    = 0,
	*7dc9376d19                    = 1,
	*6020d27a25                    = 2,
	*686a0c3e66_MAX                = 3
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2
};



// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	EModifyCurveApplyMode_MAX      = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	ERBFDistanceMethod_MAX         = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFFunctionType_MAX           = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.*a82cb8bd86
enum class E*a82cb8bd86 : uint8_t
{
	*1ae7520bb7                    = 0,
	*484ecbac92                    = 1,
	*32959442db                    = 2,
	*a82cb8bd86_MAX                = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
	EInterpolationBlend_MAX        = 8
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineBoneAxis_MAX            = 3
};



// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6
};


// Enum MovieSceneTracks.*6efc4ebacb
enum class E*6efc4ebacb : uint8_t
{
	*0372751575                    = 0,
	*979eaa70c3                    = 1,
	*c48c664754                    = 2,
	*b527cc3d30                    = 3,
	*6efc4ebacb_MAX                = 4
};


// Enum MovieSceneTracks.*484b990da3
enum class E*484b990da3 : uint8_t
{
	*de4e8505ea                    = 0,
	*8e9004e13e                    = 1,
	*2bc4aea5a8                    = 2,
	*19f03e312c                    = 3,
	*484b990da3_MAX                = 4
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3
};



// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Tracking                       = 2,
	ECameraFocusMethod_MAX         = 3
};



// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit                       = 0,
	IncludeParentTags              = 1,
	EGameplayTagMatchType_MAX      = 2
};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	DataTable                      = 3,
	Invalid                        = 4,
	EGameplayTagSourceType_MAX     = 5
};



// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};



// Enum MovieSceneCapture.*f2dcefe556
enum class E*f2dcefe556 : uint8_t
{
	*5ef7965078                    = 0,
	*93c8ee63fc                    = 1,
	*d7c11f2c0d                    = 2,
	*c2ab74095f                    = 3,
	*7a8d25f3db                    = 4,
	*2ade64e950                    = 5,
	*f2dcefe556_MAX                = 6
};



// Enum MoviePlayer.*57b10c479f
enum class E*57b10c479f : uint8_t
{
	*3b523bd0ff                    = 0,
	*023940d737                    = 1,
	*95b97fab30                    = 2,
	*f306d4a365                    = 3,
	*57b10c479f_MAX                = 4
};



// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.*61c0b76a72
enum class E*61c0b76a72 : uint8_t
{
	*fae283a706                    = 0,
	*34ac93a7b3                    = 1,
	*04c7f61241                    = 2,
	*613f7a21e8                    = 3,
	*0de5fa3097                    = 4,
	*0f8a6b11d0                    = 5,
	*6b1d993894                    = 6,
	*61c0b76a72_MAX                = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	ENiagaraInputNodeUsage_MAX     = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.*4fbd1955de
enum class E*4fbd1955de : uint8_t
{
	*bcc9edde11                    = 0,
	*6d390ed187                    = 1,
	*a8e2c6e1b7                    = 2,
	*4ea7fc8e4e                    = 3,
	*4fbd1955de_MAX                = 4
};


// Enum Niagara.*851f757715
enum class E*851f757715 : uint8_t
{
	*ba26379b4f                    = 0,
	*c0193f2aba                    = 1,
	*92147e7310                    = 2,
	*e9e6312e28                    = 3,
	*851f757715_MAX                = 4
};


// Enum Niagara.*51b7679c5d
enum class E*51b7679c5d : uint8_t
{
	*53e05d8e96                    = 0,
	*5b97872098                    = 1,
	*8882f8e9d0                    = 2,
	*53f49dd420                    = 3,
	*51b7679c5d_MAX                = 4
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	SpawnScript                    = 2,
	SpawnScriptInterpolated        = 3,
	UpdateScript                   = 4,
	EffectScript                   = 5,
	ENiagaraScriptUsage_MAX        = 6
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8_t
{
	SpawnScript                    = 0,
	UpdateScript                   = 1,
	EventScript                    = 2,
	EScriptCompileIndices_MAX      = 3
};


// Enum Niagara.*17bc92a7e4
enum class E*17bc92a7e4 : uint8_t
{
	*db5c9707af                    = 0,
	*c713c27a83                    = 1,
	*2b326e1019                    = 2,
	*cef5d68662                    = 3,
	*17bc92a7e4_MAX                = 4
};



// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Binary                         = 1,
	Caption                        = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};



// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2
};


// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class EMaskTarget_PhysMesh : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	MaskTarget_MAX                 = 4
};



// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};



// Enum BuildPatchServices.*5994635b90
enum class E*5994635b90 : uint8_t
{
	*1e211c98cd                    = 0,
	*a7bfa1a7b2                    = 1,
	*9b24335c84                    = 2,
	*5994635b90_MAX                = 3
};



// Enum WebResource.EWRALOutput
enum class EWRALOutput : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	EWRALOutput_MAX                = 2
};



// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};


// Enum ZipUtility.*f8c354affc
enum class E*f8c354affc : uint8_t
{
	*3b92f665a7                    = 0,
	*d9411826cb                    = 1,
	*fcf743f0ce                    = 2,
	*ed9e82fa0f                    = 3,
	*f8c354affc_MAX                = 4
};


// Enum ZipUtility.*49fb4910f0
enum class E*49fb4910f0 : uint8_t
{
	*586e62a5ae                    = 0,
	*7b337dba65                    = 1,
	*ac2e5aacd6                    = 2,
	*316a0f15c7                    = 3,
	*49db6c9135                    = 4,
	*d65f0cdd7f                    = 5,
	*85383a41bf                    = 6,
	*cd9f6d569a                    = 7,
	*6b93a99191                    = 8,
	*6afc476d4f                    = 9,
	*30ce69cdfc                    = 10,
	*083d17213b                    = 11,
	*49fb4910f0_MAX                = 12
};



// Enum PrefabAsset.*b6f7c16f1b
enum class E*b6f7c16f1b : uint8_t
{
	*625250d629                    = 0,
	*43043dae5f                    = 1,
	*1ee65087c9                    = 2,
	*b6f7c16f1b_MAX                = 3
};



// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision                    = 0,
	FirstFrameCollision            = 1,
	EachFrameCollision             = 2,
	EFlipbookCollisionMode_MAX     = 3
};


// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	Top_Left                       = 0,
	Top_Center                     = 1,
	Top_Right                      = 2,
	Center_Left                    = 3,
	Center_Center                  = 4,
	Center_Right                   = 5,
	Bottom_Left                    = 6,
	Bottom_Center                  = 7,
	Bottom_Right                   = 8,
	Custom                         = 9,
	ESpritePivotMode_MAX           = 10
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox              = 0,
	TightBoundingBox               = 1,
	ShrinkWrapped                  = 2,
	FullyCustom                    = 3,
	Diced                          = 4,
	ESpritePolygonMode_MAX         = 5
};


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box                            = 0,
	Circle                         = 1,
	Polygon                        = 2,
	ESpriteShapeType_MAX           = 3
};


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None                           = 0,
	Use2DPhysics                   = 1,
	Use3DPhysics                   = 2,
	ESpriteCollisionMode_MAX       = 3
};


// Enum Paper2D.*6d16d8d06c
enum class E*6d16d8d06c : uint8_t
{
	*9f80f8bb59                    = 0,
	*a1e9c150f6                    = 1,
	*ab3f6e960b                    = 2,
	*6d16d8d06c_MAX                = 3
};


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4
};



// Enum ACLPlugin.*1bef708c98
enum class E*1bef708c98 : uint8_t
{
	*42e4560b02                    = 0,
	*6f435eff0f                    = 1,
	*3bf8fa3cb9                    = 2,
	*e656df3580                    = 3,
	*89495a9bf0                    = 4,
	*a93adc1d02                    = 5,
	*1bef708c98_MAX                = 6
};


// Enum ACLPlugin.*7c7a086108
enum class E*7c7a086108 : uint8_t
{
	*73e2f2acc9                    = 0,
	*ff0360a274                    = 1,
	*9f3a19d838                    = 2,
	*7c7a086108_MAX                = 3
};


// Enum ACLPlugin.*ded2f0e7ed
enum class E*ded2f0e7ed : uint8_t
{
	*869936cd6a                    = 0,
	*b9a4149158                    = 1,
	*83cd09fc34                    = 2,
	*daa123e544                    = 3,
	*ded2f0e7ed_MAX                = 4
};



// Enum SubstanceCore.*b513187d60
enum class E*b513187d60 : uint8_t
{
	*058052221e                    = 0,
	*ee4cc1f164                    = 1,
	*f92f8300eb                    = 2,
	*86a1775ae9                    = 3,
	*5f2bbd693d                    = 4,
	*fc56ea2120                    = 5,
	*e744c63830                    = 6,
	*173f7ade4b                    = 7,
	*b6218a270b                    = 8,
	*782e994582                    = 9,
	*883fe91bdd                    = 10,
	*764247b68d                    = 11,
	*b513187d60_MAX                = 12
};


// Enum SubstanceCore.*77956c70aa
enum class E*77956c70aa : uint8_t
{
	*a08aa00203                    = 0,
	*cd36759b04                    = 1,
	*d2a815d908                    = 2,
	*c5d9040407                    = 3,
	*86e624afb3                    = 4,
	*e85b338b62                    = 5,
	*2014a59301                    = 6,
	*77956c70aa_MAX                = 7
};


// Enum SubstanceCore.*ccdbeba65d
enum class E*ccdbeba65d : uint8_t
{
	*d48d747ae7                    = 0,
	*dca8bb97e7                    = 1,
	*2704420fa3                    = 2,
	*ccdbeba65d_MAX                = 3
};


// Enum SubstanceCore.ESubChannelType
enum class ESubChannelType : uint8_t
{
	Diffuse                        = 0,
	Ambient                        = 1,
	BaseColor                      = 2,
	Metallic                       = 3,
	Roughness                      = 4,
	Emissive                       = 5,
	Normal                         = 6,
	Mask                           = 7,
	Opacity                        = 8,
	Refraction                     = 9,
	AmbientOcclusion               = 10,
	Glossiness                     = 11,
	Height                         = 12,
	Displacement                   = 13,
	Reflection                     = 14,
	Invalid                        = 15,
	ESubChannelType_MAX            = 16
};


// Enum SubstanceCore.*1e01d70c39
enum class E*1e01d70c39 : uint8_t
{
	*d1882dfa42                    = 0,
	*8ed41f546a                    = 1,
	*5cbfe90e9e                    = 2,
	*5b7bc22013                    = 3,
	*20a17ec4bc                    = 4,
	*98a4aa38a7                    = 5,
	*6b3fd1eb8a                    = 6,
	*92535821b4                    = 7,
	*e9f6d58766                    = 8,
	*4e02a64c8f                    = 9,
	*1e01d70c39_MAX                = 10
};



// Enum MK3DPublisher.*f720f820e3
enum class E*f720f820e3 : uint8_t
{
	*2fec50343b                    = 0,
	*a1b67996c7                    = 1,
	*f9e7731477                    = 2,
	*e8b76dd23e                    = 3,
	*f720f820e3_MAX                = 4
};



// Enum AkAudio.*b28b131e75
enum class E*b28b131e75 : uint8_t
{
	*b68760f0e0                    = 0,
	*35d4dc66ce                    = 1,
	*65e6701e9a                    = 2,
	*b28b131e75_MAX                = 3
};


// Enum AkAudio.*3a1f12a3a5
enum class E*3a1f12a3a5 : uint8_t
{
	*c367c314fc                    = 0,
	*a1b426aa5f                    = 1,
	*fd49e2302c                    = 2,
	*5dd5c12f7e                    = 3,
	*759958d383                    = 4,
	*3a1f12a3a5_MAX                = 5
};


// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	ESoundVolumeShape_MAX          = 3
};


// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Front                          = 3,
	Back                           = 4,
	LeftAndRight                   = 5,
	LeftAndFront                   = 6,
	LeftAndBack                    = 7,
	RightAndFront                  = 8,
	RightAndBack                   = 9,
	BackAndFront                   = 10,
	EAkIgnoreRolloffDirection_MAX  = 11
};



// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	Failed                         = 2,
	Cancelled                      = 3,
	Invalid                        = 4,
	NotAllowed                     = 5,
	Restored                       = 6,
	AlreadyOwned                   = 7,
	EInAppPurchaseState_MAX        = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None                           = 0,
	Quit                           = 1,
	Won                            = 2,
	Lost                           = 3,
	Tied                           = 4,
	TimeExpired                    = 5,
	First                          = 6,
	Second                         = 7,
	Third                          = 8,
	Fourth                         = 9,
	EMPMatchOutcome_MAX            = 10
};



// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentRenderingSettingsSeverity_MAX = 6
};



// Enum HoudiniEngineRuntime.*47108f3962
enum class E*47108f3962 : uint8_t
{
	*71aff6a70c                    = 0,
	*04ee9e9755                    = 1,
	*4104b662bd                    = 2,
	*f3a1a27c63                    = 3,
	*47108f3962_MAX                = 4
};


// Enum HoudiniEngineRuntime.*4fbc7d43ad
enum class E*4fbc7d43ad : uint8_t
{
	*db2ca78506                    = 0,
	*674e2a1557                    = 1,
	*ca3d5c7b70                    = 2,
	*74fedb6ddb                    = 3,
	*f52e6b8f50                    = 4,
	*4fbc7d43ad_MAX                = 5
};


// Enum HoudiniEngineRuntime.*0959eb858d
enum class E*0959eb858d : uint8_t
{
	*d892f15b92                    = 0,
	*7dbc07a51a                    = 1,
	*22158dcb15                    = 2,
	*0959eb858d_MAX                = 3
};


// Enum HoudiniEngineRuntime.*c4f148ca40
enum class E*c4f148ca40 : uint8_t
{
	*c4cbd10031                    = 0,
	*77af81520e                    = 1,
	*b8602be72d                    = 2,
	*18ec741efe                    = 3,
	*c4f148ca40_MAX                = 4
};


// Enum HoudiniEngineRuntime.*abd08131ab
enum class E*abd08131ab : uint8_t
{
	*4bbde80a79                    = 0,
	*5fa2e9a53f                    = 1,
	*3454b610e6                    = 2,
	*9fcf36d904                    = 3,
	*abd08131ab_MAX                = 4
};


// Enum HoudiniEngineRuntime.*14043b9da0
enum class E*14043b9da0 : uint8_t
{
	*ddef2a8f2f                    = 0,
	*65ff3771fa                    = 1,
	*c7adbbeb9b                    = 2,
	*e3ec7553bc                    = 3,
	*14043b9da0_MAX                = 4
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3
};



// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
	done                           = 0,
	add                            = 1,
	sub                            = 2,
	mul                            = 3,
	div                            = 4,
	mad                            = 5,
	lerp                           = 6,
	rcp                            = 7,
	rsq                            = 8,
	sqrt                           = 9,
	neg                            = 10,
	abs                            = 11,
	exp                            = 12,
	exp2                           = 13,
	log                            = 14,
	log2                           = 15,
	sin                            = 16,
	cos                            = 17,
	tan                            = 18,
	asin                           = 19,
	acos                           = 20,
	atan                           = 21,
	atan2                          = 22,
	ceil                           = 23,
	floor                          = 24,
	fmod                           = 25,
	frac                           = 26,
	trunc                          = 27,
	clamp                          = 28,
	min                            = 29,
	max                            = 30,
	pow                            = 31,
	sign                           = 32,
	step                           = 33,
	random                         = 34,
	noise                          = 35,
	output                         = 36,
	cmplt                          = 37,
	cmple                          = 38,
	cmpgt                          = 39,
	cmpge                          = 40,
	cmpeq                          = 41,
	cmpneq                         = 42,
	select                         = 43,
	addi                           = 44,
	subi                           = 45,
	muli                           = 46,
	clampi                         = 47,
	mini                           = 48,
	maxi                           = 49,
	absi                           = 50,
	negi                           = 51,
	signi                          = 52,
	cmplti                         = 53,
	cmplei                         = 54,
	cmpgti                         = 55,
	cmpgei                         = 56,
	cmpeqi                         = 57,
	cmpneqi                        = 58,
	bit_and                        = 59,
	bit_or                         = 60,
	bit_xor                        = 61,
	bit_not                        = 62,
	logic_and                      = 63,
	logic_or                       = 64,
	logic_xor                      = 65,
	logic_not                      = 66,
	f2i                            = 67,
	i2f                            = 68,
	f2b                            = 69,
	b2f                            = 70,
	i2b                            = 71,
	b2i                            = 72,
	inputdata_32bit                = 73,
	inputdata_noadvance_32bit      = 74,
	outputdata_32bit               = 75,
	acquireindex                   = 76,
	external_func_call             = 77,
	exec_index                     = 78,
	noise2D                        = 79,
	noise3D                        = 80,
	enter_stat_scope               = 81,
	exit_stat_scope                = 82,
	round                          = 83,
	NumOpcodes                     = 84,
	EVectorVMOp_MAX                = 85
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3
};


// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4
};



// Enum PowerIKRuntime.*894714599e
enum class E*894714599e : uint8_t
{
	*3beadc994e                    = 0,
	*829556b452                    = 1,
	*d46738dd97                    = 2,
	*b911501615                    = 3,
	*894714599e_MAX                = 4
};


// Enum PowerIKRuntime.*940beffd2b
enum class E*940beffd2b : uint8_t
{
	*db49fe14fc                    = 0,
	*805967e3fd                    = 1,
	*34e40e56da                    = 2,
	*35ead3bace                    = 3,
	*bb4f8a8d05                    = 4,
	*940beffd2b_MAX                = 5
};



// UserDefinedEnum Enum_MagazineReloadAnimStateActionType.Enum_MagazineReloadAnimStateActionType
enum class Enum_MagazineReloadAnimStateActionType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	Enum_MAX                       = 6
};



