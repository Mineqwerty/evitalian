#define RAMIEL_ACT_CUTSCENE 0
#define RAMIEL_ACT_FIND_POINT 1
#define RAMIEL_ACT_DRILLING 2
#define RAMIEL_ACT_DOWN 3
#define RAMIEL_ACT_HURT 4
#define RAMIEL_ACT_BEAM 5
#define RAMIEL_ACT_DEATH 6


void bhv_ramiel_init(void) {
    o->oRamielHealth = 50;
    //obj_set_hitbox(o, &sSachielHitbox);
}

void bhv_ramiel_loop(void) {

    //cur_obj_update_floor_and_walls();
    //cur_obj_move_standard(-30);

    if (o->oTimer == 150 && gBattleTips[4] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[4] = 1;
        gBattleDialogIndex = 99;
    }

    gMarioState->enemyHealth = o->oRamielHealth;

    if (gMarioState->enemyHealth <= 0 && o->oAction != RAMIEL_ACT_DEATH) {
        gMarioState->enemyHealth = 0;
        o->oTimer = 0;
        o->oAction = RAMIEL_ACT_DEATH;
    }

    //print_text_fmt_int(20, 20, "SACHIEL HEALTH %d", o->oSachielHealth);
    //print_text_fmt_int(20, 40, "EVI HEALTH %d", gMarioState->eviHealth);

    switch(o->oAction) {
        case RAMIEL_ACT_CUTSCENE: ramiel_act_cutscene();
        break;
        case RAMIEL_ACT_FIND_POINT: ramiel_act_find_point();
        break;
        case RAMIEL_ACT_DRILLING: ramiel_act_drilling();
        break;
        case RAMIEL_ACT_DOWN: ramiel_act_down();
        break;
        case RAMIEL_ACT_HURT: ramiel_act_hurt();
        break;
        case RAMIEL_ACT_BEAM: ramiel_act_beam();
        break;
        case RAMIEL_ACT_DEATH: ramiel_act_death();
        break;
    }

    
}

void ramiel_act_cutscene(void) {
    f32 distToEvi;
    //struct Object *evitalian = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &distToEvi);
    //if (evitalian->oAction != 0) {
    o->oAction = RAMIEL_ACT_FIND_POINT;
    //}
}

void ramiel_act_find_point(void) {
    f32 *lateralDist;
    static Vec3f curRamielPos;
    vec3f_set(curRamielPos, o->oPosX, o->oPosY, o->oPosZ);
    static Vec3f targetRamielPos;

    if (o->oTimer % 60 == 0) {
            play_sound(SOUND_RAMIEL_IDLE, gGlobalSoundSource);
    }
    switch (o->oSubAction) {
        case 0:
            switch (random_u16() % 3) {
                case 0:
                    vec3f_set(targetRamielPos, -8800, 2000, 8800);
                break;
                case 1:
                    vec3f_set(targetRamielPos, 9300, 2000, -9100);
                break;
                case 2:
                    vec3f_set(targetRamielPos, 11100, 2000, 10000);
                break;
            }
            vec3f_get_lateral_dist(&curRamielPos, &targetRamielPos, &lateralDist);
                //print_text_fmt_int(100, 100, "%d", lateralDist);
                if (lateralDist > 1150000000) {
                    o->oSubAction++;
                }
        break;
        case 1:
        approach_vec3f_asymptotic(&curRamielPos, &targetRamielPos, 0.01f, 0.01f, 0.01f);
        vec3f_get_lateral_dist(&curRamielPos, &targetRamielPos, &lateralDist);
        //print_text_fmt_int(100, 100, "%d", lateralDist);
                if (lateralDist < 1140000000) {
                    o->oObjRamielDrill = spawn_object_relative(0, 0, 0, 0, o, MODEL_RAMIEL_DRILL, bhvRamielDrill);
                    o->oObjRamielDrill->oDrillHealth = 10;
                    gMarioState->deathTimer = 90.0f;
                    o->oAction = RAMIEL_ACT_DRILLING;
                }
        break;
    }

    o->oPosX = curRamielPos[0];
    o->oPosY = curRamielPos[1];
    o->oPosZ = curRamielPos[2];
}

