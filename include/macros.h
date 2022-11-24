#define behavior_to_block(behavior) (behavior - 0x10)
#define behavior_to_tank(behavior) (behavior - 0x34)
#define behavior_to_bldalpha(behavior) (behavior - 0x44)
#define behavior_to_door(behavior) (behavior - 0x7F)

#define bomb_chain_type_to_flag(type) (1 << type)

#define check_samus_turning() ((pData->direction ^ (KEY_RIGHT | KEY_LEFT)) & gButtonInput)
#define ARRAY_SIZE(a) (sizeof((a)) / sizeof((a)[0]))

#define PI 128
#define sin(a) (sSineTable[(a)])
#define cos(a) (sSineTable[(a) + PI / 2])

#define INCBIN(...) {0}
#define INCBIN_U8   INCBIN
#define INCBIN_U16  INCBIN
#define INCBIN_U32  INCBIN
#define INCBIN_S8   INCBIN
#define INCBIN_S16  INCBIN
#define INCBIN_S32  INCBIN