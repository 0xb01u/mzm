#include "data/pointers.h"
#include "samus.h"
#include "particle.h"
#include "projectile.h"

#include "data/rooms_data.h"
#include "data/spriteset.h"
#include "data/hatch_data.h"

#include "constants/connection.h"
#include "constants/room.h"
#include "constants/particle.h"
#include "constants/projectile.h"
#include "constants/samus.h"
#include "constants/sprite.h"


#include "sprites_AI/sprites.h"

#define MAX_AMOUNT_OF_SPRITESET 114

// 75e6a8

const SamusFunc_T sSamusPoseFunctionPointers[MAX_AMOUNT_OF_SAMUS_POSES] = {
    [SPOSE_RUNNING] = SamusRunning,
    [SPOSE_STANDING] = SamusStanding,
    [SPOSE_TURNING_AROUND] = SamusTurningAround,
    [SPOSE_SHOOTING] = SamusStanding,
    [SPOSE_CROUCHING] = SamusCrouching,
    [SPOSE_TURNING_AROUND_AND_CROUCHING] = SamusTurningAroundAndCrouching,
    [SPOSE_SHOOTING_AND_CROUCHING] = SamusCrouching,
    [SPOSE_SKIDDING] = SamusSkidding,
    [SPOSE_MIDAIR] = SamusMidAir,
    [SPOSE_TURNING_AROUND_MIDAIR] = SamusTurningAroundMidAir,
    [SPOSE_LANDING] = SamusStanding,
    [SPOSE_STARTING_SPIN_JUMP] = SamusSpinning,
    [SPOSE_SPINNING] = SamusSpinning,
    [SPOSE_STARTING_WALL_JUMP] = SamusStartingWallJump,
    [SPOSE_SPACE_JUMPING] = SamusSpinning,
    [SPOSE_SCREW_ATTACKING] = SamusSpinning,
    [SPOSE_MORPHING] = SamusMorphing,
    [SPOSE_MORPH_BALL] = SamusMorphball,
    [SPOSE_ROLLING] = SamusRolling,
    [SPOSE_UNMORPHING] = SamusUnmorphing,
    [SPOSE_MORPH_BALL_MIDAIR] = SamusMorphballMidAir,
    [SPOSE_HANGING_ON_LEDGE] = SamusHangingOnLedge,
    [SPOSE_TURNING_TO_AIM_WHILE_HANGING] = SamusTurningToAimWhileHanging,
    [SPOSE_HIDING_ARM_CANNON_WHILE_HANGING] = SamusTurningToAimWhileHanging,
    [SPOSE_AIMING_WHILE_HANGING] = SamusAimingWhileHanging,
    [SPOSE_SHOOTING_WHILE_HANGING] = SamusTurningToAimWhileHanging,
    [SPOSE_PULLING_YOURSELF_UP_FROM_HANGING] = SamusPullingSelfUp,
    [SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING] = SamusPullingSelfForward,
    [SPOSE_PULLING_YOURSELF_INTO_A_MORPH_BALL_TUNNEL] = SamusPullingSelfUp,
    [SPOSE_USING_AN_ELEVATOR] = SamusUsingAnElevator,
    [SPOSE_FACING_THE_FOREGROUND] = SamusFacingTheForeground,
    [SPOSE_TURNING_FROM_FACING_THE_FOREGROUND] = SamusInactivity,
    [SPOSE_GRABBED_BY_CHOZO_STATUE] = SamusInactivity,
    [SPOSE_DELAY_BEFORE_SHINESPARKING] = SamusInactivity,
    [SPOSE_SHINESPARKING] = SamusShinesparking,
    [SPOSE_SHINESPARK_COLLISION] = SamusInactivity,
    [SPOSE_DELAY_AFTER_SHINESPARKING] = SamusInactivity,
    [SPOSE_DELAY_BEFORE_BALLSPARKING] = SamusDelayBeforeBallsparking,
    [SPOSE_BALLSPARKING] = SamusShinesparking,
    [SPOSE_BALLSPARK_COLLISION] = SamusInactivity,
    [SPOSE_ON_ZIPLINE] = SamusOnZipline,
    [SPOSE_SHOOTING_ON_ZIPLINE] = SamusOnZipline,
    [SPOSE_TURNING_ON_ZIPLINE] = SamusOnZipline,
    [SPOSE_MORPH_BALL_ON_ZIPLINE] = SamusMorphballOnZipline,
    [SPOSE_SAVING_LOADING_GAME] = SamusSavingLoadingGame,
    [SPOSE_DOWNLOADING_MAP_DATA] = SamusSavingLoadingGame,
    [SPOSE_TURNING_AROUND_TO_DOWNLOAD_MAP_DATA] = SamusInactivity,
    [SPOSE_GETTING_HURT] = SamusGettingHurt,
    [SPOSE_GETTING_KNOCKED_BACK] = SamusGettingKnockedBack,
    [SPOSE_GETTING_HURT_IN_MORPH_BALL] = SamusGettingHurt,
    [SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL] = SamusGettingKnockedBack,
    [SPOSE_DYING] = SamusDying,
    [SPOSE_CROUCHING_TO_CRAWL] = SamusInactivity,
    [SPOSE_CRAWLING_STOPPED] = SamusCrawlingStopped,
    [SPOSE_STARTING_TO_CRAWL] = SamusCrawlingStopped,
    [SPOSE_CRAWLING] = SamusCrawling,
    [SPOSE_UNCROUCHING_FROM_CRAWLING] = SamusInactivity,
    [SPOSE_TURNING_AROUND_WHILE_CRAWLING] = SamusTurningAroundWhileCrawling,
    [SPOSE_SHOOTING_WHILE_CRAWLING] = SamusInactivity,
    [SPOSE_UNCROUCHING_SUITLESS] = SamusStanding,
    [SPOSE_CROUCHING_SUITLESS] = SamusCrouching,
    [SPOSE_GRABBING_A_LEDGE_SUITLESS] = SamusHangingOnLedge,
    [SPOSE_FACING_THE_BACKGROUND_SUITLESS] = SamusFacingTheBackground,
    [SPOSE_TURNING_FROM_FACING_THE_BACKGROUND_SUITLESS] = SamusInactivity,
    [SPOSE_ACTIVATING_ZIPLINES] = SamusInactivity,
    [SPOSE_IN_ESCAPE_SHIP] = SamusInactivity,
    [SPOSE_TURNING_TO_ENTER_ESCAPE_SHIP] = SamusInactivity,
};

