#include "projectile.h"
#include "globals.h"

void projectile_set_beam_particle_effect(void)
{
    /*enum particle_effect_id effect;
    u16 x_pos;
    u16 y_pos;
    u8 right;

    y_pos = arm_cannon_y;
    x_pos = arm_cannon_x;
    right = samus_data.direction & DIRECTION_RIGHT;

    switch (samus_data.arm_cannon_direction)
    {
        case ACD_DIAGONALLY_DOWN:
            effect = PE_SHOOTING_BEAM_DIAG_DOWN_LEFT;
            if (right != 0x0)
                effect = PE_SHOOTING_BEAM_DIAG_DOWN_RIGHT;
            break;
        
        case ACD_DIAGONALLY_UP:
            effect = PE_SHOOTING_BEAM_DIAG_UP_LEFT;
            if (right != 0x0)
                effect = PE_SHOOTING_BEAM_DIAG_UP_RIGHT;
            break;

        case ACD_DOWN:
            effect = PE_SHOOTING_BEAM_DOWN_LEFT;
            if (right != 0x0)
                effect = PE_SHOOTING_BEAM_DOWN_RIGHT;
            break;

        case ACD_UP:
            effect = PE_SHOOTING_BEAM_UP_LEFT;
            if (right != 0x0)
                effect = PE_SHOOTING_BEAM_UP_RIGHT;
            break;
        
        case ACD_FORWARD:
            effect = PE_SHOOTING_BEAM_LEFT;
            if (right != 0x0)
                effect = PE_SHOOTING_BEAM_RIGHT;
            break;
    }

    particle_set(y_pos, x_pos, effect);*/
}

u8 projectile_check_number_of_projectiles(enum projectile_type type, u8 limit)
{
    u8 count;
    struct projectile_data* pProj;

    count = 0x0;
    pProj = projectile_data;

    while (pProj < projectile_data + 16)
    {
        if ((pProj->status & PROJ_STATUS_EXISTS) != 0x0 && pProj->type == type)
        {
            count++;
            if (count >= limit) return FALSE;
        }
        pProj++;
    }

    return TRUE;
}

u8 projectile_init(enum projectile_type type, u16 y_position, u16 x_position)
{
    /*struct projectile_data* pProj;
    struct samus_data* pData;
    enum projectile_status status;
    enum projectile_status check;

    pProj = projectile_data;

    while (pProj < projectile_data + 16)
    {
        pData = &samus_data;
        if ((pProj->status & PROJ_STATUS_EXISTS) == 0x0)
        {
            status = (PROJ_STATUS_EXISTS | PROJ_STATUS_ON_SCREEN | PROJ_STATUS_UNKNOWN | PROJ_STATUS_CAN_AFFECT_ENVIRONMENT);
            if (PROJ_TYPE_SUPER_MISSILE < type)
                status = (PROJ_STATUS_EXISTS | PROJ_STATUS_ON_SCREEN | PROJ_STATUS_UNKNOWN);
            if ((pData->direction & DIRECTION_RIGHT) != 0x0)
                status |= PROJ_STATUS_XFLIP;

            pProj->status = status;
            pProj->type = type;
            pProj->y_position = y_position;
            pProj->x_position = x_position;
            pProj->hitbox_top_offset = -0x1;
            pProj->hitbox_bottom_offset = 0x1;
            pProj->hitbox_left_offset = -0x1;
            pProj->hitbox_right_offset = 0x1;
            pProj->movement_stage = 0x0;
            pProj->timer = 0x0;
            pProj->direction = pData->arm_cannon_direction;
            return TRUE;
        }

        pProj++;
    }

    return FALSE;*/
}

