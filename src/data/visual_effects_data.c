#include "data/visual_effects_data.h"
#include "macros.h"

const u16 sEnvEffectOAM_RunningOnDustyGround_Frame0[4] = {
    0x1,
    0xf8, 0x1fc, 0x4159
};

const u16 sEnvEffectOAM_RunningOnDustyGround_Frame1[4] = {
    0x1,
    0xf8, 0x1fc, 0x415a
};

const u16 sEnvEffectOAM_RunningOnDustyGround_Frame2[4] = {
    0x1,
    0xf8, 0x1fc, 0x415b
};

const u16 sEnvEffectOAM_RunningOnDustyGround_Frame3[4] = {
    0x1,
    0xf5, 0x1fc, 0x415c
};

const u16 sEnvEffectOAM_RunningOnDustyGround_Frame4[4] = {
    0x1,
    0xf4, 0x1fc, 0x415d
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame0[7] = {
    0x2,
    0xf8, 0x1f8, 0x4159,
    0xf8, OBJ_X_FLIP | 0x0, 0x4159
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame1[13] = {
    0x4,
    0xf8, 0x1f6, 0x4159,
    0xfa, 0x1fa, 0x415b,
    0xf8, OBJ_X_FLIP | 0x2, 0x4159,
    0xfa, OBJ_X_FLIP | 0x1fe, 0x415b
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame2[13] = {
    0x4,
    0xf8, 0x1f2, 0x4159,
    0xfa, 0x1f8, 0x415b,
    0xf8, OBJ_X_FLIP | 0x6, 0x4159,
    0xfa, OBJ_X_FLIP | 0x0, 0x415b
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame3[13] = {
    0x4,
    0xf7, 0x1f0, 0x415a,
    0xf7, 0x1f5, 0x415c,
    0xf7, OBJ_X_FLIP | 0x8, 0x415a,
    0xf7, OBJ_X_FLIP | 0x3, 0x415c
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame4[13] = {
    0x4,
    0xf7, 0x1f0, 0x415b,
    0xf8, 0x1f4, 0x415d,
    0xf7, OBJ_X_FLIP | 0x8, 0x415b,
    0xf8, OBJ_X_FLIP | 0x4, 0x415d
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame5[7] = {
    0x2,
    0xf5, 0x1f0, 0x415c,
    0xf5, OBJ_X_FLIP | 0x8, 0x415c
};

const u16 sEnvEffectOAM_LandingOnDustyGround_Frame6[7] = {
    0x2,
    0xf4, 0x1f0, 0x415d,
    0xf4, OBJ_X_FLIP | 0x8, 0x415d
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame0[7] = {
    0x2,
    0xf8, 0x1f8, 0x3159,
    0xf8, OBJ_X_FLIP | 0x0, 0x3159
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame1[13] = {
    0x4,
    0xfa, 0x1f6, 0x3159,
    0xfb, 0x1fa, 0x315b,
    0xfa, OBJ_X_FLIP | 0x2, 0x3159,
    0xfb, OBJ_X_FLIP | 0x1fe, 0x315b
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame2[22] = {
    0x7,
    0xf8, 0x1fc, 0x3159,
    0xf9, 0x1f2, 0x3159,
    0xfa, 0x1f6, 0x315a,
    0xfc, 0x1f8, 0x315b,
    0xf9, OBJ_X_FLIP | 0x6, 0x3159,
    0xfa, OBJ_X_FLIP | 0x2, 0x315a,
    0xfc, OBJ_X_FLIP | 0x0, 0x315b
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame3[25] = {
    0x8,
    0xf6, 0x1fc, 0x315a,
    0xf5, 0x1f1, 0x3159,
    0xf9, 0x1f2, 0x315a,
    0xfc, 0x1f5, 0x315b,
    0xf5, OBJ_X_FLIP | 0x7, 0x3159,
    0xf9, OBJ_X_FLIP | 0x6, 0x315a,
    0xfc, OBJ_X_FLIP | 0x3, 0x315b,
    0xfb, 0x1fc, 0x315b
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame4[25] = {
    0x8,
    0xf5, 0x1fc, 0x315b,
    0xf3, 0x1f1, 0x315a,
    0xf9, 0x1f2, 0x315b,
    0xf9, 0x1f4, 0x315c,
    0xf3, OBJ_X_FLIP | 0x7, 0x315a,
    0xf9, OBJ_X_FLIP | 0x6, 0x315b,
    0xf9, OBJ_X_FLIP | 0x4, 0x315c,
    0xf7, 0x1fc, 0x315c
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame5[25] = {
    0x8,
    0xf3, 0x1fc, 0x315c,
    0xf2, 0x1f1, 0x315b,
    0xf5, 0x1f2, 0x315c,
    0xfa, 0x1f5, 0x315d,
    0xf2, OBJ_X_FLIP | 0x7, 0x315b,
    0xf5, OBJ_X_FLIP | 0x6, 0x315c,
    0xfa, OBJ_X_FLIP | 0x3, 0x315d,
    0xf7, 0x1fc, 0x315d
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame6[16] = {
    0x5,
    0xf1, 0x1fc, 0x315d,
    0xf1, 0x1f1, 0x315c,
    0xf5, 0x1f3, 0x315d,
    0xf1, OBJ_X_FLIP | 0x7, 0x315c,
    0xf5, OBJ_X_FLIP | 0x5, 0x315d
};

const u16 sEnvEffectOAM_TakingDamageInLava_Frame7[7] = {
    0x2,
    0xf1, 0x1f1, 0x315d,
    0xf1, OBJ_X_FLIP | 0x7, 0x315d
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame0[7] = {
    0x2,
    0xf8, 0x1f8, 0x5159,
    0xf8, OBJ_X_FLIP | 0x0, 0x5159
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame1[13] = {
    0x4,
    0xfa, 0x1f6, 0x5159,
    0xfb, 0x1fa, 0x515b,
    0xfa, OBJ_X_FLIP | 0x2, 0x5159,
    0xfb, OBJ_X_FLIP | 0x1fe, 0x515b
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame2[22] = {
    0x7,
    0xf8, 0x1fc, 0x5159,
    0xf9, 0x1f2, 0x5159,
    0xfa, 0x1f6, 0x515a,
    0xfc, 0x1f8, 0x515b,
    0xf9, OBJ_X_FLIP | 0x6, 0x5159,
    0xfa, OBJ_X_FLIP | 0x2, 0x515a,
    0xfc, OBJ_X_FLIP | 0x0, 0x515b
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame3[25] = {
    0x8,
    0xf6, 0x1fc, 0x515a,
    0xf5, 0x1f1, 0x5159,
    0xf9, 0x1f2, 0x515a,
    0xfc, 0x1f5, 0x515b,
    0xf5, OBJ_X_FLIP | 0x7, 0x5159,
    0xf9, OBJ_X_FLIP | 0x6, 0x515a,
    0xfc, OBJ_X_FLIP | 0x3, 0x515b,
    0xfb, 0x1fc, 0x515b
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame4[25] = {
    0x8,
    0xf5, 0x1fc, 0x515b,
    0xf3, 0x1f1, 0x515a,
    0xf9, 0x1f2, 0x515b,
    0xf9, 0x1f4, 0x515c,
    0xf3, OBJ_X_FLIP | 0x7, 0x515a,
    0xf9, OBJ_X_FLIP | 0x6, 0x515b,
    0xf9, OBJ_X_FLIP | 0x4, 0x515c,
    0xf7, 0x1fc, 0x515c
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame5[25] = {
    0x8,
    0xf3, 0x1fc, 0x515c,
    0xf2, 0x1f1, 0x515b,
    0xf5, 0x1f2, 0x515c,
    0xfa, 0x1f5, 0x515d,
    0xf2, OBJ_X_FLIP | 0x7, 0x515b,
    0xf5, OBJ_X_FLIP | 0x6, 0x515c,
    0xfa, OBJ_X_FLIP | 0x3, 0x515d,
    0xf7, 0x1fc, 0x515d
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame6[16] = {
    0x5,
    0xf1, 0x1fc, 0x515d,
    0xf1, 0x1f1, 0x515c,
    0xf5, 0x1f3, 0x515d,
    0xf1, OBJ_X_FLIP | 0x7, 0x515c,
    0xf5, OBJ_X_FLIP | 0x5, 0x515d
};

const u16 sEnvEffectOAM_TakingDamageInAcid_Frame7[7] = {
    0x2,
    0xf1, 0x1f1, 0x515d,
    0xf1, OBJ_X_FLIP | 0x7, 0x515d
};

const u16 sEnvEffectOAM_RunningOnWetGround_Frame0[4] = {
    0x1,
    0xf8, 0x1fc, 0x409d
};

const u16 sEnvEffectOAM_RunningOnWetGround_Frame1[4] = {
    0x1,
    0xf8, 0x1fc, 0x409e
};

const u16 sEnvEffectOAM_RunningOnWetGround_Frame2[4] = {
    0x1,
    0xf8, 0x1fc, 0x409f
};

const u16 sEnvEffectOAM_RunningOnWetGround_Frame3[4] = {
    0x1,
    0xf8, 0x1fc, 0x40bd
};

const u16 sEnvEffectOAM_RunningOnWetGround_Frame4[4] = {
    0x1,
    0xf8, 0x1fc, 0x40be
};

const u16 sEnvEffectOAM_LandingOnWetGround_Frame0[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x409d,
    0xf8, 0x0, 0x409d
};

const u16 sEnvEffectOAM_LandingOnWetGround_Frame1[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x409e,
    0xf8, 0x1, 0x409e
};

const u16 sEnvEffectOAM_LandingOnWetGround_Frame2[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x409f,
    0xf8, 0x1, 0x409f
};

const u16 sEnvEffectOAM_LandingOnWetGround_Frame3[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x40bd,
    0xf8, 0x1, 0x40bd
};

const u16 sEnvEffectOAM_LandingOnWetGround_Frame4[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x40be,
    0xf8, 0x0, 0x40be
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x4188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x415f
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x4188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x415f,
    0xee, 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x409d,
    0xfa, OBJ_X_FLIP | 0x2, 0x409d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x415f,
    0xea, 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x409d,
    0xf9, OBJ_X_FLIP | 0x3, 0x409d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x415f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x409e,
    0xf9, OBJ_X_FLIP | 0x4, 0x409e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x415f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x418c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x415e,
    0xf8, 0x1fc, 0x409d
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x409e,
    0xfa, OBJ_X_FLIP | 0x4, 0x409e,
    0xfa, 0x1fc, 0x409d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x415f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418e,
    0xfa, 0x1f4, 0x409f,
    0xfa, OBJ_X_FLIP | 0x4, 0x409f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x415f,
    0xf9, 0x1fc, 0x40bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x418f
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x41d4,
    0xfa, 0x0, 0x415f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x415f,
    0xfa, 0x1f5, 0x40bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x40bd,
    0xf8, 0x1fc, 0x40be
};

const u16 sEnvEffectOAM_GoingOutOfWater_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x40be,
    0xf8, OBJ_X_FLIP | 0x1, 0x40be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x4187,
    0xf7, 0x1fc, 0x41a7
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame0[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x409d,
    0xf9, 0x0, 0x409d
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x409e,
    0xf9, 0x1, 0x409e,
    0xf6, 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x409f,
    0xf8, 0x1, 0x409f,
    0xf3, 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x40bd,
    0xf8, 0x1, 0x40bd,
    0xf1, 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x40be,
    0xf8, 0x0, 0x40be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x415e
};

const u16 sEnvEffectOAM_RunningIntoWater_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x40be,
    0xf9, 0x0, 0x40be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x415e,
    0xf5, 0x1f8, 0x41a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x41a7
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x3188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x315f
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x3188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x315f,
    0xee, 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x309d,
    0xfa, OBJ_X_FLIP | 0x2, 0x309d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x315f,
    0xea, 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x309d,
    0xf9, OBJ_X_FLIP | 0x3, 0x309d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x315f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x309e,
    0xf9, OBJ_X_FLIP | 0x4, 0x309e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x315f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x318c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x315e,
    0xf8, 0x1fc, 0x309d
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x309e,
    0xfa, OBJ_X_FLIP | 0x4, 0x309e,
    0xfa, 0x1fc, 0x309d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x315f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318e,
    0xfa, 0x1f4, 0x309f,
    0xfa, OBJ_X_FLIP | 0x4, 0x309f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x315f,
    0xf9, 0x1fc, 0x30bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x318f
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x31d4,
    0xfa, 0x0, 0x315f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x315f,
    0xfa, 0x1f5, 0x30bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x30bd,
    0xf8, 0x1fc, 0x30be
};

const u16 sEnvEffectOAM_GoingOutOfLava_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x30be,
    0xf8, OBJ_X_FLIP | 0x1, 0x30be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x3187,
    0xf7, 0x1fc, 0x31a7
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame0[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x309d,
    0xf9, 0x0, 0x309d
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x309e,
    0xf9, 0x1, 0x309e,
    0xf6, 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x309f,
    0xf8, 0x1, 0x309f,
    0xf3, 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x30bd,
    0xf8, 0x1, 0x30bd,
    0xf1, 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x30be,
    0xf8, 0x0, 0x30be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x315e
};

const u16 sEnvEffectOAM_RunningIntoLava_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x30be,
    0xf9, 0x0, 0x30be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x315e,
    0xf5, 0x1f8, 0x31a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x31a7
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x5188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x515f
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x5188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x515f,
    0xee, 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x509d,
    0xfa, OBJ_X_FLIP | 0x2, 0x509d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x515f,
    0xea, 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x509d,
    0xf9, OBJ_X_FLIP | 0x3, 0x509d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x515f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x509e,
    0xf9, OBJ_X_FLIP | 0x4, 0x509e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x515f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x518c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x515e,
    0xf8, 0x1fc, 0x509d
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x509e,
    0xfa, OBJ_X_FLIP | 0x4, 0x509e,
    0xfa, 0x1fc, 0x509d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x515f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518e,
    0xfa, 0x1f4, 0x509f,
    0xfa, OBJ_X_FLIP | 0x4, 0x509f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x515f,
    0xf9, 0x1fc, 0x50bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x518f
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x51d4,
    0xfa, 0x0, 0x515f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x515f,
    0xfa, 0x1f5, 0x50bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x50bd,
    0xf8, 0x1fc, 0x50be
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x50be,
    0xf8, OBJ_X_FLIP | 0x1, 0x50be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x5187,
    0xf7, 0x1fc, 0x51a7
};

const u16 sEnvEffectOAM_GoingOutOfAcid_Frame9[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x509d,
    0xf9, 0x0, 0x509d
};

const u16 sEnvEffectOAM_RunningIntoAcid_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x509e,
    0xf9, 0x1, 0x509e,
    0xf6, 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_RunningIntoAcid_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x509f,
    0xf8, 0x1, 0x509f,
    0xf3, 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_RunningIntoAcid_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x50bd,
    0xf8, 0x1, 0x50bd,
    0xf1, 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_RunningIntoAcid_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x50be,
    0xf8, 0x0, 0x50be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x515e
};

const u16 sEnvEffectOAM_RunningIntoAcid_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x50be,
    0xf9, 0x0, 0x50be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x515e,
    0xf5, 0x1f8, 0x51a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x51a7
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame0[7] = {
    0x2,
    0xfa, 0x1fc, 0x417d,
    0xfa, 0x1f8, 0x417e
};

const u16 sEnvEffectOAM_FrameUnused[10] = {
    0x3,
    0xf8, 0x1f5, 0x4179,
    0xf9, 0x0, 0x417e,
    0xfb, 0x1fb, 0x417a
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame1[13] = {
    0x4,
    0xf6, 0x1f4, 0x417a,
    0xf6, 0x1, 0x4179,
    0xf8, 0x1fc, 0x417b,
    0xfa, 0x1f7, 0x4179
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame2[13] = {
    0x4,
    0xf4, 0x1f4, 0x417b,
    0xf5, 0x2, 0x417a,
    0xf6, 0x1fb, 0x417c,
    0xf6, 0x1f7, 0x417a
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame3[10] = {
    0x3,
    0xf3, 0x3, 0x417b,
    0xf2, 0x1f3, 0x417c,
    0xf3, 0x1f8, 0x417b
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame4[7] = {
    0x2,
    0xf0, 0x3, 0x417c,
    0xf1, 0x1f8, 0x417c
};

const u16 sEnvEffectOAM_LandingOnBubblyGround_Frame5[7] = {
    0x2,
    0xee, 0x2, 0x417c,
    0xf0, 0x1f8, 0x417c
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame0[4] = {
    0x1,
    0xfc, 0x1fb, 0x4179
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame1[7] = {
    0x2,
    0xf9, 0x1fc, 0x417a,
    0xfe, 0x1fc, 0x4179
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame2[7] = {
    0x2,
    0xf7, 0x1fc, 0x417b,
    0xfd, 0x1fc, 0x417e
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame3[7] = {
    0x2,
    0xf4, 0x1fb, 0x417c,
    0xfb, 0x1fc, 0x4179
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame4[7] = {
    0x2,
    0xf9, 0x1fe, 0x417a,
    0xf2, 0x1fb, 0x417c
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame5[4] = {
    0x1,
    0xf7, 0x1fe, 0x417b
};

const u16 sEnvEffectOAM_BreathingBubbles_Frame6[4] = {
    0x1,
    0xf4, 0x1fd, 0x417c
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame0[4] = {
    0x1,
    0xf8, OBJ_SIZE_16x16 | 0x1f8, 0x4188
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame2[4] = {
    0x1,
    0xf7, OBJ_SIZE_16x16 | 0x1f8, 0x418a
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame4[4] = {
    0x1,
    0xf6, OBJ_SIZE_16x16 | 0x1f8, 0x418c
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame6[4] = {
    0x1,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, 0x418e
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame8[10] = {
    0x3,
    0xf3, OBJ_X_FLIP | 0x1fd, 0x418f,
    0xf7, 0x1f9, 0x418f,
    0xfb, OBJ_Y_FLIP | 0x1fe, 0x418f
};

const u16 sEnvEffectOAM_RunningOnVeryDustyGround_Frame10[7] = {
    0x2,
    0xf5, OBJ_Y_FLIP | 0x1fb, 0x41a7,
    0xfa, 0x1fd, 0x41a7
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame0[7] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f8, 0x4188,
    0xf6, OBJ_SIZE_16x16 | 0x1f3, 0x4188
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame2[7] = {
    0x2,
    0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x4188,
    0xf5, OBJ_SIZE_16x16 | 0x1f0, 0x4188
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame4[10] = {
    0x3,
    0xf6, OBJ_SIZE_16x16 | 0x1fb, 0x418a,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1ef, 0x4188,
    0xf8, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x0, 0x4188
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame6[10] = {
    0x3,
    0xf1, OBJ_SIZE_16x16 | 0x1fc, 0x418c,
    0xee, OBJ_SIZE_16x16 | 0x1ec, 0x418a,
    0xf3, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x2, 0x4188
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame8[10] = {
    0x3,
    0xf0, OBJ_SIZE_16x16 | 0x1fd, 0x418e,
    0xec, OBJ_SIZE_16x16 | 0x1ed, 0x418c,
    0xf0, OBJ_SIZE_16x16 | 0x3, 0x418a
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame10[10] = {
    0x3,
    0xe9, OBJ_SIZE_16x16 | 0x1ee, 0x418e,
    0xef, OBJ_SIZE_16x16 | 0x4, 0x418c,
    0xed, OBJ_SIZE_16x16 | 0x1fd, 0x41d4
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame12[10] = {
    0x3,
    0xe9, OBJ_SIZE_16x16 | 0x3, 0x418e,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1fd, 0x4187,
    0xe6, OBJ_SIZE_16x16 | 0x1f2, 0x41d4
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame14[7] = {
    0x2,
    OBJ_SHAPE_VERTICAL | 0xe4, 0x1f6, 0x4187,
    0xe6, OBJ_SIZE_16x16 | 0x2, 0x41d4
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame16[4] = {
    0x1,
    OBJ_SHAPE_VERTICAL | 0xe3, 0x4, 0x4187
};

const u16 sEnvEffectOAM_LandingOnVeryDustyGround_Frame1[4] = {
    0x1,
    0xfc, 0x1fc, 0x4140
};

const struct FrameData sEnvEffectOAM_RunningOnDustyGround[6] = {
    sEnvEffectOAM_RunningOnDustyGround_Frame0,
    4,
    sEnvEffectOAM_RunningOnDustyGround_Frame1,
    4,
    sEnvEffectOAM_RunningOnDustyGround_Frame2,
    4,
    sEnvEffectOAM_RunningOnDustyGround_Frame3,
    4,
    sEnvEffectOAM_RunningOnDustyGround_Frame4,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_LandingOnDustyGround[8] = {
    sEnvEffectOAM_LandingOnDustyGround_Frame0,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame1,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame2,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame3,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame4,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame5,
    3,
    sEnvEffectOAM_LandingOnDustyGround_Frame6,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_TakingDamageInLava[9] = {
    sEnvEffectOAM_TakingDamageInLava_Frame0,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame1,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame2,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame3,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame4,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame5,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame6,
    3,
    sEnvEffectOAM_TakingDamageInLava_Frame7,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_TakingDamageInAcid[9] = {
    sEnvEffectOAM_TakingDamageInAcid_Frame0,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame1,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame2,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame3,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame4,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame5,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame6,
    3,
    sEnvEffectOAM_TakingDamageInAcid_Frame7,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_RunningOnWetGround[6] = {
    sEnvEffectOAM_RunningOnWetGround_Frame0,
    4,
    sEnvEffectOAM_RunningOnWetGround_Frame1,
    4,
    sEnvEffectOAM_RunningOnWetGround_Frame2,
    4,
    sEnvEffectOAM_RunningOnWetGround_Frame3,
    4,
    sEnvEffectOAM_RunningOnWetGround_Frame4,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_LandingOnWetGround[6] = {
    sEnvEffectOAM_LandingOnWetGround_Frame0,
    4,
    sEnvEffectOAM_LandingOnWetGround_Frame1,
    4,
    sEnvEffectOAM_LandingOnWetGround_Frame2,
    4,
    sEnvEffectOAM_LandingOnWetGround_Frame3,
    4,
    sEnvEffectOAM_LandingOnWetGround_Frame4,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_GoingOutOfWater[10] = {
    sEnvEffectOAM_GoingOutOfWater_Frame0,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame1,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame2,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame3,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame4,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame5,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame6,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame7,
    3,
    sEnvEffectOAM_GoingOutOfWater_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_RunningIntoWater[7] = {
    sEnvEffectOAM_RunningIntoWater_Frame0,
    4,
    sEnvEffectOAM_RunningIntoWater_Frame1,
    4,
    sEnvEffectOAM_RunningIntoWater_Frame2,
    4,
    sEnvEffectOAM_RunningIntoWater_Frame3,
    4,
    sEnvEffectOAM_RunningIntoWater_Frame4,
    4,
    sEnvEffectOAM_RunningIntoWater_Frame5,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_GoingOutOfLava[10] = {
    sEnvEffectOAM_GoingOutOfLava_Frame0,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame1,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame2,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame3,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame4,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame5,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame6,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame7,
    3,
    sEnvEffectOAM_GoingOutOfLava_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_RunningIntoLava[7] = {
    sEnvEffectOAM_RunningIntoLava_Frame0,
    4,
    sEnvEffectOAM_RunningIntoLava_Frame1,
    4,
    sEnvEffectOAM_RunningIntoLava_Frame2,
    4,
    sEnvEffectOAM_RunningIntoLava_Frame3,
    4,
    sEnvEffectOAM_RunningIntoLava_Frame4,
    4,
    sEnvEffectOAM_RunningIntoLava_Frame5,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_GoingOutOfAcid[11] = {
    sEnvEffectOAM_GoingOutOfAcid_Frame0,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame1,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame2,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame3,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame4,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame5,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame6,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame7,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame8,
    3,
    sEnvEffectOAM_GoingOutOfAcid_Frame9,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_RunningIntoAcid[7] = {
    sEnvEffectOAM_GoingOutOfAcid_Frame0,
    4,
    sEnvEffectOAM_RunningIntoAcid_Frame1,
    4,
    sEnvEffectOAM_RunningIntoAcid_Frame2,
    4,
    sEnvEffectOAM_RunningIntoAcid_Frame3,
    4,
    sEnvEffectOAM_RunningIntoAcid_Frame4,
    4,
    sEnvEffectOAM_RunningIntoAcid_Frame5,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_LandingOnBubblyGround[7] = {
    sEnvEffectOAM_LandingOnBubblyGround_Frame0,
    5,
    sEnvEffectOAM_LandingOnBubblyGround_Frame1,
    5,
    sEnvEffectOAM_LandingOnBubblyGround_Frame2,
    5,
    sEnvEffectOAM_LandingOnBubblyGround_Frame3,
    4,
    sEnvEffectOAM_LandingOnBubblyGround_Frame4,
    4,
    sEnvEffectOAM_LandingOnBubblyGround_Frame5,
    4,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_BreathingBubbles[8] = {
    sEnvEffectOAM_BreathingBubbles_Frame0,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame1,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame2,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame3,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame4,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame5,
    8,
    sEnvEffectOAM_BreathingBubbles_Frame6,
    8,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_RunningOnVeryDustyGround[12] = {
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame0,
    3,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame2,
    3,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame4,
    3,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame6,
    3,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame8,
    3,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame10,
    3,
    NULL,
    0
};

const struct FrameData sEnvEffectOAM_LandingOnVeryDustyGround[18] = {
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame0,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame2,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame4,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame6,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame8,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame10,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame12,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame14,
    2,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame1,
    1,
    sEnvEffectOAM_LandingOnVeryDustyGround_Frame16,
    2,
    NULL,
    0
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x4188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x415f
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x4188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x415f,
    0xee, 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x409d,
    0xfa, OBJ_X_FLIP | 0x2, 0x409d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x415f
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x409d,
    0xf9, OBJ_X_FLIP | 0x3, 0x409d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x415f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x409e,
    0xf9, OBJ_X_FLIP | 0x4, 0x409e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x415f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x418c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x415e,
    0xf8, 0x1fc, 0x409d
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x409e,
    0xfa, OBJ_X_FLIP | 0x4, 0x409e,
    0xfa, 0x1fc, 0x409d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x415f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x418e,
    0xfa, 0x1f4, 0x409f,
    0xfa, OBJ_X_FLIP | 0x4, 0x409f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x415f,
    0xf9, 0x1fc, 0x40bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x418f
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x41d4,
    0xfa, 0x0, 0x415f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x415f,
    0xfa, 0x1f5, 0x40bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x40bd,
    0xf8, 0x1fc, 0x40be
};

const u16 sParticleSpriteSplashWaterBigOAM_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x40be,
    0xf8, OBJ_X_FLIP | 0x1, 0x40be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x4187,
    0xf7, 0x1fc, 0x41a7
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame2[25] = {
    0x8,
    0xf9, 0x1f3, 0x409d,
    0xf9, OBJ_X_FLIP | 0x5, 0x409d,
    0xfe, OBJ_SIZE_16x16 | 0x1f5, 0x418a,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f9, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1ff, 0x415f,
    0xea, 0x1fa, 0x415e,
    0xea, OBJ_X_FLIP | 0x1ff, 0x415e
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame3[25] = {
    0x8,
    0xf8, 0x1f2, 0x409d,
    0xf8, OBJ_X_FLIP | 0x6, 0x409d,
    0xff, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x418a,
    0xfe, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x418a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x415f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f8, 0x415e,
    0xe7, OBJ_Y_FLIP | 0x0, 0x415e
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame4[28] = {
    0x9,
    0xf8, 0x1f0, 0x409e,
    0xf8, OBJ_X_FLIP | 0x8, 0x409e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f6, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x2, 0x415f,
    0x1, OBJ_SIZE_16x16 | 0x1f2, 0x418c,
    0x0, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x418c,
    0xea, OBJ_X_FLIP | 0x1f7, 0x415e,
    0xf8, 0x1fc, 0x409d,
    0xea, 0x1, 0x415e
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame5[28] = {
    0x9,
    0xf9, 0x1ef, 0x409e,
    0xf9, OBJ_X_FLIP | 0x9, 0x409e,
    0xfa, 0x1fc, 0x409d,
    0x4, OBJ_SIZE_16x16 | 0x1f1, 0x418e,
    0x1, OBJ_SIZE_16x16 | 0x0, 0x418e,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1f5, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x3, 0x415f,
    0xf2, OBJ_X_FLIP | 0x1f4, 0x415e,
    0xf2, 0x4, 0x415e
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame6[25] = {
    0x8,
    0x6, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ef, 0x418e,
    0x3, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1, 0x418e,
    0xfa, 0x1ef, 0x409f,
    0xfa, OBJ_X_FLIP | 0x9, 0x409f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x1f4, 0x415f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x4, 0x415f,
    0xf9, 0x1fc, 0x40bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x418f
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame7[22] = {
    0x7,
    0x8, OBJ_SIZE_16x16 | 0x1ef, 0x41d4,
    0xfa, 0x1ef, 0x40bd,
    0xfa, OBJ_X_FLIP | 0x9, 0x40bd,
    0xfa, 0x3, 0x415f,
    0xfa, OBJ_X_FLIP | 0x1f5, 0x415f,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, 0x41d4,
    0xf8, 0x1fc, 0x40be
};

const u16 sParticleSpriteSplashWaterHugeOAM_Frame8[16] = {
    0x5,
    0xf8, 0x1f2, 0x40be,
    0xf8, OBJ_X_FLIP | 0x6, 0x40be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1f2, 0x4187,
    OBJ_SHAPE_VERTICAL | 0x7, OBJ_X_FLIP | 0x8, 0x4187,
    0xf7, 0x1fc, 0x41a7
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame0[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x409d,
    0xf9, 0x0, 0x409d
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x409e,
    0xf9, 0x1, 0x409e,
    0xf6, 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x409f,
    0xf8, 0x1, 0x409f,
    0xf3, 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x40bd,
    0xf8, 0x1, 0x40bd,
    0xf1, 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x40be,
    0xf8, 0x0, 0x40be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x415e
};

const u16 sParticleSpriteSplashWaterSmallOAM_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x40be,
    0xf9, 0x0, 0x40be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x415e,
    0xf5, 0x1f8, 0x41a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x41a7
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x3188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x315f
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x3188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x315f,
    0xee, 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x309d,
    0xfa, OBJ_X_FLIP | 0x2, 0x309d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x315f,
    0xea, 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x309d,
    0xf9, OBJ_X_FLIP | 0x3, 0x309d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x315f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x309e,
    0xf9, OBJ_X_FLIP | 0x4, 0x309e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x315f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x318c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x315e,
    0xf8, 0x1fc, 0x309d
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x309e,
    0xfa, OBJ_X_FLIP | 0x4, 0x309e,
    0xfa, 0x1fc, 0x309d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x315f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x318e,
    0xfa, 0x1f4, 0x309f,
    0xfa, OBJ_X_FLIP | 0x4, 0x309f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x315f,
    0xf9, 0x1fc, 0x30bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x318f
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x31d4,
    0xfa, 0x0, 0x315f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x315f,
    0xfa, 0x1f5, 0x30bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x30bd,
    0xf8, 0x1fc, 0x30be
};

const u16 sParticleSpriteSplashLavaBigOAM_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x30be,
    0xf8, OBJ_X_FLIP | 0x1, 0x30be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x3187,
    0xf7, 0x1fc, 0x31a7
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame2[25] = {
    0x8,
    0xf9, 0x1f3, 0x309d,
    0xf9, OBJ_X_FLIP | 0x5, 0x309d,
    0xfe, OBJ_SIZE_16x16 | 0x1f5, 0x318a,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f9, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1ff, 0x315f,
    0xea, 0x1fa, 0x315e,
    0xea, OBJ_X_FLIP | 0x1ff, 0x315e
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame3[25] = {
    0x8,
    0xf8, 0x1f2, 0x309d,
    0xf8, OBJ_X_FLIP | 0x6, 0x309d,
    0xff, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x318a,
    0xfe, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x318a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x315f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f8, 0x315e,
    0xe7, OBJ_Y_FLIP | 0x0, 0x315e
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame4[28] = {
    0x9,
    0xf8, 0x1f0, 0x309e,
    0xf8, OBJ_X_FLIP | 0x8, 0x309e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f6, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x2, 0x315f,
    0x1, OBJ_SIZE_16x16 | 0x1f2, 0x318c,
    0x0, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x318c,
    0xea, OBJ_X_FLIP | 0x1f7, 0x315e,
    0xf8, 0x1fc, 0x309d,
    0xea, 0x1, 0x315e
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame5[28] = {
    0x9,
    0xf9, 0x1ef, 0x309e,
    0xf9, OBJ_X_FLIP | 0x9, 0x309e,
    0xfa, 0x1fc, 0x309d,
    0x4, OBJ_SIZE_16x16 | 0x1f1, 0x318e,
    0x1, OBJ_SIZE_16x16 | 0x0, 0x318e,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1f5, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x3, 0x315f,
    0xf2, OBJ_X_FLIP | 0x1f4, 0x315e,
    0xf2, 0x4, 0x315e
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame6[25] = {
    0x8,
    0x6, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ef, 0x318e,
    0x3, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1, 0x318e,
    0xfa, 0x1ef, 0x309f,
    0xfa, OBJ_X_FLIP | 0x9, 0x309f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x1f4, 0x315f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x4, 0x315f,
    0xf9, 0x1fc, 0x30bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x318f
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame7[22] = {
    0x7,
    0x8, OBJ_SIZE_16x16 | 0x1ef, 0x31d4,
    0xfa, 0x1ef, 0x30bd,
    0xfa, OBJ_X_FLIP | 0x9, 0x30bd,
    0xfa, 0x3, 0x315f,
    0xfa, OBJ_X_FLIP | 0x1f5, 0x315f,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, 0x31d4,
    0xf8, 0x1fc, 0x30be
};

const u16 sParticleSpriteSplashLavaHugeOAM_Frame8[16] = {
    0x5,
    0xf8, 0x1f2, 0x30be,
    0xf8, OBJ_X_FLIP | 0x6, 0x30be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1f2, 0x3187,
    OBJ_SHAPE_VERTICAL | 0x7, OBJ_X_FLIP | 0x8, 0x3187,
    0xf7, 0x1fc, 0x31a7
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame0[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x309d,
    0xf9, 0x0, 0x309d
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x309e,
    0xf9, 0x1, 0x309e,
    0xf6, 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x309f,
    0xf8, 0x1, 0x309f,
    0xf3, 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x30bd,
    0xf8, 0x1, 0x30bd,
    0xf1, 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x30be,
    0xf8, 0x0, 0x30be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x315e
};

const u16 sParticleSpriteSplashLavaSmallOAM_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x30be,
    0xf9, 0x0, 0x30be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x315e,
    0xf5, 0x1f8, 0x31a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x31a7
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame0[10] = {
    0x3,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x5188,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1fb, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x1fd, 0x515f
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame1[13] = {
    0x4,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x5188,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x1fa, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1fe, 0x515f,
    0xee, 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame2[19] = {
    0x6,
    0xfa, 0x1f6, 0x509d,
    0xfa, OBJ_X_FLIP | 0x2, 0x509d,
    0xfe, OBJ_SIZE_16x16 | 0x1f8, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x515f,
    0xea, 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame3[19] = {
    0x6,
    0xf9, 0x1f5, 0x509d,
    0xf9, OBJ_X_FLIP | 0x3, 0x509d,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x515f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame4[22] = {
    0x7,
    0xf9, 0x1f4, 0x509e,
    0xf9, OBJ_X_FLIP | 0x4, 0x509e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x0, 0x515f,
    0x2, OBJ_SIZE_16x16 | 0x1f8, 0x518c,
    0xea, OBJ_X_FLIP | 0x1fc, 0x515e,
    0xf8, 0x1fc, 0x509d
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame5[22] = {
    0x7,
    0xfa, 0x1f4, 0x509e,
    0xfa, OBJ_X_FLIP | 0x4, 0x509e,
    0xfa, 0x1fc, 0x509d,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518e,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x0, 0x515f,
    0xf2, OBJ_X_FLIP | 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame6[22] = {
    0x7,
    0x6, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1f8, 0x518e,
    0xfa, 0x1f4, 0x509f,
    0xfa, OBJ_X_FLIP | 0x4, 0x509f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x0, 0x515f,
    0xf9, 0x1fc, 0x50bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x518f
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame7[19] = {
    0x6,
    0x8, OBJ_SIZE_16x16 | 0x1f8, 0x51d4,
    0xfa, 0x0, 0x515f,
    0xfa, OBJ_X_FLIP | 0x1f8, 0x515f,
    0xfa, 0x1f5, 0x50bd,
    0xfa, OBJ_X_FLIP | 0x3, 0x50bd,
    0xf8, 0x1fc, 0x50be
};

const u16 sParticleSpriteSplashAcidBigOAM_Frame8[13] = {
    0x4,
    0xf8, 0x1f7, 0x50be,
    0xf8, OBJ_X_FLIP | 0x1, 0x50be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1fc, 0x5187,
    0xf7, 0x1fc, 0x51a7
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame2[25] = {
    0x8,
    0xf9, 0x1f3, 0x509d,
    0xf9, OBJ_X_FLIP | 0x5, 0x509d,
    0xfe, OBJ_SIZE_16x16 | 0x1f5, 0x518a,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x1f9, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1ff, 0x515f,
    0xea, 0x1fa, 0x515e,
    0xea, OBJ_X_FLIP | 0x1ff, 0x515e
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame3[25] = {
    0x8,
    0xf8, 0x1f2, 0x509d,
    0xf8, OBJ_X_FLIP | 0x6, 0x509d,
    0xff, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f3, 0x518a,
    0xfe, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x518a,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_X_FLIP | 0x1f8, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x0, 0x515f,
    0xe7, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1f8, 0x515e,
    0xe7, OBJ_Y_FLIP | 0x0, 0x515e
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame4[28] = {
    0x9,
    0xf8, 0x1f0, 0x509e,
    0xf8, OBJ_X_FLIP | 0x8, 0x509e,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_X_FLIP | 0x1f6, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xee, 0x2, 0x515f,
    0x1, OBJ_SIZE_16x16 | 0x1f2, 0x518c,
    0x0, OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ff, 0x518c,
    0xea, OBJ_X_FLIP | 0x1f7, 0x515e,
    0xf8, 0x1fc, 0x509d,
    0xea, 0x1, 0x515e
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame5[28] = {
    0x9,
    0xf9, 0x1ef, 0x509e,
    0xf9, OBJ_X_FLIP | 0x9, 0x509e,
    0xfa, 0x1fc, 0x509d,
    0x4, OBJ_SIZE_16x16 | 0x1f1, 0x518e,
    0x1, OBJ_SIZE_16x16 | 0x0, 0x518e,
    OBJ_SHAPE_VERTICAL | 0xf3, 0x1f5, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_X_FLIP | 0x3, 0x515f,
    0xf2, OBJ_X_FLIP | 0x1f4, 0x515e,
    0xf2, 0x4, 0x515e
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame6[25] = {
    0x8,
    0x6, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1ef, 0x518e,
    0x3, OBJ_X_FLIP | OBJ_Y_FLIP | OBJ_SIZE_16x16 | 0x1, 0x518e,
    0xfa, 0x1ef, 0x509f,
    0xfa, OBJ_X_FLIP | 0x9, 0x509f,
    OBJ_SHAPE_VERTICAL | 0xf6, 0x1f4, 0x515f,
    OBJ_SHAPE_VERTICAL | 0xf6, OBJ_X_FLIP | 0x4, 0x515f,
    0xf9, 0x1fc, 0x50bd,
    0xf4, OBJ_X_FLIP | 0x1fb, 0x518f
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame7[22] = {
    0x7,
    0x8, OBJ_SIZE_16x16 | 0x1ef, 0x51d4,
    0xfa, 0x1ef, 0x50bd,
    0xfa, OBJ_X_FLIP | 0x9, 0x50bd,
    0xfa, 0x3, 0x515f,
    0xfa, OBJ_X_FLIP | 0x1f5, 0x515f,
    0x4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, 0x51d4,
    0xf8, 0x1fc, 0x50be
};

const u16 sParticleSpriteSplashAcidHugeOAM_Frame8[16] = {
    0x5,
    0xf8, 0x1f2, 0x50be,
    0xf8, OBJ_X_FLIP | 0x6, 0x50be,
    OBJ_SHAPE_VERTICAL | 0xb, 0x1f2, 0x5187,
    OBJ_SHAPE_VERTICAL | 0x7, OBJ_X_FLIP | 0x8, 0x5187,
    0xf7, 0x1fc, 0x51a7
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame0[7] = {
    0x2,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x509d,
    0xf9, 0x0, 0x509d
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame1[10] = {
    0x3,
    0xf9, OBJ_X_FLIP | 0x1f7, 0x509e,
    0xf9, 0x1, 0x509e,
    0xf6, 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame2[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x509f,
    0xf8, 0x1, 0x509f,
    0xf3, 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame3[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f7, 0x50bd,
    0xf8, 0x1, 0x50bd,
    0xf1, 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame4[10] = {
    0x3,
    0xf8, OBJ_X_FLIP | 0x1f8, 0x50be,
    0xf8, 0x0, 0x50be,
    0xf4, OBJ_X_FLIP | 0x1fc, 0x515e
};

const u16 sParticleSpriteSplashAcidSmallOAM_Frame5[16] = {
    0x5,
    0xf9, OBJ_X_FLIP | 0x1f8, 0x50be,
    0xf9, 0x0, 0x50be,
    0xf9, OBJ_X_FLIP | 0x1fc, 0x515e,
    0xf5, 0x1f8, 0x51a7,
    0xf5, OBJ_X_FLIP | 0x0, 0x51a7
};

const struct FrameData sParticleSpriteSplashWaterBigOAM[10] = {
    sParticleSpriteSplashWaterBigOAM_Frame0,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame1,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame2,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame3,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame4,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame5,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame6,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame7,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashWaterHugeOAM[10] = {
    sParticleSpriteSplashWaterBigOAM_Frame0,
    3,
    sParticleSpriteSplashWaterBigOAM_Frame1,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame2,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame3,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame4,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame5,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame6,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame7,
    3,
    sParticleSpriteSplashWaterHugeOAM_Frame8,
    3,
    NULL,0
};

const struct FrameData sParticleSpriteSplashWaterSmallOAM[7] = {
    sParticleSpriteSplashWaterSmallOAM_Frame0,
    4,
    sParticleSpriteSplashWaterSmallOAM_Frame1,
    4,
    sParticleSpriteSplashWaterSmallOAM_Frame2,
    4,
    sParticleSpriteSplashWaterSmallOAM_Frame3,
    4,
    sParticleSpriteSplashWaterSmallOAM_Frame4,
    4,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashLavaBigOAM[10] = {
    sParticleSpriteSplashLavaBigOAM_Frame0,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame1,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame2,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame3,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame4,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame5,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame6,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame7,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashLavaHugeOAM[10] = {
    sParticleSpriteSplashLavaBigOAM_Frame0,
    3,
    sParticleSpriteSplashLavaBigOAM_Frame1,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame2,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame3,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame4,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame5,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame6,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame7,
    3,
    sParticleSpriteSplashLavaHugeOAM_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashLavaSmallOAM[7] = {
    sParticleSpriteSplashLavaSmallOAM_Frame0,
    4,
    sParticleSpriteSplashLavaSmallOAM_Frame1,
    4,
    sParticleSpriteSplashLavaSmallOAM_Frame2,
    4,
    sParticleSpriteSplashLavaSmallOAM_Frame3,
    4,
    sParticleSpriteSplashLavaSmallOAM_Frame4,
    4,
    sParticleSpriteSplashLavaSmallOAM_Frame5,
    4,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashAcidBigOAM[10] = {
    sParticleSpriteSplashAcidBigOAM_Frame0,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame1,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame2,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame3,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame4,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame5,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame6,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame7,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashAcidHugeOAM[10] = {
    sParticleSpriteSplashAcidBigOAM_Frame0,
    3,
    sParticleSpriteSplashAcidBigOAM_Frame1,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame2,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame3,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame4,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame5,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame6,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame7,
    3,
    sParticleSpriteSplashAcidHugeOAM_Frame8,
    3,
    NULL,
    0
};

const struct FrameData sParticleSpriteSplashAcidSmallOAM[7] = {
    sParticleSpriteSplashAcidSmallOAM_Frame0,
    4,
    sParticleSpriteSplashAcidSmallOAM_Frame1,
    4,
    sParticleSpriteSplashAcidSmallOAM_Frame2,
    4,
    sParticleSpriteSplashAcidSmallOAM_Frame3,
    4,
    sParticleSpriteSplashAcidSmallOAM_Frame4,
    4,
    sParticleSpriteSplashAcidSmallOAM_Frame5,
    4,
    NULL,
    0
};

const u8 sEscapeTimerDigitsGFX_Top[1024] = INCBIN_U8("data/EscapeTimerDigitsTop.gfx");

const u8 sEscapeTimerDigitsGFX_Bottom[1024] = INCBIN_U8("data/EscapeTimerDigitsBottom.gfx");

const u16 sParticleEscapeOAM[34] = {
    0x8,
    OBJ_SHAPE_VERTICAL | 0x0, 0x0, 0x33c0,
    OBJ_SHAPE_VERTICAL | 0x0, 0x8, 0x33c0,
    OBJ_SHAPE_VERTICAL | 0x0, 0x10, 0x33ca,
    OBJ_SHAPE_VERTICAL | 0x0, 0x18, 0x33c0,
    OBJ_SHAPE_VERTICAL | 0x0, 0x20, 0x33c0,
    OBJ_SHAPE_VERTICAL | 0x0, 0x28, 0x33ca,
    OBJ_SHAPE_VERTICAL | 0x0, 0x30, 0x33c0,
    OBJ_SHAPE_VERTICAL | 0x0, 0x38, 0x33c0
};