const SamusFunc_T sSamusPoseGFXFunctionPointers[MAX_AMOUNT_OF_SAMUS_POSES] = {
    [SPOSE_RUNNING] = SamusRunningGFX,
    [SPOSE_STANDING] = SamusStandingGFX,
    [SPOSE_TURNING_AROUND] = SamusTurningAroundGFX,
    [SPOSE_SHOOTING] = SamusShootingGFX,
    [SPOSE_CROUCHING] = SamusStandingGFX,
    [SPOSE_TURNING_AROUND_AND_CROUCHING] = SamusTurningAroundAndCrouchingGFX,
    [SPOSE_SHOOTING_AND_CROUCHING] = SamusShootingAndCrouchingGFX,
    [SPOSE_SKIDDING] = SamusGettingHurtGFX,
    [SPOSE_MIDAIR] = SamusMidAirGFX,
    [SPOSE_TURNING_AROUND_MIDAIR] = SamusTurningAroundMidAirGFX,
    [SPOSE_LANDING] = SamusShootingGFX,
    [SPOSE_STARTING_SPIN_JUMP] = SamusStartingSpinJumpGFX,
    [SPOSE_SPINNING] = SamusSpinningGFX,
    [SPOSE_STARTING_WALL_JUMP] = SamusStartingWallJumpGFX,
    [SPOSE_SPACE_JUMPING] = SamusSpaceJumpingGFX,
    [SPOSE_SCREW_ATTACKING] = SamusScrewAttackingGFX,
    [SPOSE_MORPHING] = SamusMorphingGFX,
    [SPOSE_MORPH_BALL] = SamusStandingGFX,
    [SPOSE_ROLLING] = SamusRollingGFX,
    [SPOSE_UNMORPHING] = SamusUnmorphingGFX,
    [SPOSE_MORPH_BALL_MIDAIR] = SamusStandingGFX,
    [SPOSE_HANGING_ON_LEDGE] = SamusHangingOnLedgeGFX,
    [SPOSE_TURNING_TO_AIM_WHILE_HANGING] = SamusTurningToAimWhileHangingGFX,
    [SPOSE_HIDING_ARM_CANNON_WHILE_HANGING] = SamusHidingArmCannonWhileHangingGFX,
    [SPOSE_AIMING_WHILE_HANGING] = SamusStandingGFX,
    [SPOSE_SHOOTING_WHILE_HANGING] = SamusTurningToAimWhileHangingGFX,
    [SPOSE_PULLING_YOURSELF_UP_FROM_HANGING] = SamusPullingSelfUpGFX,
    [SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING] = SamusPullingSelfForwardGFX,
    [SPOSE_PULLING_YOURSELF_INTO_A_MORPH_BALL_TUNNEL] = SamusPullingSelfIntoMorphballTunnelGFX,
    [SPOSE_USING_AN_ELEVATOR] = SamusUsingAnElevatorGFX,
    [SPOSE_FACING_THE_FOREGROUND] = SamusStandingGFX,
    [SPOSE_TURNING_FROM_FACING_THE_FOREGROUND] = SamusTurningFromFacningForegroundGFX,
    [SPOSE_GRABBED_BY_CHOZO_STATUE] = SamusStandingGFX,
    [SPOSE_DELAY_BEFORE_SHINESPARKING] = SamusDelayBeforeShinesparkingGFX,
    [SPOSE_SHINESPARKING] = SamusShinesparkingGFX,
    [SPOSE_SHINESPARK_COLLISION] = SamusShinesparkCollisionGFX,
    [SPOSE_DELAY_AFTER_SHINESPARKING] = SamusDelayAfterShinesparkingGFX,
    [SPOSE_DELAY_BEFORE_BALLSPARKING] = SamusDelayBeforeBallsparkingGFX,
    [SPOSE_BALLSPARKING] = SamusBallsparkingGFX,
    [SPOSE_BALLSPARK_COLLISION] = SamusBallsparkCollisionGFX,
    [SPOSE_ON_ZIPLINE] = SamusStandingGFX,
    [SPOSE_SHOOTING_ON_ZIPLINE] = SamusShootingOnZiplineGFX,
    [SPOSE_TURNING_ON_ZIPLINE] = SamusShootingOnZiplineGFX,
    [SPOSE_MORPH_BALL_ON_ZIPLINE] = SamusStandingGFX,
    [SPOSE_SAVING_LOADING_GAME] = SamusStandingGFX,
    [SPOSE_DOWNLOADING_MAP_DATA] = SamusStandingGFX,
    [SPOSE_TURNING_AROUND_TO_DOWNLOAD_MAP_DATA] = SamusTurningAroundToDownloadMapDataGFX,
    [SPOSE_GETTING_HURT] = SamusGettingHurtGFX,
    [SPOSE_GETTING_KNOCKED_BACK] = SamusGettingHurtGFX,
    [SPOSE_GETTING_HURT_IN_MORPH_BALL] = SamusInactivity,
    [SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL] = SamusInactivity,
    [SPOSE_DYING] = SamusGettingHurtGFX,
    [SPOSE_CROUCHING_TO_CRAWL] = SamusCrouchingToCrawlGFX,
    [SPOSE_CRAWLING_STOPPED] = SamusStandingGFX,
    [SPOSE_STARTING_TO_CRAWL] = SamusStartingToCrawlGFX,
    [SPOSE_CRAWLING] = SamusCrawlingGFX,
    [SPOSE_UNCROUCHING_FROM_CRAWLING] = SamusTurningAroundAndCrouchingGFX,
    [SPOSE_TURNING_AROUND_WHILE_CRAWLING] = SamusCrawlingGFX,
    [SPOSE_SHOOTING_WHILE_CRAWLING] = SamusStartingToCrawlGFX,
    [SPOSE_UNCROUCHING_SUITLESS] = SamusShootingGFX,
    [SPOSE_CROUCHING_SUITLESS] = SamusShootingAndCrouchingGFX,
    [SPOSE_GRABBING_A_LEDGE_SUITLESS] = SamusGrabbingALedgeSuitlessGFX,
    [SPOSE_FACING_THE_BACKGROUND_SUITLESS] = SamusInactivity,
    [SPOSE_TURNING_FROM_FACING_THE_BACKGROUND_SUITLESS] = SamusTurningFromFacingTheBackgroundGFX,
    [SPOSE_ACTIVATING_ZIPLINES] = SamusStandingGFX,
    [SPOSE_IN_ESCAPE_SHIP] = SamusInactivity,
    [SPOSE_TURNING_TO_ENTER_ESCAPE_SHIP] = SamusTurningToEnterEscapeShipGFX,
};

