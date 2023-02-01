#ifndef GAME_OVER_DATA_H
#define GAME_OVER_DATA_H

#include "types.h"
#include "structs/game_over.h"
#include "structs/cutscene.h"

extern const u16 sGameOverMenuPAL[16 * 5];
extern const u32 sGameOverTextAndBgGFX[2738];
extern const u32 sGameOverTextPromptEnglishGFX[333];
extern const u32 sGameOverTextPromptHiragnaGFX[1780];
extern const u32 sGameOverBgTileTable[370];
extern const u32 sGameOver_454520[160];

extern const struct GameOverDynamicPalette sGameOverDynamicPalette_Empty;
extern const u16 sGameOverSamusHeadXPositions[7];
extern const u16 sGameOverSamusHeadYPositions[2];

extern const u8 sGameOverSamusHeadOAMIds[3][3];
extern const struct OamArray sGameOverOam[9];

#endif /* GAME_OVER_DATA_H */
