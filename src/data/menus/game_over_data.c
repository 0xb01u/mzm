#include "data/menus/game_over_data.h"
#include "constants/game_over.h"
#include "constants/samus.h"
#include "macros.h"

const u16 sGameOverMenuPAL[16 * 5] = INCBIN_U16("data/menus/GameOver/Palette.pal");
const u32 sGameOverTextAndBackgroundGfx[2738] = INCBIN_U32("data/menus/GameOver/TextAndBackground.gfx.lz");
const u32 sGameOverTextPromptEnglishGfx[333] = INCBIN_U32("data/menus/GameOver/TextPromptEnglish.gfx.lz");
const u32 sGameOverTextPromptHiragnaGfx[1780] = INCBIN_U32("data/menus/GameOver/TextPromptHiragna.gfx.lz");
const u32 sGameOverBackgroundTileTable[370] = INCBIN_U32("data/menus/GameOver/Background.tt");
const u32 sGameOverTextTileTable[116] = INCBIN_U32("data/menus/GameOver/Text.tt");
const u32 sGameOver_454520[160] = INCBIN_U32("data/menus/GameOver/454520.tt");

const struct GameOverDynamicPalette sGameOverDynamicPalette_Empty = {
    .timer = 0,
    .enableFlags = 0,
    .currentPaletteRow = 0,
    .unk_4 = UCHAR_MAX,
    .palette = { 0, 0, 0, 0, 0, 0 },
    .timerLimit = 0,
    .unk_13 = 0
};

const u16 sGameOverSamusHeadXPositions[MAX_AMOUNT_OF_LANGUAGES] = {
    [LANGUAGE_JAPANESE] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_HIRAGANA] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_ENGLISH] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_GERMAN] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_FRENCH] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_ITALIAN] = BLOCK_SIZE * 3 + 8,
    [LANGUAGE_SPANISH] = BLOCK_SIZE * 3 + 8
};

const u16 sGameOverSamusHeadYPositions[2] = {
    [FALSE] = BLOCK_SIZE * 7,
    [TRUE] = BLOCK_SIZE * 8 + HALF_BLOCK_SIZE
};

const u8 sGameOverSamusHeadOAMIds[3][3] = {
    [SUIT_NORMAL] = {
        [SAMUS_CURSOR_ACTION_LOADING] = GAME_OVER_OAM_ID_SUIT_LOADING,
        [SAMUS_CURSOR_ACTION_MOVING] = GAME_OVER_OAM_ID_SUIT_MOVING,
        [SAMUS_CURSOR_ACTION_SELECTING] = GAME_OVER_OAM_ID_SUIT_SELECTING
    },
    [SUIT_FULLY_POWERED] = {
        [SAMUS_CURSOR_ACTION_LOADING] = GAME_OVER_OAM_ID_SUIT_LOADING,
        [SAMUS_CURSOR_ACTION_MOVING] = GAME_OVER_OAM_ID_SUIT_MOVING,
        [SAMUS_CURSOR_ACTION_SELECTING] = GAME_OVER_OAM_ID_SUIT_SELECTING
    },
    [SUIT_SUITLESS] = {
        [SAMUS_CURSOR_ACTION_LOADING] = GAME_OVER_OAM_ID_SUITLESS_LOADING,
        [SAMUS_CURSOR_ACTION_MOVING] = GAME_OVER_OAM_ID_SUITLESS_MOVING,
        [SAMUS_CURSOR_ACTION_SELECTING] = GAME_OVER_OAM_ID_SUITLESS_SELECTING
    }
};

// FIXME use symbols instead of hardcoded pointers
const struct OamArray sGameOverOam[9] = {
    [0] = {
        .pOam = (const struct FrameData*)0x8455794,
        .preAction = OAM_ARRAY_PRE_ACTION_NONE
    },
    [GAME_OVER_OAM_ID_SUIT_MOVING] = {
        .pOam = (const struct FrameData*)0x8455794,
        .preAction = OAM_ARRAY_PRE_ACTION_INCREMENT_ID_AFTER_END
    },
    [GAME_OVER_OAM_ID_SUIT_LOADING] = {
        .pOam = (const struct FrameData*)0x8455794,
        .preAction = OAM_ARRAY_PRE_ACTION_CHANGE_FRAME
    },
    [3] = {
        .pOam = (const struct FrameData*)0x84557cc,
        .preAction = OAM_ARRAY_PRE_ACTION_DECREMENT_ID_AT_BEGINNING
    },
    [GAME_OVER_OAM_ID_SUIT_SELECTING] = {
        .pOam = (const struct FrameData*)0x84557cc,
        .preAction = OAM_ARRAY_PRE_ACTION_LOOP_ON_LAST_FRAME
    },
    [GAME_OVER_OAM_ID_SUITLESS_MOVING] = {
        .pOam = (const struct FrameData*)0x8455abc,
        .preAction = OAM_ARRAY_PRE_ACTION_INCREMENT_ID_AFTER_END
    },
    [GAME_OVER_OAM_ID_SUITLESS_LOADING] = {
        .pOam = (const struct FrameData*)0x84559f4,
        .preAction = OAM_ARRAY_PRE_ACTION_CHANGE_FRAME
    },
    [7] = {
        .pOam = (const struct FrameData*)0x8455a1c,
        .preAction = OAM_ARRAY_PRE_ACTION_DECREMENT_ID_AT_BEGINNING
    },
    [GAME_OVER_OAM_ID_SUITLESS_SELECTING] = {
        .pOam = (const struct FrameData*)0x8455a1c,
        .preAction = OAM_ARRAY_PRE_ACTION_LOOP_ON_LAST_FRAME
    },
};

const u8 sTempArray_454818[0xac44] = INCBIN_U8("data/Blob_454818_45f45c.bin");