const Func_T sPrimarySpritesAIPointers[206] = {
    [PSPRITE_UNUSED0] = UnusedSprites,
    [PSPRITE_UNUSED1] = UnusedSprites,
    [PSPRITE_UNUSED2] = UnusedSprites,
    [PSPRITE_UNUSED3] = UnusedSprites,
    [PSPRITE_UNUSED4] = UnusedSprites,
    [PSPRITE_UNUSED5] = UnusedSprites,
    [PSPRITE_UNUSED6] = UnusedSprites,
    [PSPRITE_UNUSED7] = UnusedSprites,
    [PSPRITE_UNUSED8] = UnusedSprites,
    [PSPRITE_UNUSED9] = UnusedSprites,
    [PSPRITE_UNUSED10] = UnusedSprites,
    [PSPRITE_UNUSED11] = UnusedSprites,
    [PSPRITE_UNUSED12] = UnusedSprites,
    [PSPRITE_UNUSED13] = UnusedSprites,
    [PSPRITE_UNUSED14] = UnusedSprites,
    [PSPRITE_UNUSED15] = UnusedSprites,
    [PSPRITE_UNUSED16] = UnusedSprites,
    [PSPRITE_ITEM_BANNER] = ItemBanner,
    [PSPRITE_ZOOMER_YELLOW] = Zoomer,
    [PSPRITE_ZOOMER_RED] = Zoomer,
    [PSPRITE_ZEELA] = Zeela,
    [PSPRITE_ZEELA_RED] = Zeela,
    [PSPRITE_RIPPER_BROWN] = Ripper,
    [PSPRITE_RIPPER_PURPLE] = Ripper,
    [PSPRITE_ZEB] = Zeb,
    [PSPRITE_ZEB_BLUE] = Zeb,
    [PSPRITE_LARGE_ENERGY_DROP] = EnemyDrop,
    [PSPRITE_SMALL_ENERGY_DROP] = EnemyDrop,
    [PSPRITE_MISSILE_DROP] = EnemyDrop,
    [PSPRITE_SUPER_MISSILE_DROP] = EnemyDrop,
    [PSPRITE_POWER_BOMB_DROP] = EnemyDrop,
    [PSPRITE_SKREE_GREEN] = Skree,
    [PSPRITE_SKREE_BLUE] = Skree,
    [PSPRITE_MORPH_BALL] = MorphBall,
    [PSPRITE_CHOZO_STATUE_LONG_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_LONG] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_ICE_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_ICE] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_WAVE_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_WAVE] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_BOMB_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_BOMB] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_SPEEDBOOSTER_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_SPEEDBOOSTER] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_HIGH_JUMP_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_HIGH_JUMP] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_SCREW_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_SCREW] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_VARIA_HINT] = ChozoStatue,
    [PSPRITE_CHOZO_STATUE_VARIA] = ChozoStatue,
    [PSPRITE_SOVA_PURPLE] = Sova,
    [PSPRITE_SOVA_ORANGE] = Sova,
    [PSPRITE_MULTIVIOLA] = Multiviola,
    [PSPRITE_MULTIPLE_LARGE_ENERGY] = EnemyDrop,
    [PSPRITE_GERUTA_RED] = Geruta,
    [PSPRITE_GERUTA_GREEN] = Geruta,
    [PSPRITE_SQUEEPT] = Squeept,
    [PSPRITE_SQUEEPT_UNUSED] = Squeept,
    [PSPRITE_MAP_STATION] = MapStation,
    [PSPRITE_DRAGON] = Dragon,
    [PSPRITE_DRAGON_UNUSED] = Dragon,
    [PSPRITE_ZIPLINE] = Zipline,
    [PSPRITE_ZIPLINE_BUTTON] = ZiplineButton,
    [PSPRITE_REO_GREEN_WINGS] = Reo,
    [PSPRITE_REO_PURPLE_WINGS] = Reo,
    [PSPRITE_GUNSHIP] = Gunship,
    [PSPRITE_DEOREM] = Deorem,
    [PSPRITE_DEOREM_SECOND_LOCATION] = Deorem,
    [PSPRITE_CHARGE_BEAM] = ChargeBeam,
    [PSPRITE_SKULTERA] = Skultera,
    [PSPRITE_DESSGEEGA] = Dessgeega,
    [PSPRITE_DESSGEEGA_AFTER_LONG_BEAM] = Dessgeega,
    [PSPRITE_WAVER] = Waver,
    [PSPRITE_WAVER_UNUSED] = Waver,
    [PSPRITE_MELLOW] = Mellow,
    [PSPRITE_HIVE] = Hive,
    [PSPRITE_POWER_GRIP] = PowerGrip,
    [PSPRITE_IMAGO_LARVA_RIGHT] = ImagoLarva,
    [PSPRITE_MORPH_BALL_LAUNCHER] = MorphBallLauncher,
    [PSPRITE_IMAGO_COCOON] = ImagoCocoon,
    [PSPRITE_ELEVATOR_PAD] = ElevatorPad,
    [PSPRITE_SPACE_PIRATE] = SpacePirate,
    [PSPRITE_SPACE_PIRATE_WAITING1] = SpacePirate,
    [PSPRITE_SPACE_PIRATE_WAITING2] = SpacePirate,
    [PSPRITE_SPACE_PIRATE_WAITING3] = SpacePirate,
    [PSPRITE_SPACE_PIRATE2] = SpacePirate,
    [PSPRITE_GAMET_BLUE_SINGLE] = Gamet,
    [PSPRITE_GAMET_RED_SINGLE] = Gamet,
    [PSPRITE_CHOZO_STATUE_GRAVITY] = UnknownItemChozoStatue,
    [PSPRITE_CHOZO_STATUE_SPACE_JUMP] = UnknownItemChozoStatue,
    [PSPRITE_SECURITY_GATE_DEFAULT_OPEN] = SecurityGateDefaultOpen,
    [PSPRITE_ZEBBO_GREEN] = Zebbo,
    [PSPRITE_ZEBBO_YELLOW] = Zebbo,
    [PSPRITE_WORKER_ROBOT] = WorkerRobot,
    [PSPRITE_PARASITE_MULTIPLE] = ParasiteMultiple,
    [PSPRITE_PARASITE] = Parasite,
    [PSPRITE_PISTON] = Piston,
    [PSPRITE_RIDLEY] = Ridley,
    [PSPRITE_SECURITY_GATE_DEFAULT_CLOSED] = SecurityGateDefaultClosed,
    [PSPRITE_ZIPLINE_GENERATOR] = ZiplineGenerator,
    [PSPRITE_METROID] = Metroid,
    [PSPRITE_FROZEN_METROID] = Metroid,
    [PSPRITE_RINKA_ORANGE] = Rinka,
    [PSPRITE_POLYP] = Polyp,
    [PSPRITE_VIOLA_BLUE] = Viola,
    [PSPRITE_VIOLA_ORANGE] = Viola,
    [PSPRITE_GERON_NORFAIR] = GeronNorfair,
    [PSPRITE_HOLTZ] = Holtz,
    [PSPRITE_GEKITAI_MACHINE] = GekitaiMachine,
    [PSPRITE_RUINS_TEST] = RuinsTest,
    [PSPRITE_SAVE_PLATFORM] = SavePlatform,
    [PSPRITE_KRAID] = Kraid,
    [PSPRITE_IMAGO_COCOON_AFTER_FIGHT] = ImagoCocoonAfterFight,
    [PSPRITE_RIPPERII] = Ripper2,
    [PSPRITE_MELLA] = Mella,
    [PSPRITE_ATOMIC] = Atomic,
    [PSPRITE_AREA_BANNER] = AreaBanner,
    [PSPRITE_MOTHER_BRAIN] = MotherBrain,
    [PSPRITE_FAKE_POWER_BOMB_EVENT_TRIGGER] = FakePowerBombEventTrigger,
    [PSPRITE_ACID_WORM] = AcidWorm,
    [PSPRITE_ESCAPE_SHIP] = EscapeShip,
    [PSPRITE_SIDEHOPPER] = Sidehopper,
    [PSPRITE_GEEGA] = Geega,
    [PSPRITE_GEEGA_WHITE] = Geega,
    [PSPRITE_RINKA_MOTHER_BRAIN] = Rinka,
    [PSPRITE_ZEBETITE_ONE_AND_THREE] = Zebetite,
    [PSPRITE_CANNON] = Cannon,
    [PSPRITE_IMAGO_LARVA_RIGHT_SIDE] = ImagoLarvaRightSide,
    [PSPRITE_TANGLE_VINE_TALL] = TangleVineTall,
    [PSPRITE_TANGLE_VINE_MEDIUM] = TangleVineMedium,
    [PSPRITE_TANGLE_VINE_CURVED] = TangleVineCurved,
    [PSPRITE_TANGLE_VINE_SHORT] = TangleVineShort,
    [PSPRITE_MELLOW_SWARM] = MellowSwarm,
    [PSPRITE_MELLOW_SWARM_HEALTH_BASED] = MellowSwarm,
    [PSPRITE_IMAGO] = Imago,
    [PSPRITE_ZEBETITE_TWO_AND_FOUR] = Zebetite,
    [PSPRITE_CANNON2] = Cannon,
    [PSPRITE_CANNON3] = Cannon,
    [PSPRITE_CROCOMIRE] = Crocomire,
    [PSPRITE_IMAGO_LARVA_LEFT] = ImagoLarva,
    [PSPRITE_GERON_BRINSTAR_ROOM_15] = Geron,
    [PSPRITE_GERON_BRINSTAR_ROOM_1C] = Geron,
    [PSPRITE_GERON_VARIA1] = Geron,
    [PSPRITE_GERON_VARIA2] = Geron,
    [PSPRITE_GERON_VARIA3] = Geron,
    [PSPRITE_GLASS_TUBE] = GlassTube,
    [PSPRITE_SAVE_PLATFORM_CHOZODIA] = SavePlatformChozodia,
    [PSPRITE_BARISTUTE] = Baristute,
    [PSPRITE_CHOZO_STATUE_PLASMA_BEAM] = UnknownItemChozoStatue,
    [PSPRITE_KRAID_ELEVATOR_STATUE] = KraidElevatorStatue,
    [PSPRITE_RIDLEY_ELEVATOR_STATUE] = RidleyElevatorStatue,
    [PSPRITE_RISING_CHOZO_PILLAR] = RisingChozoPillar,
    [PSPRITE_SECURITY_LASER_VERTICAL] = SecurityLaser,
    [PSPRITE_SECURITY_LASER_HORIZONTAL] = SecurityLaser,
    [PSPRITE_SECURITY_LASER_VERTICAL2] = SecurityLaser,
    [PSPRITE_SECURITY_LASER_HORIZONTAL2] = SecurityLaser,
    [PSPRITE_LOCK_UNLOCK_METROID_DOORS_UNUSED] = MetroidDoorLock,
    [PSPRITE_GAMET_BLUE_LEADER] = Gamet,
    [PSPRITE_GAMET_BLUE_FOLLOWER] = Gamet,
    [PSPRITE_GEEGA_LEADER] = Geega,
    [PSPRITE_GEEGA_FOLLOWER] = Geega,
    [PSPRITE_ZEBBO_GREEN_LEADER] = Zebbo,
    [PSPRITE_ZEBBO_GREEN_FOLLOWER] = Zebbo,
    [PSPRITE_KRAID_STATUE] = KraidStatue,
    [PSPRITE_RIDLEY_STATUE] = RidleyStatue,
    [PSPRITE_RINKA_GREEN] = Rinka,
    [PSPRITE_SEARCHLIGHT_EYE] = SearchlightEye,
    [PSPRITE_SEARCHLIGHT_EYE2] = SearchlightEye,
    [PSPRITE_STEAM_LARGE] = Steam,
    [PSPRITE_STEAM_SMALL] = Steam,
    [PSPRITE_PLASMA_BEAM_BLOCK]  = UnkownItemBlock,
    [PSPRITE_GRAVITY_SUIT_BLOCK] = UnkownItemBlock,
    [PSPRITE_SPACE_JUMP_BLOCK] = UnkownItemBlock,
    [PSPRITE_GADORA_KRAID] = Gadora,
    [PSPRITE_GADORA_RIDLEY] = Gadora,
    [PSPRITE_SEARCHLIGHT] = Searchlight,
    [PSPRITE_SEARCHLIGHT2] = Searchlight,
    [PSPRITE_SEARCHLIGHT3] = Searchlight,
    [PSPRITE_SEARCHLIGHT4] = Searchlight,
    [PSPRITE_MAYBE_SEARCHLIGHT_TRIGGER] = PrimarySpriteB3,
    [PSPRITE_DISCOVERED_IMAGO_PASSAGE_EVENT_TRIGGER] = EventTriggerDiscoveredImagoPassage,
    [PSPRITE_FAKE_POWER_BOMB] = FakePowerBomb,
    [PSPRITE_SPACE_PIRATE_CARRYING_POWER_BOMB] = FakePowerBombEventTrigger,
    [PSPRITE_TANGLE_VINE_RED_GARUTA] = TangleVineRedGeruta,
    [PSPRITE_TANGLE_VINE_GERUTA] = TangleVineGeruta,
    [PSPRITE_TANGLE_VINE_LARVA_RIGHT] = TangleVineLarvaRight,
    [PSPRITE_TANGLE_VINE_LARVA_LEFT] = TangleVineLarvaLeft,
    [PSPRITE_WATER_DROP] = WaterDrop,
    [PSPRITE_FALLING_CHOZO_PILLAR] = FallingChozoPillar,
    [PSPRITE_MECHA_RIDLEY] = MechaRidley,
    [PSPRITE_EXPLOSION_ZEBES_ESCAPE] = ExplosionZebesEscape,
    [PSPRITE_STEAM_LARGE_DIAGONAL_UP] = SteamDiagonal,
    [PSPRITE_STEAM_SMALL_DIAGONAL_UP] = SteamDiagonal,
    [PSPRITE_STEAM_LARGE_DIAGONAL_DOWN] = SteamDiagonal,
    [PSPRITE_STEAM_SMALL_DIAGONAL_DOWN] = SteamDiagonal,
    [PSPRITE_BARISTUTE_KRAID_UPPER] = Baristute,
    [PSPRITE_ESCAPE_GATE1] = EscapeGate,
    [PSPRITE_ESCAPE_GATE2] = EscapeGate,
    [PSPRITE_BLACK_SPACE_PIRATE] = BlackSpacePirate,
    [PSPRITE_ESCAPE_SHIP_SPACE_PIRATE] = EscapeShipSpacePirate,
    [PSPRITE_BARISTUTE_KRAID_LOWER] = Baristute,
    [PSPRITE_RINKA_MOTHER_BRAIN2] = RinkaMotherBrain,
    [PSPRITE_RINKA_MOTHER_BRAIN3] = RinkaMotherBrain,
    [PSPRITE_RINKA_MOTHER_BRAIN4] = RinkaMotherBrain,
    [PSPRITE_RINKA_MOTHER_BRAIN5] = RinkaMotherBrain,
    [PSPRITE_RINKA_MOTHER_BRAIN6] = RinkaMotherBrain 
};

