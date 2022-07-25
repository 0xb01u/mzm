#ifndef UNKNOWN_ITEM_BLOCK
#define UNKNOWN_ITEM_BLOCK

#include "../types.h"

#define UNKNOWN_ITEM_BLOCK_POSE_CHECK_ACTIVATE 0x9
#define UNKNOWN_ITEM_BLOCK_POSE_WAIT_FOR_PROJECITLE 0xB
#define UNKNOWN_ITEM_BLOCK_POSE_EXPLODING 0x67

void UnkownItemBlockChangeCCAA(u8 caa);
void UnkownItemBlock(void);
void UnkownItemBlockLight(void);

#endif /* UNKNOWN_ITEM_BLOCK */