void ramiel_act_drilling(void) {
    o->oMoveAngleYaw += 0x10;
    o->oFaceAngleYaw += 0x10;

    if (gBattleTips[9] == 0 && gBattleTips[8] == 2 && gBattleDialogIndex != 99) {
        gBattleTips[9] = 1;
        gBattleDialogIndex = 99;
    }
}

void ramiel_act_down(void) {
    struct Object *knife;
            f32 dist2;

            if (gBattleTips[5] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[5] = 1;
        gBattleDialogIndex = 99;
    }

    switch(o->oSubAction) {
        case 0:
            if (find_floor_height(o->oPosX, o->oPosY, o->oPosZ) > -5000) {
                o->oPosY -= 20.0f;
                o->oMoveAngleRoll += 0x50;
                o->oFaceAngleRoll += 0x50;
            }
            else {
                cur_obj_play_sound_1(SOUND_GENERAL_BREAK_BOX);
                cur_obj_shake_screen(2);
                o->oTimer = 0;
                o->oSubAction++;
            }
        break;
        case 1:
            o->oPosY += 50 * (o->oTimer % 3 - 1);
            knife = cur_obj_find_nearest_object_with_behavior(bhvEviKnifeHitbox, &dist2);
            if (knife != NULL && dist2 < 4000.0f) {
                o->oRamielHealth -= 15;
                obj_mark_for_deletion(knife);
                play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
                o->oAction = RAMIEL_ACT_HURT;
                o->oTimer = 0;
            }
            if (o->oTimer == 30) {
                o->oSubAction++;
            }
        break;
        case 2:
            knife = cur_obj_find_nearest_object_with_behavior(bhvEviKnifeHitbox, &dist2);
            if (knife != NULL && dist2 < 4000.0f) {
                o->oRamielHealth -= 15;
                obj_mark_for_deletion(knife);
                play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
                o->oAction = RAMIEL_ACT_HURT;
                o->oTimer = 0;
            }
        break;

    }
}

void ramiel_act_hurt(void) {
    if (gBattleTips[6] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[6] = 1;
        gBattleDialogIndex = 99;
    }

    if (o->oTimer < 90) {
        o->oPosY += 100 * (o->oTimer % 3 - 1);
        cur_obj_play_sound_1(SOUND_ENV_ELEVATOR1);
    }
    else if (o->oTimer == 90) {
        o->oObjRamielDrill = spawn_object_relative(0, 0, 1500, 0, o, MODEL_RAMIEL_HURT, bhvRamielHurt);
        play_sound(SOUND_RAMIEL_HURT, gGlobalSoundSource);
    }

    if (o->oTimer >= 150) {
        obj_mark_for_deletion(o->oObjRamielDrill);
        o->oMoveAngleRoll = 0;
        o->oFaceAngleRoll = 0;
        o->oTimer = 0;
        o->oAction = RAMIEL_ACT_BEAM;
    }
}

void ramiel_act_beam(void) {
    if (gBattleTips[7] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[7] = 1;
        gBattleDialogIndex = 99;
    }
    f32 dist;
            struct Object *eviiz_nuts = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
    switch(o->oSubAction) {
        case 0:
        obj_turn_toward_object(o, gMarioObject, 0x10, 0x400);
        o->oPosY += 20.0f;
        if (o->oTimer == 30) {
            play_sound(SOUND_RAMIEL_BEAM, gGlobalSoundSource);
            
            o->oObjRamielDrill = spawn_object_relative(0, 0, 0, 0, o, MODEL_RAMIEL_CHARGE, bhvRamielCharge);
        }
        if (o->oTimer >= 110) {
            obj_mark_for_deletion(o->oObjRamielDrill);
            o->oSubAction++;
        }
        break;
        case 1:
        o->oObjRamielBeam = spawn_object_relative(0, 0, 0, 0, o, MODEL_RAMIEL_BEAM, bhvRamielBeam);
        for (int i = 0; i < 20; i++) {
        struct Object *among = spawn_object_relative(0, 0, 0, 0, o, MODEL_NONE, bhvRamielBeamHitbox);
        among->oPosX += 1600*i*sins(o->oMoveAngleYaw);
        among->oPosZ += 1600*i*coss(o->oMoveAngleYaw);
        }
        
        //offsetHitbox1->oPosX += 1500*coss(o->oFaceAngleYaw);
        //offsetHitbox1->oPosZ += 1500*sins(o->oFaceAngleYaw);

        o->oObjRamielBeam->oFaceAnglePitch = 0x4000;
        o->oObjRamielBeam->oMoveAnglePitch = 0x4000;
         o->oSubAction++;
        break;
        case 2:
        if (o->oTimer >= 190) {
            obj_mark_for_deletion(o->oObjRamielBeam);
            o->oAction = RAMIEL_ACT_FIND_POINT;
            if (gBattleTips[8] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[8] = 1;
        gBattleDialogIndex = 99;
    }
        }
        break;
    }
}