const u32* sSpritesGraphicsPointers[190] = {
    NULL
};

const u16* sSpritesPalettePointers[190] = {
    NULL
};

const Func_T sSecondarySpritesAIPointers[190] = {
    [SSPRITE_CHOZO_BALL] = ChozoBall,
    [SSPRITE_CHOZO_STATUE_PART] = ChozoStatuePart,
    [SSPRITE_CHOZO_STATUE_REFILL] = ChozoStatueRefill,
    [SSPRITE_KRAID_PART] = KraidPart,
    [SSPRITE_CHOZO_STATUE_MOVEMENT] = ChozoStatueMovement,
    [SSPRITE_CHARGE_BEAM_GLOW] = ChargeBeamGlow,
    [SSPRITE_WINGED_RIPPER] = WingedRipper,
    [SSPRITE_MULTIVIOLA_UNUSED] = MultiviolaUnused,
    [SSPRITE_DRAGON_FIREBALL] = DragonFireball,
    [SSPRITE_DEOREM_SEGMENT] = DeoremSegment,
    [SSPRITE_DEOREM_EYE] = DeoremEye,
    [SSPRITE_DEOREM_THORN] = DeoremThorn,
    [SSPRITE_SKREE_EXPLOSION] = SkreeExplosion,
    [SSPRITE_SAVE_PLATFORM_PART] = SavePlatformPart,
    [SSPRITE_SAVE_YES_NO_CURSOR] = SaveYesNoCursor,
    [SSPRITE_BLUE_SKREE_EXPLOSION] = SkreeExplosion,
    [SSPRITE_ZEELA_EYES] = ZeelaEyes,
    [SSPRITE_HIVE_ROOTS] = HiveRoots,
    [SSPRITE_IMAGO_LARVA_PART] = ImagoLarvaPart,
    [SSPRITE_MORPH_BALL_OUTSIDE] = MorphBallOutside,
    [SSPRITE_IMAGO_COCOON_VINE] = ImagoCocoonVine,
    [SSPRITE_IMAGO_COCOON_SPORE] = ImagoCocoonSpore,
    [SSPRITE_SPACE_PIRATE_LASER] = SpacePirateLaser,
    [SSPRITE_RIDLEY_PART] = RidleyPart,
    [SSPRITE_RIDLEY_TAIL] = RidleyTail,
    [SSPRITE_SEARCHLIGHT_EYE_BEAM] = SearchlightEyeBeam,
    [SSPRITE_METROID_SHELL] = MetroidShell,
    [SSPRITE_POLYP_PROJECTILE] = PolypProjectile,
    [SSPRITE_KRAID_SPIKE] = KraidSpike,
    [SSPRITE_KRAID_NAIL] = KraidNail,
    [SSPRITE_ZIPLINE_GENERATOR_PART] = ZiplineGeneratorPart,
    [SSPRITE_ATOMIC_ELECTRICITY] = AtomicElectricity,
    [SSPRITE_MOTHER_BRAIN_PART] = MotherBrainPart,
    [SSPRITE_RIDLEY_FIREBALL] = RidleyFireball,
    [SSPRITE_UNKNOWN_ITEM_CHOZO_STATUE_PART] = UnknownItemChozoStatuePart,
    [SSPRITE_UNKNOWN_ITEM_CHOZO_STATUE_REFILL] = UnknownItemChozoStatueRefill,
    [SSPRITE_MORPH_BALL_LAUNCHER_PART] = MorphBallLauncherPart,
    [SSPRITE_ACID_WORM_BODY] = AcidWormBody,
    [SSPRITE_ACID_WORM_SPIT] = AcidWormSpit,
    [SSPRITE_CANNON_BULLET] = CannonBullet,
    [SSPRITE_CROCOMIRE_PART] = CrocomirePart,
    [SSPRITE_IMAGO_PART] = ImagoPart,
    [SSPRITE_DEFEATED_IMAGO_COCOON] = DefeatedImagoCocoon,
    [SSPRITE_IMAGO_CEILING_VINE] = ImagoCocoonCeilingVine,
    [SSPRITE_SEARCHLIGHT_EYE_BEAM2] = SearchlightEyeBeam,
    [SSPRITE_TANGLE_VINE_GERUTA_PART] = TangleVineGerutaPart,
    [SSPRITE_CHOZODIA_SAVE_PLATFORM_PART] = SavePlatformChozodiaPart,
    [SSPRITE_IMAGO_NEEDLE] = ImagoNeedle,
    [SSPRITE_ELEVATOR_STATUE_DEBRIS] = ElevatorStatueDebris,
    [SSPRITE_IMAGO_DAMAGED_STINGER] = ImagoDamagedStinger,
    [SSPRITE_GUNSHIP_PART] = GunshipPart,
    [SSPRITE_IMAGO_EGG] = ImagoEgg,
    [SSPRITE_MAP_STATION_PART] = MapStationPart,
    [SSPRITE_CHOZO_PILLAR_PLATFORM] = ChozoPillarPlatform,
    [SSPRITE_GADORA_EYE] = GadoraEye,
    [SSPRITE_GADORA_BEAM] = GadoraBeam,
    [SSPRITE_UNKNOWN_ITEM_BLOCK_LIGHT] = UnkownItemBlockLight,
    [SSPRITE_SEARCHLIGHT_EYE_PROJECTILE] = SearchlightEyeProjectile,
    [SSPRITE_CHOZO_PILLAR_PLATFORM_SHADOW] = ChozoPillarPlatformShadow,
    [SSPRITE_RUINS_TEST_SYMBOL] = RuinsTestSymbol,
    [SSPRITE_RUINS_TEST_SAMUS_REFLECTION_START] = RuinsTestSamusReflectionStart,
    [SSPRITE_RUINS_TEST_REFLECTION_COVER] = RuinsTestReflectionCover,
    [SSPRITE_RUINS_TEST_GHOST_OUTLINE] = RuinsTestGhostOutline,
    [SSPRITE_RUINS_TEST_GHOST] = RuinsTestGhost,
    [SSPRITE_RUINS_TEST_SHOOTABLE_SYMBOL] = RuinsTestShootableSymbol,
    [SSPRITE_RUINS_TEST_SAMUS_REFLECTION_END] = RuinsTestSamusReflectionEnd,
    [SSPRITE_RUINS_TEST_LIGHTNING] = RuinsTestLightning,
    [SSPRITE_RIDLEY_BIG_FIREBALL] = RidleyFireball,
    [SSPRITE_MECHA_RIDLEY_PART] = MechaRidleyPart,
    [SSPRITE_ESCAPE_SHIP_PART] = EscapeShipPart,
    [SSPRITE_POWER_GRIP_GLOW] = PowerGripGlow,
    [SSPRITE_MECHA_RIDLEY_LASER] = MechaRidleyLaser,
    [SSPRITE_MECHA_RIDLEY_MISSILE] = MechaRidleyMissile,
    [SSPRITE_MECHA_RIDLEY_FIREBALL] = MechaRidleyFireball,
    [SSPRITE_MOTHER_BRAIN_BEAM] = MotherBrainBeam,
    [SSPRITE_MOTHER_BRAIN_BLOCK] = MotherBrainBlock,
    [SSPRITE_MOTHER_BRAIN_GLASS_BREAKING] = MotherBrainGlassBreaking 
};

