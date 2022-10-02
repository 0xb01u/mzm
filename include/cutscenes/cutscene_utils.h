#ifndef CUTSCENE_UTILS_H
#define CUTSCENE_UTILS_H

#include "types.h"
#include "structs/cutscene.h"

u8 CutsceneDefaultRoutine(void);
u8 TourianEscapeSubroutine(void);
void CutsceneUpdateMusicAfterSkip(void);
void CutsceneEnd(void);
u8 CutsceneSubroutine(void);
u8 CutsceneEndFunction(void);
void CutsceneVBlank(void);
void CutsceneLoadingVBlank(void);
void CutsceneInit(void);
void unk_6141c(u32 value, u16 bg);
void CutsceneSetBGCNT(u16 value, u16 bg);
void CutsceneUpdateBGPosition(u8 type, u16 bg, u16 value);
u16* CutsceneGetBGHOFSPointer(u16 bg);
u16* CutsceneGetBGVOFSPointer(u16 bg);
void CutsceneStartBackgroundScrolling(u32 param_1, u32 param_2, u16 bg);
void CutsceneUpdateBackgroundScrolling(struct CutsceneScrolling* pScrolling);
u8 CutsceneCheckBackgroundScrollingActive(u16 bg);
void CutsceneUpdateBackgroundsPosition(u8 updateScrolling);
void CutsceneUpdateScreenShake(u8 affectVertical, struct CutsceneScreenShake* pShake);
void CutsceneStartScreenShake(u32 param_1, u16 bg);
void CutsceneUpdateSpecialEffect(void);
void CutsceneStartSpriteEffect(u16 bldcnt, u8 bldy, u8 interval, u8 intensity);
void CutsceneStartBackgroundEffect(u16 bldcnt, u8 bldalphaL, u8 bldalphaH, u8 interval, u8 intensity);
void CutsceneReset(void);
void unk_61f0c(void);
void unk_61f28(void);
void unk_61f44(void);
void unk_61f60(void);
void unk_61fa0(void);
void unk_621d0(void);

#endif