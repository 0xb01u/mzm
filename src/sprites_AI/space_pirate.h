#ifndef SPACE_PIRATE_AI_H
#define SPACE_PIRATE_AI_H

#include "../types.h"

#define SPACE_PIRATE_CLIMBING_DIRECTION_UP 0x0
#define SPACE_PIRATE_CLIMBING_DIRECTION_DOWN 0x1

#define SPACE_PIRATE_AIM_FORWARD 0x0
#define SPACE_PIRATE_AIM_DIAGONALLY_UP 0x1
#define SPACE_PIRATE_AIM_DIAGONALLY_DOWN 0x2

#define SPACE_PIRATE_POSE_HIT_BY_LASER_INIT 0x6B
#define SPACE_PIRATE_POSE_HIT_BY_LASER 0x6C

// Space pirate laser

#define SPACE_PIRATE_LASERE_PART_FORWARD 0x0
#define SPACE_PIRATE_LASERE_PART_DIAGONALLY_UP 0x1
#define SPACE_PIRATE_LASERE_PART_DIAGONALLY_DOWN 0x2

void DisableChozodiaAlarm(void);
void DecrementChozodiaAlarm(void);
void SpawnWaitingPirates(void);
void SpacePirateTurningAround(void);
void SpacePirateSamusDetection(void);
void SpacePirateCheckCollidingWithLaser(void);
void SpacePirateFireLaserGround(void);
void SpacePirateFireLaserWall(void);
u8 SpacePirateCheckCollidingWithPirateWhenWalking(void);
u8 SpacePirateCheckCollidingWithPirateWhenClimbing(u8 direction);
u8 SpacePirateCheckSamusInShootingRange(void);
void unk_29b68(void);
void unk_29c94(void);
u8 SpacePirateMaybeSetNewClimbingPose(void);
void SpacePirateMaybeWalking(void);
void SpacePirateInit(void);
void unk_2a63c(void);
void unk_2a678(void);
void unk_2a768(void);
void unk_2a794(void);
void unk_2a7c0(void);
void SpacePirateRunningTurningAround(void);
void SpacePirateAlertAnimation(void);
void SpacePirateIdleAnim(void);
void unk_2aa30(void);
void unk_2aa5c(void);
void unk_2aa88(void);
void unk_2aaec(void);
void unk_2ab10(void);
void unk_2ab34(void);
void SpacePirateCheckTurningAnimEnded(void);
void unk_2aba4(void);
void unk_2abd4(void);
void unk_2ac10(void);
void unk_2ac60(void);
void unk_2ac8c(void);
void unk_2acd0(void);
void unk_2ad34(void);
void unk_2ad6c(void);
void unk_2ae90(void);
void unk_2aefc(void);
void unk_2b2fc(void);
void unk_2b34c(void);
void unk_2b390(void);
void unk_2b3d4(void);
void unk_2b4c0(void);
void unk_2b628(void);
void unk_2b6c8(void);
void SpacePirateClimbing(void);
void unk_2b8fc(void);
void unk_2b930(void);
void unk_2ba7c(void);
void unk_2ba98(void);
void unk_2bc58(void);
void unk_2bc78(void);
void unk_2bc94(void);
void unk_2bcbc(void);
void unk_2bd7c(void);
void unk_2bd9c(void);
void unk_2bde4(void);
void unk_2be64(void);
void unk_2be84(void);
void unk_2bed4(void);
void unk_2bef4(void);
void unk_2bf70(void);
void unk_2c0a4(void);
void unk_2c0c4(void);
void unk_2c100(void);
void unk_2c12c(void);
void unk_2c14c(void);
void unk_2c204(void);
void unk_2c224(void);
void unk_2c2d0(void);
void unk_2c2f0(void);
void SpacePirateDeath(u8 playSound);
void SpacePirateHitByLaserInit(void);
void SpacePirateHitByLaser(void);
void SpacePirateLaserInit(void);
void SpacePirateLaserExploding(void);
void SpacePirateLaserCheckExplodingAnimEnded(void);
void SpacePirateLaserMove(void);
void SpacePirate(void);
void SpacePirateLaser(void);

#endif /* SPACE_PIRATE_AI_H */