void projectile_update(void)
{
    /*u8 checks;
    i32 count;
    struct particle_effect* pEffect;
    struct projectile_data* pProj;
    enum projectile_type type;
    enum beam_bombs_flags flag;
    u16 sound;
    u8 proj_limit;

    if (game_mode_sub1 != 0x2) return;

    samus_call_update_arm_cannon_oam();

    arm_cannon_y = ((samus_data.y_position >> 0x2) + samus_physics.arm_cannon_y_position_offset) * 0x4;
    arm_cannon_x = ((samus_data.x_position >> 0x2) + samus_physics.arm_cannon_x_position_offset) * 0x4;

    if (samus_weapon_info.charge_counter == 0x10 && equipment.suit_type != SUIT_SUITLESS)
    {
        checks = FALSE;
        count = 0x0;
        pEffect = particle_effects;
        do {
            if ((pEffect->status & PARTICLE_STATUS_EXISTS) != 0x0 && pEffect->effect == PE_CHARGING_BEAM)
            {
                checks++;
                break;
            }
            pEffect++;
            count++;
        } while (count < 0x10);

        if (!checks)
            particle_set(arm_cannon_y, arm_cannon_x, PE_CHARGING_BEAM);
    }

    switch (samus_weapon_info.new_projectile)
    {
        case PROJECTILE_CHARGED_BEAM:
            if (equipment.suit_type == SUIT_SUITLESS)
            {
                if (projectile_check_number_of_projectiles(PROJ_TYPE_CHARGED_PISTOL, 0x2) << 0x18 != FALSE && projectile_init(PROJ_TYPE_CHARGED_PISTOL, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
                {
                    samus_weapon_info.cooldown = 0x7;
                    projectile_set_beam_particle_effect();
                    samus_weapon_info.beam_release_palette_timer = 0x4;
                    play_sound1(0xA0);
                }
            }
            else
            {
                flag = equipment.beam_bombs_activation;
                if ((equipment.beam_bombs_activation & BBF_PLASMA_BEAM) != 0x0)
                {
                    type = PROJ_TYPE_CHARGED_PLASMA_BEAM;
                    if ((equipment.beam_bombs_activation & BBF_WAVE_BEAM) != 0x0)
                    {
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xF5;
                            if (flag != 0x0)
                                sound = 0xF7;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xF4;
                            if (flag != 0x0)
                                sound = 0xF6;
                        }
                    }
                    else
                    {
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xF1;
                            if (flag != 0x0)
                                sound = 0xF3;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xF0;
                            if (flag != 0x0)
                                sound = 0xF2;
                        }
                    }
                }
                else
                {
                    if ((equipment.beam_bombs_activation & BBF_WAVE_BEAM) != 0x0)
                    {
                        type = PROJ_TYPE_CHARGED_WAVE_BEAM;
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xED;
                            if (flag != 0x0)
                                sound = 0xEF;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xEC;
                            if (flag != 0x0)
                                sound = 0xEE;
                        }
                    }
                    else
                    {
                        if ((equipment.beam_bombs_activation & BBF_ICE_BEAM) != 0x0)
                        {
                            type = PROJ_TYPE_CHARGED_ICE_BEAM;                            
                            flag = equipment.beam_bombs_activation & BBF_LONG_BEAM;
                            sound = 0xEA;
                            if (flag != 0x0)
                                sound = 0xEB;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_LONG_BEAM;
                            if (flag != 0x0)
                            {
                                type = PROJ_TYPE_CHARGED_LONG_BEAM;
                                sound = 0xE9;
                            }
                            else
                            {
                                type = PROJ_TYPE_CHARGED_BEAM;
                                sound = 0xE8;
                            }
                        }
                    }
                }
                proj_limit = 0x2;

                if (projectile_check_number_of_projectiles(type, proj_limit) << 0x18 != FALSE && projectile_init(type, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
                {
                    samus_weapon_info.cooldown = 0x7;
                    projectile_set_beam_particle_effect();
                    samus_weapon_info.beam_release_palette_timer = 0x4;
                    play_sound1(sound);
                }
            }
            samus_weapon_info.new_projectile = PROJECTILE_NONE;
            break;
        
        case PROJECTILE_BEAM:
            if (equipment.suit_type == SUIT_SUITLESS)
            {
                if (projectile_check_number_of_projectiles(PROJ_TYPE_PISTOL, 0x2) << 0x18 != FALSE && projectile_init(PROJ_TYPE_PISTOL, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
                {
                    samus_weapon_info.cooldown = 0x7;
                    projectile_set_beam_particle_effect();
                    samus_weapon_info.beam_release_palette_timer = 0x4;
                    play_sound1(0x9F);
                }
            }
            else
            {
                flag = equipment.beam_bombs_activation;
                if ((equipment.beam_bombs_activation & BBF_PLASMA_BEAM) != 0x0)
                {
                    type = PROJ_TYPE_PLASMA_BEAM;
                    if ((equipment.beam_bombs_activation & BBF_WAVE_BEAM) != 0x0)
                    {
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xD5;
                            if (flag != 0x0)
                                sound = 0xD7;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xD4;
                            if (flag != 0x0)
                                sound = 0xD6;
                        }
                    }
                    else
                    {
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xD1;
                            if (flag != 0x0)
                                sound = 0xD3;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xD0;
                            if (flag != 0x0)
                                sound = 0xD2;
                        }
                    }
                }
                else
                {
                    if ((equipment.beam_bombs_activation & BBF_WAVE_BEAM) != 0x0)
                    {
                        type = PROJ_TYPE_WAVE_BEAM;
                        if ((equipment.beam_bombs_activation & BBF_LONG_BEAM) != 0x0)
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xCD;
                            if (flag != 0x0)
                                sound = 0xCF;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_ICE_BEAM;
                            sound = 0xCC;
                            if (flag != 0x0)
                                sound = 0xCE;
                        }
                    }
                    else
                    {
                        if ((equipment.beam_bombs_activation & BBF_ICE_BEAM) != 0x0)
                        {
                            type = PROJ_TYPE_ICE_BEAM;
                            flag = equipment.beam_bombs_activation & BBF_LONG_BEAM;
                            sound = 0xCA;
                            if (flag != 0x0)
                                sound = 0xCB;
                        }
                        else
                        {
                            flag = equipment.beam_bombs_activation & BBF_LONG_BEAM;
                            if (flag != 0x0)
                            {
                                type = PROJ_TYPE_LONG_BEAM;
                                sound = 0xC9;
                            }
                            else
                            {
                                type = PROJ_TYPE_BEAM;
                                sound = 0xC8;
                            }
                        }
                    }
                }
                proj_limit = 0x6;

                if (projectile_check_number_of_projectiles(type, proj_limit) << 0x18 != FALSE && projectile_init(type, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
                {
                    samus_weapon_info.cooldown = 0x7;
                    projectile_set_beam_particle_effect();
                    samus_weapon_info.beam_release_palette_timer = 0x4;
                    play_sound1(sound);
                }
            }
            samus_weapon_info.new_projectile = PROJECTILE_NONE;
            break;

        case PROJECTILE_MISSILE:
            if (projectile_check_number_of_projectiles(PROJ_TYPE_MISSILE, 0x4) << 0x18 != FALSE && projectile_init(PROJ_TYPE_MISSILE, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
            {
                samus_weapon_info.cooldown = 0x9;
                play_sound1(0xF8);
                play_sound1(0xF9);
            }
            samus_weapon_info.new_projectile = PROJECTILE_NONE;
            break;
        
        case PROJECTILE_SUPER_MISSILE:
            if (projectile_check_number_of_projectiles(PROJ_TYPE_SUPER_MISSILE, 0x4) << 0x18 != FALSE && projectile_init(PROJ_TYPE_SUPER_MISSILE, arm_cannon_y, arm_cannon_x) << 0x18 != FALSE)
            {
                samus_weapon_info.cooldown = 0xB;
                play_sound1(0xFB);
                play_sound1(0xFC);
            }
            samus_weapon_info.new_projectile = PROJECTILE_NONE;
            break;

        case PROJECTILE_BOMB:
            if (projectile_check_number_of_projectiles(PROJ_TYPE_BOMB, 0x4) << 0x18 != FALSE && projectile_init(PROJ_TYPE_BOMB, samus_data.y_position, samus_data.x_position) << 0x18 != FALSE)
                samus_weapon_info.cooldown = 0x7;
            samus_weapon_info.new_projectile = PROJECTILE_NONE;
            break;

        case PROJECTILE_POWER_BOMB:
            if (projectile_check_number_of_projectiles(PROJ_TYPE_POWER_BOMB, 0x1) << 0x18 != FALSE && current_power_bomb.animation_state == 0x0 && projectile_init(PROJ_TYPE_POWER_BOMB, samus_data.y_position, samus_data.x_position) << 0x18 != FALSE)
                samus_weapon_info.cooldown = 0x5;
            samus_weapon_info.new_projectile = PROJECTILE_NONE;

        default:
            break;
    }

    projectile_check_hit_sprite();

    pProj = projectile_data;
    while (pProj < projectile_data + 16)
    {
        if ((pProj->status & PROJ_STATUS_EXISTS) != 0x0)
        {
            bx_r1(pProj, process_projectile_functions_pointers[pProj->type]);
            projectile_update_animation(pProj);
            projectile_check_despawn(pProj);
        }
        pProj++;
    }*/
}