const u8* sSpritesetPointers[MAX_AMOUNT_OF_SPRITESET] = {
    sSpriteset0,
    sSpriteset1,
    sSpriteset2,
    sSpriteset3,
    sSpriteset4,
    sSpriteset5,
    sSpriteset6,
    sSpriteset7,
    sSpriteset8,
    sSpriteset9,
    sSpriteset10,
    sSpriteset11,
    sSpriteset12,
    sSpriteset13,
    sSpriteset14,
    sSpriteset15,
    sSpriteset16,
    sSpriteset17,
    sSpriteset18,
    sSpriteset19,
    sSpriteset20,
    sSpriteset21,
    sSpriteset22,
    sSpriteset23,
    sSpriteset24,
    sSpriteset25,
    sSpriteset26,
    sSpriteset27,
    sSpriteset28,
    sSpriteset29,
    sSpriteset30,
    sSpriteset31,
    sSpriteset32,
    sSpriteset33,
    sSpriteset34,
    sSpriteset35,
    sSpriteset36,
    sSpriteset37,
    sSpriteset38,
    sSpriteset39,
    sSpriteset40,
    sSpriteset41,
    sSpriteset42,
    sSpriteset43,
    sSpriteset44,
    sSpriteset45,
    sSpriteset46,
    sSpriteset47,
    sSpriteset48,
    sSpriteset49,
    sSpriteset50,
    sSpriteset51,
    sSpriteset52,
    sSpriteset53,
    sSpriteset54,
    sSpriteset55,
    sSpriteset56,
    sSpriteset57,
    sSpriteset58,
    sSpriteset59,
    sSpriteset60,
    sSpriteset61,
    sSpriteset62,
    sSpriteset63,
    sSpriteset64,
    sSpriteset65,
    sSpriteset66,
    sSpriteset67,
    sSpriteset68,
    sSpriteset69,
    sSpriteset70,
    sSpriteset71,
    sSpriteset72,
    sSpriteset73,
    sSpriteset74,
    sSpriteset75,
    sSpriteset76,
    sSpriteset77,
    sSpriteset78,
    sSpriteset79,
    sSpriteset80,
    sSpriteset81,
    sSpriteset82,
    sSpriteset83,
    sSpriteset84,
    sSpriteset85,
    sSpriteset86,
    sSpriteset87,
    sSpriteset88,
    sSpriteset89,
    sSpriteset90,
    sSpriteset91,
    sSpriteset92,
    sSpriteset93,
    sSpriteset94,
    sSpriteset95,
    sSpriteset96,
    sSpriteset97,
    sSpriteset98,
    sSpriteset99,
    sSpriteset100,
    sSpriteset101,
    sSpriteset102,
    sSpriteset103,
    sSpriteset104,
    sSpriteset105,
    sSpriteset106,
    sSpriteset107,
    sSpriteset108,
    sSpriteset109,
    sSpriteset110,
    sSpriteset111,
    sSpriteset112,
    sSpriteset113
};