void ramiel_act_death(void) {
    cur_obj_init_animation_with_accel_and_sound(2, 0.8f);
    if (o->oTimer % 10 == 0) {
        int x = 200 * (3 - random_u16() % 6);
        int y = 600 * (random_u16() % 12);
        int z = 200 * (3 - random_u16() % 6);
        spawn_object_relative(0, x, y, z, o, MODEL_EXPLOSION, bhvExplosion);
    }
    gPrevLevel = LEVEL_LLL;
    if (o->oTimer >= 90) {
        level_trigger_warp(gMarioState, WARP_OP_STAR_EXIT);
    }
}

struct SpawnParticlesInfo DrillStones = {
    0, 30, MODEL_PEBBLE, -2000, 40, 0, 20, 40, 252, 30, 50.0f, 0.0f
};

void bhv_drill_loop(void) {
    struct Object *bullet;
    f32 dist;

    struct Object *knife;
    f32 dist2;

    if (o->oTimer %15 == 0) {
        cur_obj_spawn_particles(&DrillStones);
    }

    bullet = cur_obj_find_nearest_object_with_behavior(bhvBulletBill, &dist);
    if (bullet != NULL && dist < 1000.0f && o->oDrillHealth > 0) {
        
        bullet->oInteractStatus |= INT_STATUS_INTERACTED;
        
        o->oDrillHealth -= 1;
        play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
        o->oTimer = 0;
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAMIEL_DRILL_HURT];
        
    }

    knife = cur_obj_find_nearest_object_with_behavior(bhvEviKnifeHitbox, &dist2);
            if (knife != NULL && dist2 < 1000.0f) {
                f32 dist3; 
                struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist3);
                if (evi->oAction != 5) {
                    evi->oForwardVel = -30.0f;
                    evi->oAction = 6;
                    play_sound(SOUND_ACTION_BONK, gGlobalSoundSource);
                    
                }
            }

    if (o->oTimer == 15) {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAMIEL_DRILL];
    }

    o->oMoveAngleYaw -= 0x200;
    o->oFaceAngleYaw -= 0x200;

    if (o->oDrillHealth <= 0) {
        gMarioState->deathTimer = -1;
        if (o->oTimer % 10 == 0) {
        int x = 50 * (3 - random_u16() % 6);
        int y = -600 * (random_u16() % 12);
        int z = 50 * (3 - random_u16() % 6);
        spawn_object_relative(0, x, y, z, o, MODEL_EXPLOSION, bhvExplosion);

        if (o->oTimer >= 90) {
            o->parentObj->oAction = RAMIEL_ACT_DOWN;
            spawn_object_relative(0, 0, -100, 0, o, MODEL_EXPLOSION, bhvExplosion);
            spawn_object_relative(0, 0, -500, 0, o, MODEL_EXPLOSION, bhvExplosion);
            spawn_object_relative(0, 0, -1000, 0, o, MODEL_EXPLOSION, bhvExplosion);
            spawn_object_relative(0, 0, -1500, 0, o, MODEL_EXPLOSION, bhvExplosion);
            spawn_object_relative(0, 0, -2000, 0, o, MODEL_EXPLOSION, bhvExplosion);
            obj_mark_for_deletion(o);
        }
    }
    }
}

void bhv_ramiel_hurt_model_loop(void) {
    if (o->oTimer < 20) {
        cur_obj_scale(((f32) o->oTimer * .05f) + .01f);
    }
    if (o->oTimer == 20) {
        if (o->oDistanceToMario < 5000) {
            f32 dist;
            struct Object *eviiz_nuts = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
            eviiz_nuts->oAction = 6;
            gMarioState->eviHealth -= 10;
        }
    }
}

