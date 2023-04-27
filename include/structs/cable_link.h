#ifndef CABLE_LINK_STRUCTS_H
#define CABLE_LINK_STRUCTS_H

#include "types.h"

typedef u16 (CableLinkBuffer1_T)[2][2];

struct MultiBootData {
    u32 systemWork_1[5];
    u8 handshakeData;
    u16 handshakeTimeout;
    u8 probeCount;
    u8 clientData[3];
    u8 paletteData;
    u8 responseBit;
    u8 clientBit;
    u8 reserved_1;
    const u8* bootSourcePointer;
    const u8* bootEndPointer;
    const u8* dataSentPointer;
    u8* reserved_2[3];
    u32 systemWork_2[4];
    u8 sendFlag;
    u8 probeTargetBit;
    u8 checkWait;
    u8 serverType;
};

struct IoTransferInfo {
    Func_T pFunction;
    u8 unk_4;
    u16 timer;
    u8 active;
    u8 unk_9;
    u8 unk_A;
    u8 result;
    u8 errorFlag;
    u16 unk_E;
    i8 fusionGalleryImages;
    i8 language;
    u16 musicTrack;
    u16 musicPriority;
};

struct CableLinkInfo {
    u8 unk_0;
    u8 unk_1;
    u8 unk_2;
    u8 unk_3;
    u16 sioIncomingData[4];
    u8 unk_C;
    u8 unk_D;
    u8 unk_E;
    u8 unk_F;
    u8 unk_10;
    u8 unk_11;
    u8 hardwareErrorFlag;
    u8 checksumErrorFlag;
    u8 overflowErrorFlags;
    u8 sioErrorFlags;
    u16 unk_16;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1A;
    u8 unk_1B;
    u16 unk_1C[2][32];
    u8 unk_9C;
    u8 unk_9D;
    u8 unk_9E;
    u8 unk_9F;
    u16 unk_A0[2][2][32];
    u8 unk_1A0;
    u8 unk_1A1;
    u8 unk_1A2;
};

struct CableLink_3005890 {
    u8 unk_0;
    u8 unk_1;
    u8 unk_2;
    u8 unk_3;
    u8 unk_4;
    u8 unk_5;
    u8 unk_6;
    u8 unk_7;
    const u32* unk_8;
    u32 unk_C;
    u32 unk_10;
    u32 unk_14;
};

extern struct IoTransferInfo gIoTransferInfo;

extern struct MultiBootData gMultiBootParamData;
extern const u8* gDataSentPointer;
extern u32 gDataSentSize;

extern u16 gRegIme_Backup;
extern u16 gRegIe_Backup;
extern u16 gRegTm3Cnt_H_Backup;
extern u16 gRegSiocnt_Backup;
extern u16 gRegRcnt_Backup;

extern u32 gUnk_3005874;
extern u8 gUnk_3005884;
extern u32 gUnk_3005880;

extern u8 gUnk_30058aa;
extern u16 gUnk_30058ac;
extern u8 gUnk_30058ae;
extern u8 gUnk_30058af;
extern u8 gUnk_30058b0;
extern u8 gUnk_30058b1;

extern u16 gUnk_30058a8;
extern struct CableLink_3005890 gUnk_3005890;

extern u32 gErrorFlag;
extern u16 gUnk_30058c0[2];
extern CableLinkBuffer1_T gUnk_30058c4;

extern struct CableLinkInfo gCableLinkInfo;
extern u16 gUnk_30058d0;
extern u8 gUnk_30058d2;
extern u8 gUnk_30058d3;
extern u8 gUnk_3005b54;
extern u8 gUnk_30058d5;
extern u8 gUnk_30058d6;
extern u16 gUnk_30058d8;
extern u16 gUnk_30058da;
extern u8 gUnk_3005b50;

extern u8 gUnk_30058cc;
extern u8 gUnk_30058cd;
extern u8 gUnk_30058ce;
extern u8 gUnk_30058cf;

#endif /* CABLE_LINK_STRUCTS_H */