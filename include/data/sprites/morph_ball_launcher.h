#ifndef MORPH_BALL_LAUNCHER_DATA_H
#define MORPH_BALL_LAUNCHER_DATA_H

#include "types.h"
#include "oam.h"

extern const u32 sMorphBallLauncherGFX[303];
extern const u16 sMorphBallLauncherPAL[16];

extern const u16 sMorphBallLauncherOAM_Idle_Frame0[37];

extern const u16 sMorphBallLauncherOAM_Idle_Frame1[46];

extern const u16 sMorphBallLauncherOAM_Idle_Frame2[46];

extern const u16 sMorphBallLauncherOAM_Launching_Frame0[40];

extern const u16 sMorphBallLauncherOAM_Launching_Frame1[46];

extern const u16 sMorphBallLauncherOAM_Launching_Frame2[46];

extern const u16 sMorphBallLauncherOAM_Launching_Frame3[46];

extern const u16 sMorphBallLauncherOAM_Launching_Frame4[46];

extern const u16 sMorphBallLauncherPartOAM_Back_Frame0[13];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame0[4];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame1[7];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame2[13];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame3[22];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame4[22];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame5[28];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame6[28];

extern const u16 sMorphBallLauncherPartOAM_Energy_Frame7[19];

extern const struct FrameData sMorphBallLauncherOAM_Idle[5];

extern const struct FrameData sMorphBallLauncherOAM_Launching[9];

extern const struct FrameData sMorphBallLauncherPartOAM_Back[2];

extern const struct FrameData sMorphBallLauncherPartOAM_Energy[9];

#endif