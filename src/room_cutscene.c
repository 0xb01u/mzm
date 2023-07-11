#include "types.h"
#include "gba.h"

#include "transparency.h"
#include "room.h"
#include "scroll.h"
#include "connection.h"

#include "structs/bg_clip.h"
#include "structs/display.h"

void LoadRoomCutscene(u8 area, u8 room, u16 bgX, u16 bgY)
{
    gBg0XPosition = bgX;
    gBg0YPosition = bgY;
    gBg1XPosition = bgX;
    gBg1YPosition = bgY;
    gBg2XPosition = bgX;
    gBg2YPosition = bgY;

    gCurrentArea = area;
    gCurrentRoom = room - 1;

    RoomLoadEntry();
    RoomLoadTileset();
    RoomLoadBackgrounds();
    RoomRemoveNeverReformBlocksAndCollectedTanks();
    TransparencySetRoomEffectsTransparency();
    ScrollBG3();
    AnimatedGraphicsCheckPlayLightningEffect();
    RoomUpdateBackgroundsPosition();
    ConnectionLoadDoors();
    ConnectionCheckHatchLockEvents();

    RoomSetInitialTilemap(0);
    RoomSetInitialTilemap(1);
    RoomSetInitialTilemap(2);

    AnimatedGraphicsLoad();

    DmaTransfer(3, EWRAM_BASE + 0x7000, VRAM_BASE + 0x3000, 0x1000, 16);

    write16(REG_BG0CNT, gIoRegistersBackup.BG0CNT);
    write16(REG_BG3CNT, gIoRegistersBackup.BG3CNT);
}
