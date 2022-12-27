#include "cutscenes/mecha_sees_samus.h"
#include "cutscenes/cutscene_utils.h"

#include "temp_globals.h"
#include "data/cutscenes/cutscenes_data.h"
#include "data/cutscenes/mecha_sees_samus_data.h"

#include "constants/cutscene.h"

u8 MechaRidleySeesSamusEyeOpen(void)
{
    // https://decomp.me/scratch/kpJgq

    switch (CUTSCENE_DATA.subStage)
    {
        case 0:
            if (unk_61f44())
            {
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 1:
            if (CUTSCENE_DATA.timer > 32)
            {
                SoundPlay(0x293);
                update_cutscene_oam_data_id(&CUTSCENE_DATA.oam[0], 2);
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 2:
            if (!CUTSCENE_DATA.oam[0].idChanged && !CUTSCENE_DATA.oam[0].unk_B_40)
            {
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 3:
            if (CUTSCENE_DATA.timer > 4)
            {
                SoundPlay(0x294);
                update_cutscene_oam_data_id(&CUTSCENE_DATA.oam[1], 4);
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 4:
            if (CUTSCENE_DATA.oam[1].ended)
            {
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 5:
            if (CUTSCENE_DATA.timer > 60)
            {
                CUTSCENE_DATA.timer = 0;
                CUTSCENE_DATA.subStage++;
            }
            break;

        case 6:
            unk_61f0c();
            CUTSCENE_DATA.stage++;
            CUTSCENE_DATA.subStage = 0;
            CUTSCENE_DATA.timer = 0;
            break;
    }

    return FALSE;
}

u8 MechaRidleySeesSamusInit(void)
{

}

/**
 * @brief 65b6c | 34 | Mecha ridley sees Samus rising cutscene subroutine
 * 
 * @return u8 1 if ended, 0 otherwise
 */
u8 MechaRidleySeesSamusSubroutine(void)
{
    u8 ended;

    ended = sMechaSeesSamusSubroutineData[CUTSCENE_DATA.stage].pFunction();
    CutsceneUpdateBackgroundsPosition(TRUE);
    MechaRidleySeesSamusProcessOAM();

    return ended;
}

/**
 * @brief 65ba0 | 38 | Processes the OAM for the cutscene
 * 
 */
void MechaRidleySeesSamusProcessOAM(void)
{
    gNextOAMSlot = 0;
    process_cutscene_oam(sMechaSeesSamusSubroutineData[CUTSCENE_DATA.stage].oamLength, CUTSCENE_DATA.oam, sMechaSeesSamusCutsceneOAM); // Undefined
    ResetFreeOAM();
}
