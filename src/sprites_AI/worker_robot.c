#include "worker_robot.h"
#include "../projectile.h"
#include "../particle.h"
#include "../oam.h"
#include "../sprite_util.h"
#include "../globals.h"

u8 WorkerRobotCheckSamusInFront(void)
{
    u16 spriteY;
    u16 spriteX;
    u16 sprite_top;
    u16 sprite_left;
    u16 sprite_right;
    u16 samusY;
    u16 samusX;
    u16 samus_top;
    u16 samus_bottom;
    u16 samus_left;
    u16 samus_right;

    if ((gCurrentSprite.status & SPRITE_STATUS_SAMUS_ON_TOP) == 0x0)
    {
        spriteY = gCurrentSprite.yPosition;
        spriteX = gCurrentSprite.xPosition;
        sprite_top = spriteY - 0xA4;
        sprite_left = spriteY - 0x48;
        sprite_right = spriteY + 0x48;

        samusY = gSamusData.yPosition;
        samusX = gSamusData.xPosition;
        samus_top = samusY + gSamusPhysics.drawDistanceTopOffset;
        samus_bottom = samusY + gSamusPhysics.drawDistanceBottomOffset;
        samus_left = samusX + gSamusPhysics.drawDistanceLeftOffset;
        samus_right = samusX + gSamusPhysics.drawDistanceRightOffset;

        if (SpriteUtilCheckObjectsTouching(sprite_top, spriteY, sprite_left, sprite_right, samus_top, samus_bottom, samus_left, samus_right))
        {
            if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
            {
                if (spriteX < samusX)
                    return TRUE;
            }
            else
            {
                if (spriteX > samusX)
                    return TRUE;
            }
        }
    }
    
    return FALSE;
}

void WorkerRobotInit(void)
{
    gCurrentSprite.hitboxTopOffset = -0x74;
    gCurrentSprite.hitboxBottomOffset = 0x0;
    gCurrentSprite.hitboxLeftOffset = -0x1C;
    gCurrentSprite.hitboxRightOffset = 0x1C;
    gCurrentSprite.drawDistanceTopOffset = 0x28;
    gCurrentSprite.drawDistanceBottomOffset = 0x0;
    gCurrentSprite.drawDistanceHorizontalOffset = 0x10;
    gCurrentSprite.pOam = worker_robot_oam_2e7bcc;
    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.properties |= SP_IMMUNE_TO_PROJECTILES;
    gCurrentSprite.workVariable = 0x0;
    gCurrentSprite.samusCollision = SSC_SOLID;
    gCurrentSprite.health = primary_sprite_stats[gCurrentSprite.spriteID][0x0];
    SpriteUtilMakeSpriteFaceAwawFromSamusXFlip();
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
        gCurrentSprite.status |= SPRITE_STATUS_FACING_RIGHT;
    gCurrentSprite.pose = 0x11;
}

void WorkerRobotGFXInit(void)
{
    gCurrentSprite.pose = 0x11;
    gCurrentSprite.pOam = worker_robot_oam_2e7bcc;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;
}

void WorkerRobotSleepingDetectProjectile(void)
{
    if (SpriteUtilGetCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition) == 0x0)
        gCurrentSprite.pose = 0x20;
    else if (gCurrentSprite.invicibilityStunFlashTimer & 0x7F)
        gCurrentSprite.pose = 0x12;
}

void WorkerRobotStandingGFXInit(void)
{
    gCurrentSprite.pose = 0x13;
    gCurrentSprite.pOam = worker_robot_oam_2e7c0c;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;
    if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
        unk_2b20(0x26F);
}

void WorkerRobotCheckStandingAnimEnded(void)
{
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = 0xE;
}

