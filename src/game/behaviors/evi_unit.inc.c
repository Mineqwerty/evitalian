#define EVI_ACT_CUTSCENE    0
#define EVI_ACT_IDLE    1
#define EVI_ACT_WALK    2
#define EVI_ACT_SLASH    3
#define EVI_ACT_SHOOT    4
#define EVI_ACT_GUARD    5
#define EVI_ACT_KNOCKBACK    6
#define EVI_ACT_DEATH   7

static struct ObjectHitbox sEviHitbox = {
    /* interactType: */ INTERACT_MR_BLIZZARD,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 0,
    /* health: */ 1,
    /* numLootCoins: */ 0,
    /* radius: */ 80,
    /* height: */ 160,
    /* hurtboxRadius: */ 80,
    /* hurtboxHeight: */ 160,
};



void bhv_evi_unit_init(void) {
obj_set_hitbox(o, &sEviHitbox);
gMarioState->eviHealth = 50;
gMarioState->deathTimer = -1;

//TODO: delete this
o->oAction = EVI_ACT_CUTSCENE;
//TODO: change this to 1
//gBattleDialogIndex = 0;

if (gCurrLevelNum == LEVEL_WMOTR && o->oDistanceToMario > 5000.0f) {
    //obj_mark_for_deletion(o);
}
}

void bhv_evi_unit_loop(void) {

    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(-30);

    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
    gMarioState->pos[0] = o->oPosX;
    gMarioState->pos[1] = o->oPosY + 1200.0f;
    gMarioState->pos[2] = o->oPosZ;
    gMarioState->faceAngle[1] = o->oFaceAngleYaw;

    if (gMarioState->eviHealth <= 0 && o->oAction != EVI_ACT_DEATH) {
        gMarioState->eviHealth = 0;
        o->oTimer = 0;
        o->oAction = EVI_ACT_DEATH;
    }

    if (gMarioState->deathTimer <= 0.0f && gMarioState->deathTimer >= -0.7f) {
        gMarioState->eviHealth = 0;
        o->oTimer = 0;
        o->oAction = EVI_ACT_DEATH;
    }

    switch(o->oAction) {
        case EVI_ACT_CUTSCENE: evi_act_cutscene();
        break;
        case EVI_ACT_IDLE: evi_act_idle();
        break;
        case EVI_ACT_WALK: evi_act_walk();
        break;
        case EVI_ACT_SLASH: evi_act_slash();
        break;
        case EVI_ACT_SHOOT: evi_act_shoot();
        break;
        case EVI_ACT_GUARD: evi_act_guard();
        break;
        case EVI_ACT_KNOCKBACK: evi_act_knockback();
        break;
        case EVI_ACT_DEATH: evi_act_death();
        break;
    }
}

void evi_act_idle(void) {
    cur_obj_init_animation(0);
    if (gPlayer1Controller->stickX != 0 || gPlayer1Controller->stickY != 0) {
            o->oAction = EVI_ACT_WALK;
        }
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oAction = EVI_ACT_SLASH;
    }
    if (gPlayer1Controller->buttonPressed & B_BUTTON) {
        o->oAction = EVI_ACT_SHOOT;
    }
    if (gPlayer1Controller->buttonDown & Z_TRIG) {
        o->oAction = EVI_ACT_GUARD;
    }
}