void projectile_update_animation(struct projectile_data* pProj)
{
    u32 adc;

    adc = pProj->anim_duration_counter + 0x1;
    pProj->anim_duration_counter = adc;
    if ((u8)pProj->oam_pointer[pProj->curr_anim_frame].timer < (u8)adc)
    {
        pProj->anim_duration_counter = 0x1;
        pProj->curr_anim_frame++;
        if ((u8)pProj->oam_pointer[pProj->curr_anim_frame].timer == 0x0)
            pProj->curr_anim_frame = 0x0;
    }
}

void projectile_draw_all_status_false(void)
{

}

void projectile_draw_all_status_true(void)
{

}

void projectile_draw(struct projectile_data* pProj)
{

}

void projectile_check_despawn(struct projectile_data* pProj)
{
    u16 x_pos;
    u16 y_pos;
    u16 draw_distance;

    if ((pProj->status & PROJ_STATUS_EXISTS) == 0x0) return;

    y_pos = pProj->y_position;
    x_pos = pProj->x_position;
    draw_distance = pProj->draw_distance_offset;

    if ((bg1_x_position + 0x100) - draw_distance < x_pos + 0x100 &&
        (x_pos + 0x100 < bg1_x_position + 0x100 + draw_distance + 0x3C0) &&
        ((bg1_y_position + 0x100) - draw_distance < y_pos + 0x100) &&
        (y_pos + 0x100 < bg1_y_position + 0x100 + draw_distance + 0x280))
        pProj->status |= PROJ_STATUS_ON_SCREEN;
    else
    {
        pProj->status &= (PROJ_STATUS_EXISTS | PROJ_STATUS_UNKNOWN | PROJ_STATUS_HIGH_PRIORITY | PROJ_STATUS_CAN_AFFECT_ENVIRONMENT | PROJ_STATUS_YFLIP | PROJ_STATUS_XFLIP | PROJ_STATUS_UNKNOWN2);
        if (PROJ_TYPE_SUPER_MISSILE < pProj->type) return;

        draw_distance = samus_data.y_position - 0x48;
        if (draw_distance < y_pos)
            y_pos -= draw_distance;
        else
            y_pos = draw_distance - y_pos;
        
        if (samus_data.x_position < x_pos)
            x_pos -= samus_data.x_position;
        else
            x_pos = samus_data.x_position - x_pos;
        
        if (y_pos < 0x301 && x_pos < 0x281) return;

        pProj->status = 0x0;
    }
}