// TODO split

const ProjFunc_T sProcessProjectileFunctionPointers[16] = {
    [PROJ_TYPE_BEAM] = ProjectileProcessNormalBeam,
    [PROJ_TYPE_LONG_BEAM] = ProjectileProcessLongBeam,
    [PROJ_TYPE_ICE_BEAM] = ProjectileProcessIceBeam,
    [PROJ_TYPE_WAVE_BEAM] = ProjectileProcessWaveBeam,
    [PROJ_TYPE_PLASMA_BEAM] = ProjectileProcessPlasmaBeam,
    [PROJ_TYPE_PISTOL] = ProjectileProcessPistol,
    [PROJ_TYPE_CHARGED_BEAM] = ProjectileProcessChargedNormalBeam,
    [PROJ_TYPE_CHARGED_LONG_BEAM] = ProjectileProcessChargedLongBeam,
    [PROJ_TYPE_CHARGED_ICE_BEAM] = ProjectileProcessChargedIceBeam,
    [PROJ_TYPE_CHARGED_WAVE_BEAM] = ProjectileProcessChargedWaveBeam,
    [PROJ_TYPE_CHARGED_PLASMA_BEAM] = ProjectileProcessChargedPlasmaBeam,
    [PROJ_TYPE_CHARGED_PISTOL] = ProjectileProcessChargedPistol,
    [PROJ_TYPE_MISSILE] = ProjectileProcessMissile,
    [PROJ_TYPE_SUPER_MISSILE] = ProjectileProcessSuperMissile,
    [PROJ_TYPE_BOMB] = ProjectileProcessBomb,
    [PROJ_TYPE_POWER_BOMB] = ProjectileProcessPowerBomb
};