void evi_act_walk(void) {

    struct Controller *controller = gMarioState->controller;
    f32 mag = ((controller->stickMag / 64.0f) * (controller->stickMag / 64.0f)) * 32.0f;


//rotation if there is a mag
    if (mag > 1) {
        cur_obj_rotate_yaw_toward((atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw), 0x400);
    }
    else if (o->oForwardVel > 0) {
        //decelerate if no mag
        o->oForwardVel *= 0.6f;
        mag = 0;
    }
    

//accelerate if under mag
    if (o->oForwardVel < mag * 3.0f) {
        if (o->oForwardVel < 5.0f) {
            o->oForwardVel = 5.0f;
        }
        o->oForwardVel *= 1.4f;
    }

//set fvel to 0 if its under 1
    if (o->oForwardVel < 1.0f) {
        o->oForwardVel = 0;
    }

    f32 cappedMag = mag;
    if (cappedMag < o->oForwardVel) {
        cappedMag = o->oForwardVel;
    }

//if fvel is over 1000, set run anim. Otherwise, set walk anim.
    if (o->oForwardVel > 50) {
       // if (cur_obj_check_if_near_animation_end()) {
        cur_obj_init_animation_with_accel_and_sound(2, 1.2f * (o->oForwardVel/(cappedMag+1)));
        //}
    }
    else {
        
        cur_obj_init_animation_with_accel_and_sound(1, 1.2f * (o->oForwardVel/(cappedMag+1)));
        
    }

    //print_text_fmt_int(100, 100, "%d", o->header.gfx.animInfo.animFrame);

    if (o->header.gfx.animInfo.animFrame == 10 || o->header.gfx.animInfo.animFrame == 11 ||o->header.gfx.animInfo.animFrame == 30 || o->header.gfx.animInfo.animFrame == 31) {
        play_sound(SOUND_GENERAL_POUND_ROCK, gGlobalSoundSource);
    }

//set other actions
if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oAction = EVI_ACT_SLASH;
    }
    if (gPlayer1Controller->buttonPressed & B_BUTTON) {
        
        o->oAction = EVI_ACT_SHOOT;
    }

    if (gPlayer1Controller->buttonDown & Z_TRIG) {
        
        o->oAction = EVI_ACT_GUARD;
    }

//set idle action if not moving and not intended to move
    if (o->oForwardVel == 0 && mag == 0) {
        o->oAction = EVI_ACT_IDLE;
    }
}

void evi_act_slash(void) {
    cur_obj_init_animation(3);

    if (o->header.gfx.animInfo.animFrame == 1) {
        play_sound(SOUND_OBJ_CANNON3, gGlobalSoundSource);
        }

    if (o->header.gfx.animInfo.animFrame == 10) {
        play_sound(SOUND_GENERAL_SWISH_WATER, gGlobalSoundSource);
        }
        if (o->header.gfx.animInfo.animFrame == 13) {
            spawn_object_relative(0, -120, 1100, 850, o, MODEL_NONE, bhvEviKnifeHitbox);
        }

    if (cur_obj_check_if_at_animation_end()) {
        o->oAction = EVI_ACT_IDLE;
    }

    //decelerate if not stopped
    if (o->oForwardVel > 0) {
        o->oForwardVel *= 0.9f;
    }
    if (o->oForwardVel < 1) {
        o->oForwardVel = 0;
    }

}