void projectile_load_graphics(void)
{

}

void projectile_call_load_graphics_and_clear_projectiles(void)
{
    struct projectile_data* pProj;

    projectile_load_graphics();

    if (pause_screen_flag == 0x0)
    {
        pProj = projectile_data;
        while (pProj < projectile_data + 16)
        {
            pProj->status = 0x0;
            pProj++;
        }
    }
}

void projectile_move(struct projectile_data* pProj, u8 distance)
{

}

u8 projectile_collision_related(u16 y_position, u16 x_position)
{

}

u8 projectile_collision_related2(struct projectile_data* pProj)
{

}

void projectile_set_trail(struct projectile_data* pProj, enum particle_effect_id effect, u8 delay)
{
    /*u16 x_pos;
    u16 y_pos;
    u16 offset;
    enum projectile_status status;

    if ((eight_bit_frame_counter & delay) != 0x0)
        return;

    offset = 0x20;    
    y_pos = pProj->y_position;
    x_pos = pProj->x_position;

    switch (pProj->direction)
    {
        case ACD_DOWN:
            y_pos += 0x20;
            break;

        case ACD_UP:
            y_pos -= 0x20;
            break;
        
        case ACD_DIAGONALLY_UP:
            status = PROJ_STATUS_XFLIP;
            y_pos += 0x18;
            if ((pProj->status & status) != 0x0)
                x_pos -= 0x18;
            else
                x_pos += 0x18;
            break;

        case ACD_DIAGONALLY_DOWN:
            status = PROJ_STATUS_XFLIP;
            y_pos -= 0x18;
            if ((pProj->status & status) != 0x0)
                x_pos -= 0x18;
            else
                x_pos += 0x18;
            break;

        default:
            if ((pProj->status & PROJ_STATUS_XFLIP) != 0x0)
                x_pos -= offset;
            else
                x_pos += offset;
    }

    particle_set(y_pos, x_pos, effect);*/
}