const ParticleFunc_T sProcessParticleFunctionPointers[61] = {
    [PE_SPRITE_SPLASH_WATER_SMALL] = ParticleSpriteSplashWaterSmall,
    [PE_SPRITE_SPLASH_WATER_BIG] = ParticleSpriteSplashWaterBig,
    [PE_SPRITE_SPLASH_WATER_HUGE] = ParticleSpriteSplashWaterHuge,
    [PE_SPRITE_SPLASH_LAVA_SMALL] = ParticleSpriteSplashLavaSmall,
    [PE_SPRITE_SPLASH_LAVA_BIG] = ParticleSpriteSplashLavaBig,
    [PE_SPRITE_SPLASH_LAVA_HUGE] = ParticleSpriteSplashLavaHuge,
    [PE_SPRITE_SPLASH_ACID_SMALL] = ParticleSpriteSplashAcidSmall,
    [PE_SPRITE_SPLASH_ACID_BIG] = ParticleSpriteSplashAcidBig,
    [PE_SPRITE_SPLASH_ACID_HUGE] = ParticleSpriteSplashAcidHuge,
    [PE_SHOOTING_BEAM_LEFT] = ParticleShootingBeamLeft,
    [PE_SHOOTING_BEAM_DIAG_UP_LEFT] = ParticleShootingBeamDiagUpLeft,
    [PE_SHOOTING_BEAM_DIAG_DOWN_LEFT] = ParticleShootingBeamDiagDownLeft,
    [PE_SHOOTING_BEAM_UP_LEFT] = ParticleShootingBeamUpLeft,
    [PE_SHOOTING_BEAM_DOWN_LEFT] = ParticleShootingBeamDiagDownLeft,
    [PE_SHOOTING_BEAM_RIGHT] = ParticleShootingBeamRight,
    [PE_SHOOTING_BEAM_DIAG_UP_RIGHT] = ParticleShootingBeamDiagUpRight,
    [PE_SHOOTING_BEAM_DIAG_DOWN_RIGHT] = ParticleShootingBeamDiagDownRight,
    [PE_SHOOTING_BEAM_UP_RIGHT] = ParticleShootingBeamDiagUpRight,
    [PE_SHOOTING_BEAM_DOWN_RIGHT] = ParticleShootingBeamDownRight,
    [PE_BOMB] = ParticleBomb,
    [PE_MISSILE_TRAIL] = ParticleMissileTrail,
    [PE_SUPER_MISSILE_TRAIL] = ParticleSuperMissileTrail,
    [PE_BEAM_TRAILING_RIGHT] = ParticleBeamTrailingRight,
    [PE_BEAM_TRAILING_LEFT] = ParticleBeamTrailingLeft,
    [PE_CHARGED_LONG_BEAM_TRAIL] = ParticleChargedLongBeamTrail,
    [PE_CHARGED_ICE_BEAM_TRAIL] = ParticleChargedIceBeamTrail,
    [PE_CHARGED_WAVE_BEAM_TRAIL] = ParticleChargedWaveBeamTrail,
    [PE_CHARGED_PLASMA_BEAM_TRAIL] = ParticleChargedPlasmaBeamTrail,
    [PE_CHARGED_FULL_BEAM_TRAIL] = ParticleChargedFullBeamTrail,
    [PE_CHARGED_PISTOL_TRAIL] = ParticleChargedPistolTrail,
    [PE_SPRITE_EXPLOSION_HUGE] = ParticleSpriteExplosionHuge,
    [PE_SPRITE_EXPLOSION_SMALL] = ParticleSpriteExplosionSmall,
    [PE_SPRITE_EXPLOSION_MEDIUM] = ParticleSpriteExplosionMedium,
    [PE_SPRITE_EXPLOSION_BIG] = ParticleSpriteExplosionBig,
    [PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG] = ParticleSpriteExplosionSingleThenBig,
    [PE_SCREW_ATTACK_DESTROYED] = ParticleScrewAttackDestroyed,
    [PE_SHINESPARK_DESTROYED] = ParticleShinesparkDestroyed,
    [PE_SUDO_SCREW_DESTROYED] = ParticleSudoScrewDestroyed,
    [PE_SPEEDBOOSTER_DESTROYED] = ParticleSpeedboosterDestroyed,
    [PE_MAIN_BOSS_DEATH] = ParticleMainBossDeath,
    [PE_FREEZING_SPRITE_WITH_ICE] = ParticleFreezingSpriteWithIce,
    [PE_FREEZING_SPRITE_WITH_CHARGED_ICE] = ParticleFreezingSpriteWithChargedIce,
    [PE_HITTING_SOMETHING_WITH_NORMAL_BEAM] = ParticleHittingSomethingWithNormalBeam,
    [PE_HITTING_SOMETHING_WITH_LONG_BEAM] = ParticleHittingSomethingWithLongBeam,
    [PE_HITTING_SOMETHING_WITH_ICE_BEAM] = ParticleHittingSomethingWithIceBeam,
    [PE_HITTING_SOMETHING_WITH_WAVE_BEAM] = ParticleHittingSomethingWithWaveBeam,
    [PE_HITTING_SOMETHING_WITH_PLASMA_BEAM] = ParticleHittingSomethingWithPlasmaBeam,
    [PE_HITTING_SOMETHING_INVINCIBLE] = ParticleHittingSomethingInvincible,
    [PE_HITTING_SOMETHING_WITH_MISSILE] = ParticleHittingSomethingWithMissile,
    [PE_HITTING_SOMETHING_WITH_SUPER_MISSILE] = ParticleHittingSomethingWithSuperMissile,
    [PE_HITTING_SOMETHING_WITH_FULL_BEAM_NO_PLASMA] = ParticleHittingSomethingWithFullBeamNoPlasma,
    [PE_HITTING_SOMETHING_WITH_FULL_BEAM] = ParticleHittingSomethingWithFullBeam,
    [PE_SMALL_DUST] = ParticleSmallDust,
    [PE_MEDIUM_DUST] = ParticleMediumDust,
    [PE_TWO_MEDIUM_DUST] = ParticleTwoMediumDust,
    [PE_SECOND_SMALL_DUST] = ParticleSecondSmallDust,
    [PE_SECOND_MEDIUM_DUST] = ParticleSecondMediumDust,
    [PE_SECOND_TWO_MEDIUM_DUST] = ParticleSecondTwoMediumDust,
    [PE_SAMUS_REFLECTION] = ParticleSamusReflection,
    [PE_CHARGING_BEAM] = ParticleChargingBeam,
    [PE_ESCAPE] = ParticleEscape,
};