void evi_act_shoot(void) {
//rotation
    struct Controller *controller = gMarioState->controller;
    f32 mag = ((controller->stickMag / 64.0f) * (controller->stickMag / 64.0f)) * 32.0f;

    if (gBattleTips[1] == 0 && gBattleDialogIndex != 99 && gCurrLevelNum == LEVEL_CCM) {
        gBattleTips[1] = 1;
        gBattleDialogIndex = 99;
    }

    switch (o->oSubAction) {
    case 0:
        cur_obj_init_animation_with_accel_and_sound(4, 1.4);

        if (o->header.gfx.animInfo.animFrame == 1) {
        play_sound(SOUND_OBJ_CANNON3, gGlobalSoundSource);
        }

        if (cur_obj_check_if_at_animation_end()) {
            spawn_object_relative(0, -120, 1100, 850, o, MODEL_BULLET_BILL, bhvBulletBill);
            play_sound(SOUND_OBJ_POUNDING_CANNON, gGlobalSoundSource);
        o->oSubAction++;
        }
    break;
    case 1:
        cur_obj_init_animation_with_accel_and_sound(5, 1.4);
        if (cur_obj_check_if_at_animation_end() && gPlayer1Controller->buttonPressed & B_BUTTON) {
            o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        spawn_object_relative(0, -120, 1100, 850, o, MODEL_BULLET_BILL, bhvBulletBill);
        play_sound(SOUND_OBJ_POUNDING_CANNON, gGlobalSoundSource);
        
        }

        if (gPlayer1Controller->buttonDown & Z_TRIG) {
            o->oPosX += 0.5f*mag*sins(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
            o->oPosZ += 0.5f*mag*coss(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
        }

        if (gPlayer1Controller->buttonPressed & A_BUTTON || gPlayer1Controller->buttonPressed & L_TRIG) {
            o->oSubAction++;
        }
    break;
    case 2:
        cur_obj_init_animation_with_accel_and_sound(6, 1.4);
        if (cur_obj_check_if_at_animation_end()) {
        o->oAction = EVI_ACT_IDLE;
        }
    break;

    }


//rotation if there is a mag
    if (mag > 1 && !(gPlayer1Controller->buttonDown & Z_TRIG)) {
        cur_obj_rotate_yaw_toward((atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw), 0x100);
    }

    //decelerate if not stopped
    if (o->oForwardVel > 0) {
        o->oForwardVel *= 0.6f;
    }
    if (o->oForwardVel < 1) {
        o->oForwardVel = 0;
    }
}

void evi_act_guard(void) {
    //rotation
    struct Controller *controller = gMarioState->controller;
    f32 mag = ((controller->stickMag / 64.0f) * (controller->stickMag / 64.0f)) * 32.0f;

    switch (o->oSubAction) {
    case 0:
    o->oForwardVel = 0;
    cur_obj_init_animation_with_accel_and_sound(7, 1.0);

    if (gPlayer1Controller->buttonPressed & A_BUTTON || gPlayer1Controller->buttonPressed & B_BUTTON) {
        play_sound(SOUND_AT_FIELD, gGlobalSoundSource);
        o->oObjEviAT = spawn_object_relative(0, 0, 1100, 650, o, MODEL_AT_FIELD, bhvATField);
        o->oObjEviAT->oTimer = 0;
        o->oSubAction = 3;
    }
    else if (cur_obj_check_if_at_animation_end()) {
        o->oSubAction++;
    }
    break;
    case 1:

    if (gPlayer1Controller->buttonPressed & A_BUTTON || gPlayer1Controller->buttonPressed & B_BUTTON) {
        play_sound(SOUND_AT_FIELD, gGlobalSoundSource);
        o->oObjEviAT = spawn_object_relative(0, 0, 1100, 650, o, MODEL_AT_FIELD, bhvATField);
        o->oObjEviAT->oTimer = 0;
        o->oSubAction = 3;
    }

        if (mag < 5) {
        cur_obj_init_animation_and_anim_frame(7, 10);
        }
        if (!(gPlayer1Controller->buttonDown & Z_TRIG)) {
            o->oSubAction++;
        }
    break;
    case 2:
        cur_obj_init_animation_with_accel_and_sound(8, 1.0);
        if (cur_obj_check_if_at_animation_end()) {
            if (o->oObjEviAT) {
            obj_mark_for_deletion(o->oObjEviAT);
            }
            o->oAction = EVI_ACT_IDLE;
        }
    break;

    //AT field up
    case 3:
        if (mag < 5) {
        cur_obj_init_animation_and_anim_frame(7, 10);
        }

        if (o->oObjEviAT->oTimer >= 120) {
            o->oObjEviAT->oDeleteMe = 1;
            o->oSubAction = 4;
        }

        //if (!(gPlayer1Controller->buttonDown & A_BUTTON) && !(gPlayer1Controller->buttonDown & B_BUTTON) && o->oObjEviAT) {
            //obj_mark_for_deletion(o->oObjEviAT);
        //}

        if (!(gPlayer1Controller->buttonDown & Z_TRIG)) {
            o->oSubAction = 2;
        }
    break;

    //AT FIELD down, cant deploy again unless you drop guard
    case 4:
        if (mag < 5) {
        cur_obj_init_animation_and_anim_frame(7, 10);
        }
        if (!(gPlayer1Controller->buttonDown & Z_TRIG)) {
            o->oSubAction = 2;
        }
    break;
}

if (mag > 5 && gPlayer1Controller->buttonDown & Z_TRIG && o->oSubAction > 0) {
            cur_obj_init_animation_with_accel_and_sound(9, 1);
            o->oPosX += 0.5f*mag*sins(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
            o->oPosZ += 0.5f*mag*coss(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
            
        if (o->oObjEviAT) {
            o->oObjEviAT->oPosX += 0.5f*mag*sins(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
            o->oObjEviAT->oPosZ += 0.5f*mag*coss(atan2s(-gPlayer1Controller->stickY, gPlayer1Controller->stickX) + gMarioState->area->camera->yaw);
        }
        }
}

void evi_act_knockback(void) {
    if (gBattleTips[2] == 0 && gBattleDialogIndex != 99 && gCurrLevelNum == LEVEL_CCM) {
        gBattleTips[2] = 1;
        gBattleDialogIndex = 99;
    }

    cur_obj_init_animation(10);
    if (cur_obj_check_if_at_animation_end()) {
        o->oAction = EVI_ACT_IDLE;
    }
}

void evi_act_death(void) {
    cur_obj_init_animation_with_accel_and_sound(10, 0.2f);
    if (o->oTimer % 10 == 0) {
        int x = 200 * (3 - random_u16() % 6);
        int y = 600 * (random_u16() % 12);
        int z = 200 * (3 - random_u16() % 6);
        spawn_object_relative(0, x, y, z, o, MODEL_EXPLOSION, bhvExplosion);
    }

    if (o->oTimer >= 90) {
        level_trigger_warp(gMarioState, WARP_OP_DEATH);
    }
}

void evi_act_cutscene(void) {

    cur_obj_init_animation(0);
    if(find_floor_height(o->oPosX, o->oPosY, o->oPosZ) < -5000){
        o->oVelY = 20.0f;
        if (o->oTimer == 30) {
        play_sound(SOUND_OBJ_CANNON1, gGlobalSoundSource);
        }
        
    }
    
    if (o->oTimer >= 60 && gCurrLevelNum == LEVEL_CCM) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        gBattleDialogIndex += 1;
        gAButtonPrompt = 0;

        if (gBattleDialogIndex >= 8) {
            o->oAction = EVI_ACT_IDLE;
            gBattleDialogIndex = 0;
        }
    }
}

if (gCurrLevelNum == LEVEL_LLL && find_floor_height(o->oPosX, o->oPosY, o->oPosZ) > -5000) {
    o->oAction = EVI_ACT_IDLE;
            gBattleDialogIndex = 0;
}

if (gCurrLevelNum == LEVEL_WF && o->oTimer > 30) {
    o->oAction = EVI_ACT_IDLE;
}

if (gCurrLevelNum == LEVEL_WMOTR && gCutsceneIndex == 1) {
    obj_mark_for_deletion(o);
}

}

void bhv_evi_knife_hitbox_loop(void) {
    if (o->oTimer >= 6) {
        obj_mark_for_deletion(o);
    }
}

void bhv_at_field_loop(void) {
    if (o->oDeleteMe == 1) {
        spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 6.0f, 4);
        play_sound(SOUND_GENERAL_BREAK_BOX, gGlobalSoundSource);
        obj_mark_for_deletion(o);
    }
}

Gfx *geo_switch_evi_knife(s32 callContext, struct GraphNode *node, UNUSED Mat4 *mtx) {
    if (callContext == GEO_CONTEXT_RENDER) {
        struct Object *obj = (struct Object *) gCurGraphNodeObject;
        struct GraphNodeSwitchCase *switchCase = (struct GraphNodeSwitchCase *) node;

        if (obj->oAction == 3) {
        switchCase->selectedCase = 2;
        }
        else {
            switchCase->selectedCase = 0;
        }
    }

    }