void WorkerRobotWalkingDetectProjectile(void)
{
    u8 on_side;
    struct ProjectileData* pProj;
    u8 type;
    struct FrameData* pOam;
    u16 spriteY;
    u16 spriteX;
    u16 sprite_top;
    u16 sprite_bottom;
    u16 sprite_left;
    u16 sprite_right;
    u16 proj_y;
    u16 proj_x;
    u16 proj_top;
    u16 proj_bottom;
    u16 proj_left;
    u16 proj_right;

    on_side = FALSE;
    spriteY = gCurrentSprite.yPosition;
    spriteX = gCurrentSprite.xPosition;
    sprite_top = spriteY + gCurrentSprite.hitboxTopOffset;
    sprite_bottom = spriteY + gCurrentSprite.hitboxBottomOffset;
    sprite_left = spriteX + gCurrentSprite.hitboxLeftOffset;
    sprite_right = spriteX + gCurrentSprite.hitboxRightOffset;
    pProj = gProjectileData;

    while (pProj < gProjectileData + 16)
    {
        if ((pProj->status & (PROJ_STATUS_EXISTS | PROJ_STATUS_CAN_AFFECT_ENVIRONMENT)) == (PROJ_STATUS_EXISTS | PROJ_STATUS_CAN_AFFECT_ENVIRONMENT))
        {
            type = pProj->type;
            if ((u8)(type - 0xC) < 0x2)
            {
                proj_y = pProj->yPosition;
                proj_x = pProj->xPosition;
                proj_top = proj_y + pProj->hitboxTopOffset;
                proj_bottom = proj_y + pProj->hitboxBottomOffset;
                proj_left = proj_x + pProj->hitboxLeftOffset;
                proj_right = proj_y + pProj->hitboxRightOffset;

                if (SpriteUtilCheckObjectsTouching(sprite_top, sprite_bottom, sprite_left, sprite_right, proj_top, proj_bottom, proj_left, proj_right))
                {
                    if (pProj->direction == ACD_FORWARD || ((u8)(pProj->direction - 0x1) < 0x2 && proj_y > sprite_top && proj_y < sprite_bottom))
                        on_side++;
                    
                    if (on_side)
                    {
                        if (pProj->status & PROJ_STATUS_XFLIP)
                        {
                            proj_x = sprite_left;
                            gCurrentSprite.status |= SPRITE_STATUS_FACING_RIGHT;
                            if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
                            {
                                if (gCurrentSprite.pOam != worker_robot_oam_2e7ae4)
                                    gCurrentSprite.pOam = worker_robot_oam_2e7ae4;
                            }
                            else
                            {
                                if (gCurrentSprite.pOam != worker_robot_oam_2e7b2c)
                                    gCurrentSprite.pOam = worker_robot_oam_2e7b2c;
                            }
                        }
                        else
                        {
                            proj_x = sprite_right;
                            gCurrentSprite.status &= ~SPRITE_STATUS_FACING_RIGHT;
                            if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
                            {
                                if (gCurrentSprite.pOam != worker_robot_oam_2e7ae4)
                                    gCurrentSprite.pOam = worker_robot_oam_2e7ae4;
                            }
                            else
                            {
                                if (gCurrentSprite.pOam != worker_robot_oam_2e7b2c)
                                    gCurrentSprite.pOam = worker_robot_oam_2e7b2c;
                            }
                        }
                        gCurrentSprite.animationDurationCounter = 0x0;
                    }

                    if (type == PROJ_TYPE_SUPER_MISSILE)
                    {
                        ParticleSet(proj_y, proj_x, PE_HITTING_SOMETHING_WITH_SUPER_MISSILE);
                        if (on_side)
                            gCurrentSprite.workVariable = 0x3C;
                    }
                    else
                    {
                        ParticleSet(proj_y, proj_x, PE_HITTING_SOMETHING_WITH_MISSILE);
                        if (on_side)
                            gCurrentSprite.workVariable = 0x1E;
                    }
                    pProj->status = 0x0;
                    return;
                }
            }
        }
        pProj++;
    }
}

void WorkerRobotWakingUpGFXInit(void)
{
    gCurrentSprite.pose = 0xF;
    gCurrentSprite.pOam = worker_robot_oam_2e7b74;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.timer = 0x1E;
    gCurrentSprite.workVariable = 0x0;
    gCurrentSprite.hitboxTopOffset = -0x84;
}