void projectile_move_tumbling(struct projectile_data* pProj)
{
    u8 timer;
    i16 movement;
    u32 new_pos;
    enum projectile_status status;

    status = pProj->status & PROJ_STATUS_ON_SCREEN;

    if (status == 0x0)
        pProj->status = status;
    else
    {
        timer = pProj->timer;
        movement = tumbling_missiles_speed[timer];
        if (movement == 0x7FFF)
            new_pos = tumbling_missiles_speed[timer - 1] + pProj->y_position;
        else
        {
            pProj->timer = timer + 1;
            new_pos = pProj->y_position + movement;
        }
        pProj->y_position = new_pos;

        if ((pProj->status & PROJ_STATUS_XFLIP) != 0x0)
            new_pos = pProj->x_position + 0x4;
        else
            new_pos = pProj->x_position - 0x4;
        pProj->x_position = new_pos;
    }
}

void projectile_check_hit_block(struct projectile_data* pProj, u8 affecting_action, enum particle_effect_id effect)
{

}

void projectile_check_hit_sprite(void)
{

}

enum sprite_weakness_flags projectile_get_sprite_weakness(struct sprite_data* pSprite)
{

}

u8 projectile_ice_beam_deal_damage(struct sprite_data* pSprite, u16 damage)
{
    u8 freeze_timer;

    freeze_timer = 0x0;
    if (pSprite->health > damage)
    {
        pSprite->health -= damage;
        freeze_timer = 0xF0;
    }
    else
    {
        pSprite->health = 0x0;
        pSprite->properties |= SP_MAYBE_DESTROYED;
        pSprite->freeze_timer = 0x0;
        pSprite->palette_row = 0x0;
        if (pSprite->standing_on_sprite != FALSE && samus_data.standing_status == STANDING_ENEMY)
        {
            samus_data.standing_status = STANDING_MIDAIR;
            pSprite->standing_on_sprite = FALSE;
        }
        pSprite->pose = 0x62;
        pSprite->ignore_samus_collision_timer = 0x1;
    }

    pSprite->invicibility_stun_flash_timer = pSprite->invicibility_stun_flash_timer & 0x80 | 0x11;
    pSprite->properties |= SP_UNKNOWN;
    return freeze_timer;
}

u8 projectile_deal_damage(struct sprite_data* pSprite, u16 damage)
{
    /*u8 is_dead;

    is_dead = FALSE;
    if (pSprite->health > damage)
        pSprite->health -= damage;
    else
    {
        pSprite->health = 0x0;
        pSprite->properties |= SP_MAYBE_DESTROYED;
        pSprite->freeze_timer = 0x0;
        pSprite->palette_row = 0x0;
        if (pSprite->standing_on_sprite != FALSE && samus_data.standing_status == STANDING_ENEMY)
        {
            samus_data.standing_status = STANDING_MIDAIR;
            pSprite->standing_on_sprite = FALSE;
        }
        pSprite->pose = 0x62;
        pSprite->ignore_samus_collision_timer = 0x1;
        is_dead = TRUE;
    }

    pSprite->invicibility_stun_flash_timer = pSprite->invicibility_stun_flash_timer & 0x80 | 0x11;
    pSprite->properties |= SP_UNKNOWN;
    return is_dead;*/
}

