#ifndef GENERIC_DATA_C
#define GENERIC_DATA_C

#include "types.h"
#include "callbacks.h"

static const i16 sSineYValues[320] = {
    SHORT_MAX, 6, 12, 18, 25, 31, 37, 43, 49, 56, 62, 68, 74, 80,
    86, 92, 97, 103, 109, 115, 120, 126, 131, 136, 142,
    147, 152, 157, 162, 167, 171, 176, 181, 185, 189, 193,
    197, 201, 205, 209, 212, 216, 219, 222, 225, 228, 231,
    234, 236, 238, 241, 243, 244, 246, 248, 249, 251, 252,
    253, 254, 254, 255, 255, 255, 256, 255, 255, 255, 254,
    254, 253, 252, 251, 249, 248, 246, 244, 243, 241, 238,
    236, 234, 231, 228, 225, 222, 219, 216, 212, 209, 205,
    201, 197, 193, 189, 185, 181, 176, 171, 167, 162, 157,
    152, 147, 142, 136, 131, 126, 120, 115, 109, 103, 97,
    92, 86, 80, 74, 68, 62, 56, 49, 43, 37, 31, 25, 18, 12,
    6, 0, -6, -12, -18, -25, -31, -37, -43, -49, -56, -62,
    -68, -74, -80, -86, -92, -97, -103, -109, -115, -120,
    -126, -131, -136, -142, -147, -152, -157, -162, -167,
    -171, -176, -181, -185, -189, -193, -197, -201, -205,
    -209, -212, -216, -219, -222, -225, -228, -231, -234,
    -236, -238, -241, -243, -244, -246, -248, -249, -251,
    -252, -253, -254, -254, -255, -255, -255, -256, -255,
    -255, -255, -254, -254, -253, -252, -251, -249, -248,
    -246, -244, -243, -241, -238, -236, -234, -231, -228,
    -225, -222, -219, -216, -212, -209, -205, -201, -197,
    -193, -189, -185, -181, -176, -171, -167, -162, -157,
    -152, -147, -142, -136, -131, -126, -120, -115, -109,
    -103, -97, -92, -86, -80, -74, -68, -62, -56, -49, -43,
    -37, -31, -25, -18, -12, -6, 0, 6, 12, 18, 25, 31, 37,
    43, 49, 56, 62, 68, 74, 80, 86, 92, 97, 103, 109, 115,
    120, 126, 131, 136, 142, 147, 152, 157, 162, 167, 171,
    176, 181, 185, 189, 193, 197, 201, 205, 209, 212, 216,
    219, 222, 225, 228, 231, 234, 236, 238, 241, 243, 244,
    246, 248, 249, 251, 252, 253, 254, 254, 255, 255, 255
};

static const u8 sRandomNumberTable[256] = {
    53, 11, 235, 164, 249, 33, 138, 195, 58, 150, 167, 169,
    196, 154, 26, 233, 1, 50, 31, 15, 10, 230, 54, 229, 232,
    182, 200, 89, 170, 209, 27, 143, 39, 146, 91, 67, 204,
    158, 240, 191, 34, 110, 156, 185, 250, 211, 221, 92, 181,
    129, 114, 101, 35, 141, 145, 121, 238, 68, 197, 118, 107,
    198, 74, 16, 216, 93, 144, 190, 188, 32, 171, 239, 173, 139,
    134, 72, 44, 111, 37, 28, 123, 251, 199, 160, 254, 253, 147,
    157, 96, 109, 115, 59, 105, 243, 217, 14, 4, 205, 38, 0, 202,
    6, 83, 201, 75, 57, 172, 192, 86, 219, 102, 155, 189, 122,
    212, 218, 3, 108, 247, 29, 120, 126, 165, 85, 152, 179, 80,
    21, 73, 64, 2, 65, 79, 69, 13, 132, 99, 51, 207, 18, 41, 215,
    226, 127, 255, 220, 128, 124, 184, 70, 17, 45, 30, 178, 242,
    193, 90, 43, 241, 194, 187, 25, 48, 62, 20, 168, 214, 163,
    119, 234, 246, 210, 252, 228, 224, 174, 159, 106, 61, 97, 63,
    162, 137, 183, 42, 40, 236, 84, 12, 81, 95, 104, 112, 130,
    56, 22, 23, 231, 206, 88, 227, 9, 113, 8, 208, 76, 177, 248,
    135, 49, 222, 55, 142, 117, 203, 186, 149, 125, 133, 103, 161,
    151, 245, 140, 19, 87, 213, 244, 98, 47, 77, 166, 225, 136,
    94, 100, 36, 82, 46, 52, 5, 71, 176, 24, 66, 131, 148, 237,
    116, 180, 78, 153, 60, 7, 223, 175
};

const Func_T sIntrTable[13] = {
    sub_08003380,
    CallbackCallSerialCommunication,
    CallbackCallTimer3,
    CallbackCallVblank,
    CallbackCallHBlank,
    CallbackCallVCount,
    Callback_Empty,
    Callback_Empty,
    Callback_Empty,
    Callback_Empty,
    Callback_Empty,
    Callback_Empty,
    Callback_Empty,
};

#endif