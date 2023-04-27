#ifndef GBA_DISPLAY_H
#define GBA_DISPLAY_H

#include "types.h"

#define REG_DISPCNT (REG_BASE + 0x000)

#define REG_BG0CNT (REG_BASE + 0x008)
#define REG_BG1CNT (REG_BASE + 0x00A)
#define REG_BG2CNT (REG_BASE + 0x00C)
#define REG_BG3CNT (REG_BASE + 0x00E)

#define REG_BG0HOFS (REG_BASE + 0x010)
#define REG_BG0VOFS (REG_BASE + 0x012)

#define REG_BG1HOFS (REG_BASE + 0x014)
#define REG_BG1VOFS (REG_BASE + 0x016)

#define REG_BG2HOFS (REG_BASE + 0x018)
#define REG_BG2VOFS (REG_BASE + 0x01A)

#define REG_BG3HOFS (REG_BASE + 0x01C)
#define REG_BG3VOFS (REG_BASE + 0x01E)

#define REG_BG2PA (REG_BASE + 0x020)
#define REG_BG2PB (REG_BASE + 0x022)
#define REG_BG2PC (REG_BASE + 0x024)
#define REG_BG2PD (REG_BASE + 0x026)

#define REG_BG2X (REG_BASE + 0x028)
#define REG_BG2Y (REG_BASE + 0x02C)

#define REG_DISPSTAT (REG_BASE + 0x004)
#define REG_WIN0H (REG_BASE + 0x040)
#define REG_WIN1H (REG_BASE + 0x042)
#define REG_WIN0V (REG_BASE + 0x044)
#define REG_WIN1V (REG_BASE + 0x046)
#define REG_WININ (REG_BASE + 0x048)
#define REG_WINOUT (REG_BASE + 0x04A)
#define REG_MOSAIC (REG_BASE + 0x04C)
#define REG_BLDCNT (REG_BASE + 0x050)
#define REG_BLDALPHA (REG_BASE + 0x052)
#define REG_BLDY (REG_BASE + 0x054)

#define PLTT_BASE 0x05000000
#define PLTT_BG ((vu16 *)(PLTT_BASE + 0x00))

#define DCNT_MODE_1 1
#define DCNT_MODE_2 2
#define DCNT_MODE_3 3
#define DCNT_MODE_4 4
#define DCNT_MODE_5 5

#define DCNT_CGB (1 << 3)
#define DCNT_PAGE (1 << 4)
#define DCNT_OAM_HBL (1 << 5)
#define DCNT_OBJ_1D (1 << 6)
#define DCNT_BLANK (1 << 7)

#define DCNT_BG0 (1 << 8)
#define DCNT_BG1 (1 << 9)
#define DCNT_BG2 (1 << 10)
#define DCNT_BG3 (1 << 11)
#define DCNT_OBJ (1 << 12)
#define DCNT_WIN0 (1 << 13)
#define DCNT_WIN1 (1 << 14)
#define DCNT_WINOBJ (1 << 15)

#define DSTAT_IN_VBLANK (1 << 0)
#define DSTAT_IN_HBLANK (1 << 1)
#define DSTAT_VCOUNT_MATCH (1 << 2)
#define DSTAT_IF_VBLANK (1 << 3)
#define DSTAT_IF_HBLANK (1 << 4)
#define DSTAT_IF_VCOUNT (1 << 5)

#define BLDCNT_BG0_FIRST_TARGET_PIXEL 0x1
#define BLDCNT_BG1_FIRST_TARGET_PIXEL 0x2
#define BLDCNT_BG2_FIRST_TARGET_PIXEL 0x4
#define BLDCNT_BG3_FIRST_TARGET_PIXEL 0x8
#define BLDCNT_OBJ_FIRST_TARGET_PIXEL 0x10
#define BLDCNT_BACKDROP_FIRST_TARGET_PIXEL 0x20
#define BLDCNT_ALPHA_BLENDING_EFFECT 0x40
#define BLDCNT_BRIGHTNESS_INCREASE_EFFECT 0x80
#define BLDCNT_BG0_SECOND_TARGET_PIXEL 0x100
#define BLDCNT_BG1_SECOND_TARGET_PIXEL 0x200
#define BLDCNT_BG2_SECOND_TARGET_PIXEL 0x400
#define BLDCNT_BG3_SECOND_TARGET_PIXEL 0x800
#define BLDCNT_OBJ_SECOND_TARGET_PIXEL 0x1000
#define BLDCNT_BACKDROP_SECOND_TARGET_PIXEL 0x2000

#define WIN0_BG0 0x1
#define WIN0_BG1 0x2
#define WIN0_BG2 0x4
#define WIN0_BG3 0x8
#define WIN0_OBJ 0x10
#define WIN0_COLOR_EFFECT 0x20
#define WIN1_BG0 0x100
#define WIN1_BG1 0x200
#define WIN1_BG2 0x400
#define WIN1_BG3 0x800
#define WIN1_OBJ 0x1000
#define WIN1_COLOR_EFFECT 0x2000

#endif /* GBA_DISPLAY_H */