void WorkerRobotCheckProjectile(void)
{
    WorkerRobotWalkingDetectProjectile();
    if (gCurrentSprite.workVariable != 0x0)
        gCurrentSprite.pose = 0x9;
    else
    {
        gCurrentSprite.timer--;
        if (gCurrentSprite.timer == 0x0)
            gCurrentSprite.pose = 0x8;
    }
}

void WorkerRobotWalkGFXInit(void)
{
    gCurrentSprite.pose = 0x9;
    gCurrentSprite.pOam = worker_robot_oam_2e7ae4;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;
}

void WorkerRobotMove(void)
{

}

void WorkerRobotBackToSleepGFXInit(void)
{
    gCurrentSprite.pose = 0xB;
    gCurrentSprite.pOam = worker_robot_oam_2e7b84;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.animationDurationCounter = 0x0;
    if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
        unk_2b20(0x270);
}

void WorkerRobotCheckBackToSleepAnimEnded(void)
{
    if (SpriteUtillCheckEndCurrentSpriteAnim())
    {
        gCurrentSprite.pose = 0xC;
        gCurrentSprite.pOam = worker_robot_oam_2e7bdc;
        gCurrentSprite.animationDurationCounter = 0x0;
        gCurrentSprite.currentAnimationFrame = 0x0;
        gCurrentSprite.hitboxTopOffset = -0x74;
    }
}

void WorkerRobotTurningAround(void)
{
    if (SpriteUtillCheckEndCurrentSpriteAnim())
    {
        if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
            gCurrentSprite.status &= ~(SPRITE_STATUS_XFLIP | SPRITE_STATUS_FACING_RIGHT);
        else
            gCurrentSprite.status |= (SPRITE_STATUS_XFLIP | SPRITE_STATUS_FACING_RIGHT);

        gCurrentSprite.pose = 0xD;
        gCurrentSprite.pOam = worker_robot_oam_2e7bf4;
        gCurrentSprite.animationDurationCounter = 0x0;
        gCurrentSprite.currentAnimationFrame = 0x0;
    }
}

void WorkerRobotCheckTurningAroundAnimEnded(void)
{
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = 0x10;
}

void WorkerRobotFallingGFXInit(void)
{
    gCurrentSprite.pose = 0x1F;
    gCurrentSprite.arrayOffset = 0x0;
    gCurrentSprite.workVariable = 0x0;
    gCurrentSprite.pOam = worker_robot_oam_2e7ae4;
    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
}

void WorkerRobotFalling(void)
{

}

void WorkerRobotFallingSleepGFXInit(void)
{
    gCurrentSprite.pose = 0x21;
    gCurrentSprite.arrayOffset = 0x0;
    gCurrentSprite.workVariable = 0x0;
}

void WorkerRobotFallingSleep(void)
{

}

void WorkerRobot(void)
{
    switch (gCurrentSprite.pose)
    {
        case 0x0:
            WorkerRobotInit();
        case 0x10:
            WorkerRobotGFXInit();
        case 0x11:
            WorkerRobotSleepingDetectProjectile();
            break;
        case 0x12:
            WorkerRobotStandingGFXInit();
        case 0x13:
            WorkerRobotCheckStandingAnimEnded();
            break;
        case 0xE:
            WorkerRobotWakingUpGFXInit();
        case 0xF:
            WorkerRobotCheckProjectile();
            break;
        case 0x8:
            WorkerRobotWalkGFXInit();
        case 0x9:
            WorkerRobotMove();
            break;
        case 0xA:
            WorkerRobotBackToSleepGFXInit();
        case 0xB:
            WorkerRobotCheckBackToSleepAnimEnded();
            break;
        case 0xC:
            WorkerRobotTurningAround();
        case 0xD:
            WorkerRobotCheckTurningAroundAnimEnded();
            break;
        case 0x1E:
            WorkerRobotFallingGFXInit();
        case 0x1F:
            WorkerRobotFalling();
            break;
        case 0x20:
            WorkerRobotFallingSleepGFXInit();
            break;
        case 0x21:
            WorkerRobotFallingSleep();
            break;
        default:
            SpriteUtilSpriteDeath(DEATH_NORMAL, gCurrentSprite.yPosition - 0x46, gCurrentSprite.xPosition, TRUE, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
    }
}