struct sprite_data* projectile_hit_sprite_immune_to_projectiles(struct sprite_data* pSprite)
{
    /*u8 isft;

    isft = pSprite->invicibility_stun_flash_timer;
    if ((isft & 0x7F) < 0x2)
        pSprite->invicibility_stun_flash_timer = isft & 0x80 | 0x2;

    return pSprite;*/
}

struct sprite_data* projectile_hit_solid_sprite(struct sprite_data* pSprite)
{

}

void projectile_power_bomb_deal_damage(struct sprite_data* pSprite)
{

}

void projectile_hit_sprite(struct sprite_data* pSprite, u16 y_position, u16 x_position, u16 damage, enum particle_effect_id effect)
{
    enum sprite_weakness_flags weakness;

    if ((pSprite->properties & SP_SOLID_FOR_PROJECTILES) != 0x0)
    {
        projectile_hit_solid_sprite(pSprite);
        particle_set(y_position, x_position, effect);
    }
    else
    {
        if ((pSprite->properties & SP_IMMUNE_TO_PROJECTILES) != 0x0)
        {
            projectile_hit_sprite_immune_to_projectiles(pSprite);
            particle_set(y_position, x_position, PE_HTTING_SOMETHING_INVINCIBLE);
        }
        else
        {
            weakness = projectile_get_sprite_weakness(pSprite);
            if ((weakness & WEAKNESS_BEAM_BOMBS) != 0x0)
            {
                projectile_deal_damage(pSprite, damage);
                particle_set(y_position, x_position, effect);
            }
            else
            {
                projectile_hit_solid_sprite(pSprite);
                particle_set(y_position, x_position, PE_HTTING_SOMETHING_INVINCIBLE);
            }
        }
    }
}

void projectile_non_ice_charged_hit_sprite(struct sprite_data* pSprite, u16 y_position, u16 x_position, u16 damage, enum particle_effect_id effect)
{
    enum sprite_weakness_flags weakness;

    if ((pSprite->properties & SP_SOLID_FOR_PROJECTILES) != 0x0)
    {
        projectile_hit_solid_sprite(pSprite);
        particle_set(y_position, x_position, effect);
    }
    else
    {
        if ((pSprite->properties & SP_IMMUNE_TO_PROJECTILES) != 0x0)
        {
            projectile_hit_sprite_immune_to_projectiles(pSprite);
            particle_set(y_position, x_position, PE_HTTING_SOMETHING_INVINCIBLE);
        }
        else
        {
            weakness = projectile_get_sprite_weakness(pSprite);
            if ((weakness & (WEAKNESS_CHARGE_BEAM_PISTOL | WEAKNESS_BEAM_BOMBS)) != 0x0)
            {
                projectile_deal_damage(pSprite, damage);
                particle_set(y_position, x_position, effect);
            }
            else
            {
                projectile_hit_solid_sprite(pSprite);
                particle_set(y_position, x_position, PE_HTTING_SOMETHING_INVINCIBLE);
            }
        }
    }
}

void projectile_freeze_sprite(struct sprite_data* pSprite, u8 freeze_timer)
{
    pProj->freeze_timer = freeze_timer;
    pProj->palette_row = 0xF - (pProj->spriteset_gfx_slot + pProj->frozen_palette_row_offset);
    unk_2b20(0x140);
}

void projectile_ice_beam_hitting_sprite(struct sprite_data* pSprite, u16 y_position, u16 x_position, u16 damage, enum particle_effect_id effect)
{

}

void projectile_charged_ice_beam_hitting_sprite(struct sprite_data* pSprite, u16 y_position, u16 x_position, u16 damage, enum particle_effect_id effect)
{

}

void projectile_start_tumbling_missile(struct sprite_data* pSprite, struct projectile_data* pProj, enum projectile_type type)
{

}

void projectile_kraid_start_tumbling_missile(struct projectile_data* pProj, enum projectile_type type)
{

}