void bhv_ramiel_charge_loop(void) {
    f32 dist;            
    struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
    o->oPosX = evi->oPosX;
    o->oPosY = evi->oPosY;
    o->oPosZ = evi->oPosZ;
    o->oFaceAngleYaw = 0x8000 + o->parentObj->oFaceAngleYaw;
    o->oMoveAngleYaw = 0x8000 + o->parentObj->oMoveAngleYaw;
}

void bhv_ramiel_beam_loop(void) {
    o->oFaceAnglePitch -= 0x200;
    o->oMoveAnglePitch -= 0x200;
}

void bhv_ramiel_beam_hitbox_loop(void) {
    f32 dist; 
            struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
    if (o->oTimer > 20) {
        
        if (evi->oAction == 6) {
            obj_mark_for_deletion(o);
        }

        if (o->oDistanceToMario < 1500.0f) {
            
            gMarioState->eviHealth -= 23;
            evi->oForwardVel = -150.0f;
            evi->oAction = 6;
            play_sound(SOUND_GENERAL_POUND_WOOD_POST, gGlobalSoundSource);
            obj_mark_for_deletion(o);
        }

        
    }

    if (o->oTimer > 40) {
        obj_mark_for_deletion(o);
    }
}

void bhv_ramiel_shard_loop(void) {
    object_step();
    f32 dist;  
    struct Object *ramiel = cur_obj_find_nearest_object_with_behavior(bhvRamiel, &dist);
    if (o->oShardHealthCounter != gMarioState->enemyHealth && ramiel && ramiel->oAction == RAMIEL_ACT_FIND_POINT && o->oDistanceToMario > 7000.0f) {
        o->oSubAction = 3;
        switch (o->oBehParams2ndByte) {
            case 0: 
                if (gMarioState->enemyHealth < 51) {
                    o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAMIEL_SHARD];
                    o->oSubAction = 0;
                }
            break;
            case 1: 
                if (gMarioState->enemyHealth < 31) {
                    o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAMIEL_SHARD];
                    o->oSubAction = 0;
                }
            break;
            case 2: 
                if (gMarioState->enemyHealth < 11) {
                    o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAMIEL_SHARD];
                    o->oSubAction = 0;
                }
            break;
        }
        o->oShardHealthCounter = gMarioState->enemyHealth;
    }
    switch (o->oSubAction) {
        case 0:
            if (o->oDistanceToMario < 4000.0f) {
                o->oSubAction++;
                o->oTimer = 0;
            }
        break;
        case 1:
            obj_turn_toward_object(o, gMarioObject, 0x10, 0x400);
            o->oFaceAnglePitch += 0x100;
            o->oMoveAnglePitch += 0x100;
            o->oVelY = 10.0f;
            if (o->oTimer >= 60) {
                o->oSubAction++;
            }
        break;
        case 2: 
        o->oVelY = -30.0f;
            o->oForwardVel = 130.0f;
            if (o->oDistanceToMario < 1500.0f) {
                f32 dist; 
                struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
                if (evi->oAction != 5) {
                    gMarioState->eviHealth -= 4;
                    evi->oForwardVel = -30.0f;
                    evi->oAction = 6;
                    play_sound(SOUND_GENERAL_POUND_WOOD_POST, gGlobalSoundSource);
                    
                }
                
                spawn_triangle_break_particles(8, MODEL_DIRT_ANIMATION, 2.0f, 4);
                play_sound(SOUND_GENERAL_BREAK_BOX, gGlobalSoundSource);
                o->oSubAction++;
            }
            if (o->oTimer >= 90) {
                spawn_triangle_break_particles(8, MODEL_DIRT_ANIMATION, 2.0f, 4);
                o->oSubAction++;
            }
        break;
        case 3:
            o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
            o->oPosX = o->oHomeX;
            o->oPosY = o->oHomeY;
            o->oPosZ = o->oHomeZ;
            o->oFaceAnglePitch = 0;
            o->oMoveAnglePitch = 0;
            o->oVelY = 0.0f;
            o->oForwardVel = 0.0f;
        break;
    }
}