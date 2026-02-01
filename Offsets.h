// PUBG Mobile Offsets
// Updated offsets for latest game version
// This file contains both 32-bit and 64-bit offsets

#ifndef OFFSETS_H
#define OFFSETS_H

// Determine architecture
#if defined(__LP64__) || defined(_WIN64)
    #define IS_64BIT 1
#else
    #define IS_64BIT 0
#endif

// 64-bit offsets
#if IS_64BIT

const unsigned long CurrentWeapon = 0x2A54;
const unsigned long STExtraBaseCharacter = 0x28E0;
const unsigned long GameState = 0x428;
const unsigned long bNoAliveHumanPlayer = 0xB1C;
const unsigned long AlivePlayerNum = 0xB8C;
const unsigned long ElapsedTime = 0x500;
const unsigned long NoneAIGameTime = 0xB94;
const unsigned long PlayerNum = 0x800;
const unsigned long RealPlayerNum = 0x800;
const unsigned long AliveTeamNum = 0xB90;
const unsigned long PlayerNumPerTeam = 0xF64;
const unsigned long GameModeID = 0x10D0;
const unsigned long CurCircleWave = 0xB18;
const unsigned long GameReplayType = 0xA1C;
const unsigned long PersistentLevel = 0x30;
const unsigned long NetDriver = 0x38;
const unsigned long ServerConnection = 0x78;
const unsigned long PlayerController = 0x30;
const unsigned long AcknowledgedPawn = 0x528;
const unsigned long RootComponent = 0x208;
const unsigned long CurrentStates = 0x1018;
const unsigned long LastUpdateVelocity = 0x330;
const unsigned long TeamId = 0x998;
const unsigned long IsBot = 0xA49;
const unsigned long Name = 0x960;
const unsigned long Nation = 0x970;
const unsigned long IsDead = 0xE44;
const unsigned long PlayerUID = 0x988;
const unsigned long Health = 0xE28;
const unsigned long HealthMax = 0xE2C;
const unsigned long NearDeathBreath = 0x1B60;
const unsigned long NearDeatchComponent = 0x1B48;
const unsigned long BreathMax = 0x1CC;
const unsigned long ControlRotation = 0x4E0;
const unsigned long ComponentVelocity = 0x2C0;
const unsigned long CurrentVehicle = 0xE70;
const unsigned long ReplicatedMovement = 0x110;
const unsigned long RelativeLocation = 0x1E4;
const unsigned long RelativeRotation = 0x1F0;
const unsigned long Mesh = 0x510;
const unsigned long BodyAddv = 0x198;
const unsigned long MinLOD = 0x984;
const unsigned long CurrentWeaponReplicated = 0x5C8;
const unsigned long WeaponManagerComponent = 0x2588;
const unsigned long BulletTrackDistance = 0x930;
const unsigned long CurrentReloadWeapon = 0x3128;
const unsigned long ShootWeaponComponent = 0xF30;
const unsigned long ShootMode = 0x1089;
const unsigned long OwnerShootWeapon = 0x2D0;
const unsigned long CurBulletNumInClip = 0x0;
const unsigned long CurMaxBulletNumInOneClip = 0xFD0;
const unsigned long ShootWeaponEntity = 0x12C0;
const unsigned long ShootWeaponEffectComp = 0x12C8;
const unsigned long CameraShakeInnerRadius = 0x2E8;
const unsigned long CameraShakeOuterRadius = 0x234;
const unsigned long CameraShakFalloff = 0x2F0;
const unsigned long CharacterOverrideAttrs = 0x1568;
const unsigned long BulletFireSpeed = 0x560;
const unsigned long BulletMomentum = 0x6D4;
const unsigned long BulletRange = 0x6E4;
const unsigned long BaseImpactDamage = 0x6C4;
const unsigned long VehicleDamageScale = 0x6D0;
const unsigned long LaunchGravityScale = 0x5D8;
const unsigned long ShootInterval = 0x5A0;
const unsigned long bHasSingleFireMode = 0x600;
const unsigned long bHasAutoFireMode = 0x601;
const unsigned long bHasBurstFireMode = 0x602;
const unsigned long BurstShootInterval = 0x640;
const unsigned long ReloadRate = 0x978;
const unsigned long AccessoriesVRecoilFactor = 0xBC8;
const unsigned long AccessoriesHRecoilFactor = 0xBD0;
const unsigned long AccessoriesRecoveryFactor = 0xBCC;
const unsigned long ShotGunCenterPerc = 0xC34;
const unsigned long ShotGunVerticalSpread = 0xC38;
const unsigned long ShotGunHorizontalSpread = 0xC3C;
const unsigned long GameDeviationFactor = 0xC2C;
const unsigned long GameDeviationAccuracy = 0xC30;
const unsigned long AccessoriesDeviationFactor = 0xBF0;
const unsigned long VehicleWeaponDeviationAngle = 0xC4C;
const unsigned long RecoilKickADS = 0xCF0;
const unsigned long HP = 0x344;
const unsigned long HPMax = 0x340;
const unsigned long Fuel = 0x424;
const unsigned long FuelMax = 0x420;
const unsigned long VehicleMovement = 0x1D50;
const unsigned long VehicleCommon = 0xBF0;
const unsigned long lastForwardSpeed = 0xCA8;
const unsigned long PickUpDataList = 0x940;
const unsigned long STPlayerController = 0x49E8;
const unsigned long PlayerCameraManager = 0x548;
const unsigned long CameraCache = 0x520;
const unsigned long ScopeFov = 0x1C54;
const unsigned long ScopeCameraComp = 0x1CD0;
const unsigned long IsFPPGameMode = 0xA10;
const unsigned long SwitchWeaponSpeedScale = 0x2BB4;
const unsigned long CharacterParachuteComponent = 0x1770;
const unsigned long CurrentFallSpeed = 0x230;
const unsigned long PoseState = 0x1798;
const unsigned long Position = 0x230;
const unsigned long CharacterMovement = 0x518;
const unsigned long SpringArmComp = 0x1CA0;
const unsigned long MeshContainer = 0x1AD8;
const unsigned long STPlayerController1 = 0x49E8;
const unsigned long HitPerform = 0x618;
const unsigned long bIsEngineStarted = 0xBB8;
const unsigned long ExtraBoostFactor = 0x1F5C;
const unsigned long Status = 0x4D0;
const unsigned long RelativeScale3D = 0x1FC;
const unsigned long ShootWeaponEntityComp = 0x12C0;
const unsigned long STCharacterMovement = 0x1DE0;
const unsigned long bIsFPPOnVehicle = 0x16F8;
const unsigned long IsNetFPP = 0x2030;
const unsigned long IsGameModeFpp = 0x9F8;
const unsigned long GameModeState = 0xB30;
const unsigned long IsCanSwitchFPP = 0xA11;
const unsigned long bIsGunADS = 0x10E1;
const unsigned long Kills = 0x720;
const unsigned long bIsWeaponFiring = 0x1788;
const unsigned long AvatarComponent2 = 0x2E08;
const unsigned long SynData = 0x7A0;
const unsigned long NetAvatarData = 0x3E8;
const unsigned long ServerZoneId = 0x96C;