void projectile_missile_hit_sprite(struct sprite_data* pSprite, struct projectile_data* pProj , u16 y_position, u16 x_position)
{
    /*if ((pSprite->properties & SP_SOLID_FOR_PROJECTILES) != 0x0)
    {
        projectile_hit_solid_sprite(pSprite);
        particle_set(y_position, x_position, PE_HTTING_SOMETHING_WITH_MISSILE);
        if (pProj->movement_stage == 0x0)
            projectile_decrement_missile_counter(pProj);
        pProj->status = 0x0;
    }
    else
    {
        if ((pSprite->properties & SP_IMMUNE_TO_PROJECTILES) != 0x0)
            projectile_hit_sprite_immune_to_projectiles(pSprite);
        else
        {
            if ((projectile_get_sprite_weakness(pSprite) & WEAKNESS_MISSILES) != 0x0)
            {
                projectile_deal_damage(pSprite,0x14);
                particle_set(y_position, x_position, PE_HTTING_SOMETHING_WITH_MISSILE);
                if (pProj->movement_stage == 0x0)
                    projectile_decrement_missile_counter(pProj);
                pProj->status = 0x0;
                return;
            }
            else
                projectile_hit_solid_sprite(pSprite);
        }
        particle_set(y_position, x_position, PE_HTTING_SOMETHING_INVINCIBLE);
        projectile_start_tumbling_missile(pSprite, pProj, PROJ_TYPE_MISSILE);
    }*/
}

void projectile_super_missile_hit_sprite(struct sprite_data* pSprite, struct projectile_data* pProj , u16 y_position, u16 x_position)
{

}

void projectile_bomb_hit_sprite(struct sprite_data* pSprite)
{
    if ((pSprite->properties & SP_IMMUNE_TO_PROJECTILES) != 0x0)
    {
        projectile_hit_sprite_immune_to_projectiles(pSprite);
    }
    else
    {
        if ((pSprite->properties & SP_SOLID_FOR_PROJECTILES) != 0x0)
        {
            projectile_hit_solid_sprite(pSprite);
        }
        else
        {
            if ((projectile_get_sprite_weakness(pSprite) & WEAKNESS_BEAM_BOMBS) != 0x0)
                projectile_deal_damage(pSprite, 0x8);
            else
                projectile_hit_solid_sprite(pSprite);
        }
    }
}

void projectile_process_normal_beam(struct projectile_data* pProj)
{

}

void projectile_process_long_beam(struct projectile_data* pProj)
{

}

void projectile_process_ice_beam(struct projectile_data* pProj)
{

}

void projectile_check_wave_beam_hitting_blocks(struct projectile_data* pProj)
{

}

u32 projectile_process_wave_beam(struct projectile_data* pProj)
{

}

void projectile_process_plasma_beam(struct projectile_data* pProj)
{

}

void projectile_process_pistol(struct projectile_data* pProj)
{

}

void projectile_process_charged_normal_beam(struct projectile_data* pProj)
{

}

void projectile_process_charged_long_beam(struct projectile_data* pProj)
{

}

void projectile_process_charged_ice_beam(struct projectile_data* pProj)
{

}

void projectile_process_charged_wave_beam(struct projectile_data* pProj)
{

}

void projectile_process_charged_plasma_beam(struct projectile_data* pProj)
{

}

void projectile_process_charged_pistol(struct projectile_data* pProj)
{

}

void projectile_decrement_missile_counter(struct projectile_data* pProj)
{

}

void projectile_process_missile(struct projectile_data* pProj)
{

}

void projectile_decrement_super_missile(struct projectile_data* pProj)
{

}

void projectile_process_super_missile(struct projectile_data* pProj)
{

}

void projectile_morphball_launcher_launch_samus(struct projectile_data* pProj)
{

}

void projectile_check_samus_bomb_bounce(struct projectile_data* pProj)
{

}

void projectile_process_bomb(struct projectile_data* pProj)
{

}

void projectile_process_empty(struct projectile_data* pProj)
{

}

void projectile_process_power_bomb(struct projectile_data* pProj)
{

}