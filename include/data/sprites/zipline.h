#ifndef ZIPLINE_DATA_H
#define ZIPLINE_DATA_H

#include "types.h"
#include "oam.h"

extern const u32 sZiplineGFX[264];
extern const u16 sZiplinePAL[16];

extern const u16 sZiplineOAM_OffIdle_Frame0[7];

extern const u16 sZiplineOAM_OffGrabbingSamus_Frame1[7];

extern const u16 sZiplineOAM_OffGrabbingSamus_Frame2[7];

extern const u16 sZiplineOAM_OnGrabbingSamus_Frame1[7];

extern const u16 sZiplineOAM_OnSamusGrabbed_Frame2[7];

extern const u16 sZiplineOAM_OnSamusGrabbed_Frame1[7];

extern const u16 sZiplineOAM_OnSamusGrabbed_Frame0[7];

extern const u16 sZiplineOAM_OnIdle_Frame3[7];

extern const u16 sZiplineOAM_OnGrabbingSamus_Frame2[7];

extern const u16 sZiplineOAM_OnIdle_Frame1[7];

extern const u16 sZiplineOAM_OnIdle_Frame2[7];

extern const u16 sZiplineButtonOAM_OffIdle_Frame0[7];

extern const u16 sZiplineButtonOAM_OnIdle_Frame1[7];

extern const u16 sZiplineButtonOAM_OnIdle_Frame2[7];

extern const u16 sZiplineButtonOAM_OnIdle_Frame3[7];

extern const struct FrameData sZiplineOAM_OffIdle[2];

extern const struct FrameData sZiplineOAM_OffGrabbingSamus[4];

extern const struct FrameData sZiplineOAM_OffSamusGrabbed[2];

extern const struct FrameData sZiplineOAM_OffReleasingSamus[4];

extern const struct FrameData sZiplineOAM_OnIdle[7];

extern const struct FrameData sZiplineOAM_OnGrabbingSamus[4];

extern const struct FrameData sZiplineOAM_OnSamusGrabbed[7];

extern const struct FrameData sZiplineOAM_OnReleasingSamus[4];

extern const struct FrameData sZiplineButtonOAM_OffIdle[2];

extern const struct FrameData sZiplineButtonOAM_OnIdle[7];

extern const struct FrameData sZiplineButtonOAM_Active[7];

#endif