// 32-bit offsets
#else

const unsigned long CurrentWeapon = 0x209C;
const unsigned long STExtraBaseCharacter = 0x1F78;
const unsigned long GameState = 0x2F8;
const unsigned long bNoAliveHumanPlayer = 0x8A4;
const unsigned long AlivePlayerNum = 0x914;
const unsigned long ElapsedTime = 0x3F0;
const unsigned long NoneAIGameTime = 0x91C;
const unsigned long PlayerNum = 0x640;
const unsigned long RealPlayerNum = 0x640;
const unsigned long AliveTeamNum = 0x918;
const unsigned long PlayerNumPerTeam = 0xC0C;
const unsigned long GameModeID = 0xD18;
const unsigned long CurCircleWave = 0x8A0;
const unsigned long GameReplayType = 0x7D8;
const unsigned long PersistentLevel = 0x20;
const unsigned long NetDriver = 0x24;
const unsigned long ServerConnection = 0x64;
const unsigned long PlayerController = 0x20;
const unsigned long AcknowledgedPawn = 0x400;
const unsigned long RootComponent = 0x1B0;
const unsigned long CurrentStates = 0xC20;
const unsigned long LastUpdateVelocity = 0x2B0;
const unsigned long TeamId = 0x748;
const unsigned long IsBot = 0x7E1;
const unsigned long Name = 0x720;
const unsigned long Nation = 0x72C;
const unsigned long IsDead = 0xAD8;
const unsigned long PlayerUID = 0x73C;
const unsigned long Health = 0xAC0;
const unsigned long HealthMax = 0xAC4;
const unsigned long NearDeathBreath = 0x14F0;
const unsigned long NearDeatchComponent = 0x14E0;
const unsigned long BreathMax = 0x164;
const unsigned long ControlRotation = 0x3C8;
const unsigned long ComponentVelocity = 0x250;
const unsigned long CurrentVehicle = 0xAF8;
const unsigned long ReplicatedMovement = 0xD8;
const unsigned long RelativeLocation = 0x178;
const unsigned long RelativeRotation = 0x184;
const unsigned long Mesh = 0x3F0;
const unsigned long BodyAddv = 0x1A0;
const unsigned long MinLOD = 0x7D8;
const unsigned long CurrentWeaponReplicated = 0x4BC;
const unsigned long WeaponManagerComponent = 0x1D50;
const unsigned long BulletTrackDistance = 0x774;
const unsigned long CurrentReloadWeapon = 0x2610;
const unsigned long ShootWeaponComponent = 0xC50;
const unsigned long ShootMode = 0xD45;
const unsigned long OwnerShootWeapon = 0x23C;
const unsigned long CurBulletNumInClip = 0x0;
const unsigned long CurMaxBulletNumInOneClip = 0xCB8;
const unsigned long ShootWeaponEntity = 0xF00;
const unsigned long ShootWeaponEffectComp = 0xF04;
const unsigned long CameraShakeInnerRadius = 0x214;
const unsigned long CameraShakeOuterRadius = 0x1B0;
const unsigned long CameraShakFalloff = 0x21C;
const unsigned long CharacterOverrideAttrs = 0xED0;
const unsigned long BulletFireSpeed = 0x484;
const unsigned long BulletMomentum = 0x5C0;
const unsigned long BulletRange = 0x5D0;
const unsigned long BaseImpactDamage = 0x5B4;
const unsigned long VehicleDamageScale = 0x5BC;
const unsigned long LaunchGravityScale = 0x488;
const unsigned long ShootInterval = 0x4B4;
const unsigned long bHasSingleFireMode = 0x500;
const unsigned long bHasAutoFireMode = 0x501;
const unsigned long bHasBurstFireMode = 0x502;
const unsigned long BurstShootInterval = 0x530;
const unsigned long ReloadRate = 0x7BC;
const unsigned long AccessoriesVRecoilFactor = 0x9C4;
const unsigned long AccessoriesHRecoilFactor = 0x9CC;
const unsigned long AccessoriesRecoveryFactor = 0x9C8;
const unsigned long ShotGunCenterPerc = 0xA20;
const unsigned long ShotGunVerticalSpread = 0xA24;
const unsigned long ShotGunHorizontalSpread = 0xA28;
const unsigned long GameDeviationFactor = 0xA18;
const unsigned long GameDeviationAccuracy = 0xA1C;
const unsigned long AccessoriesDeviationFactor = 0x9DC;
const unsigned long VehicleWeaponDeviationAngle = 0xA38;
const unsigned long RecoilKickADS = 0xAD8;
const unsigned long HP = 0x270;
const unsigned long HPMax = 0x26C;
const unsigned long Fuel = 0x318;
const unsigned long FuelMax = 0x314;
const unsigned long VehicleMovement = 0x1794;
const unsigned long VehicleCommon = 0x94C;
const unsigned long lastForwardSpeed = 0x9E0;
const unsigned long PickUpDataList = 0x770;
const unsigned long STPlayerController = 0x3B74;
const unsigned long PlayerCameraManager = 0x410;
const unsigned long CameraCache = 0x420;
const unsigned long ScopeFov = 0x15D0;
const unsigned long ScopeCameraComp = 0x1624;
const unsigned long IsFPPGameMode = 0x7D8;
const unsigned long SwitchWeaponSpeedScale = 0x21C8;
const unsigned long CharacterParachuteComponent = 0x11A4;
const unsigned long CurrentFallSpeed = 0x1A8;
const unsigned long PoseState = 0x11C0;
const unsigned long Position = 0x1B0;
const unsigned long CharacterMovement = 0x3F4;
const unsigned long SpringArmComp = 0x160C;
const unsigned long MeshContainer = 0x1488;
const unsigned long STPlayerController1 = 0x3B74;
const unsigned long HitPerform = 0x4B0;
const unsigned long bIsEngineStarted = 0x920;
const unsigned long ExtraBoostFactor = 0x1904;
const unsigned long Status = 0x3C0;
const unsigned long RelativeScale3D = 0x190;
const unsigned long ShootWeaponEntityComp = 0xF00;
const unsigned long STCharacterMovement = 0x16E8;
const unsigned long bIsFPPOnVehicle = 0x1140;
const unsigned long IsNetFPP = 0x18FC;
const unsigned long IsGameModeFpp = 0x7C8;
const unsigned long GameModeState = 0x8B8;
const unsigned long IsCanSwitchFPP = 0x7D9;
const unsigned long bIsGunADS = 0xCB9;
const unsigned long bIsAirOpen = 0x5E0;
const unsigned long Kills = 0x5A0;
const unsigned long bIsWeaponFiring = 0x11B0;
const unsigned long AvatarComponent2 = 0x23A8;
const unsigned long SynData = 0x5F0;
const unsigned long NetAvatarData = 0x300;
const unsigned long ServerZoneId = 0x758;

#endif // IS_64BIT

#endif // OFFSETS_H

// Additional offsets not in original files
#if IS_64BIT
// For 64-bit architecture, estimate based on pattern
const unsigned long DeadBoxAvatarComponent = 0x668; // May need adjustment for 64-bit
#else
const unsigned long DeadBoxAvatarComponent = 0x668;
#endif

// ULevel offsets (standard UE4 offsets)
#if IS_64BIT
const unsigned long ActorsArray = 0xa0;
#else
const unsigned long ActorsArray = 0xa0;
#endif

#endif // OFFSETS_H (closing tag for the whole file)