const struct Door* sAreaDoorsPointers[MAX_AMOUNT_OF_AREAS - 1] = {
    [AREA_BRINSTAR] = sBrinstarDoors,
    [AREA_KRAID] = sKraidDoors,
    [AREA_NORFAIR] = sNorfairDoors,
    [AREA_RIDLEY] = sRidleyDoors,
    [AREA_TOURIAN] = sTourianDoors,
    [AREA_CRATERIA] = sCrateriaDoors,
    [AREA_CHOZODIA] = sTourianDoors
};

const struct RoomEntryROM* sAreaRoomEntryPointers[MAX_AMOUNT_OF_AREAS - 1] = {

};

// More...

// 75fd88

/**
 * @brief Haze data for each room effect
 * 0 : Haze value
 * 1 : Damage effect
 * 2 : BG0 water moving flag
 * 3 : Power bomb related
 */
const u8 sHazeData[13][4] = {
    [EFFECT_NONE] = {
        HAZE_VALUE_NONE, EFFECT_NONE, FALSE, 0
    },
    [EFFECT_WATER] = {
        HAZE_VALUE_BG3, EFFECT_WATER, TRUE, 1
    },
    [EFFECT_STRONG_LAVA] = {
        HAZE_VALUE_BG3, EFFECT_STRONG_LAVA, FALSE, 1
    },
    [EFFECT_WEAK_LAVA] = {
        HAZE_VALUE_BG3, EFFECT_WEAK_LAVA, FALSE, 1
    },
    [EFFECT_STRONG_LAVA_HEAT_HAZE] = {
        HAZE_VALUE_BG3_STRONG_WEAK, EFFECT_STRONG_LAVA_HEAT_HAZE, FALSE, 1
    },
    [EFFECT_ACID] = {
        HAZE_VALUE_BG3, EFFECT_ACID, FALSE, 1
    },
    [EFFECT_SNOWFLAKES_COLD_KNOCKBACK] = {
        HAZE_VALUE_COLD, EFFECT_SNOWFLAKES_COLD_KNOCKBACK, FALSE, 1
    },
    [EFFECT_SNOWFLAKES_COLD] = {
        HAZE_VALUE_COLD, EFFECT_SNOWFLAKES_COLD, FALSE, 1
    },
    [EFFECT_HEAT_BG3_HAZE] = {
        HAZE_VALUE_BG3_NONE_WEAK, EFFECT_NONE, FALSE, 0
    },
    [EFFECT_HEAT_BG2_BG3_HAZE] = {
        HAZE_VALUE_BG3_BG2_STRONG_WEAK_MEDIUM, EFFECT_NONE, FALSE, 0
    },
    [EFFECT_BG3_GRADIENT] = {
        HAZE_VALUE_GRADIENT, EFFECT_NONE, FALSE, 2
    },
    [EFFECT_BG2_GRADIENT] = {
        HAZE_VALUE_GRADIENT, EFFECT_NONE, FALSE, 2
    },
    [EFFECT_HAZE_BG1_BG2_BG3] = {
        HAZE_VALUE_BG3_BG2_BG1, EFFECT_NONE, FALSE, 0
    }
};

// More ...

// 75fde0

const struct HatchLockEvent* sHatchLockEventsPointers[MAX_AMOUNT_OF_AREAS - 1] = {
    [AREA_BRINSTAR] = sHatchLockEventsBrinstar,
    [AREA_KRAID] = sHatchLockEventsKraid,
    [AREA_NORFAIR] = sHatchLockEventsNorfair,
    [AREA_RIDLEY] = sHatchLockEventsNorfair,
    [AREA_TOURIAN] = sHatchLockEventsNorfair,
    [AREA_CRATERIA] = sHatchLockEventsNorfair,
    [AREA_CHOZODIA] = sHatchLockEventsChozodia
};

// More ...

// 75fdfc
