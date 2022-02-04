//this file is an actual travesty, apologies to the stray repo checker

#define SACHIEL_ACT_CUTSCENE 0
#define SACHIEL_ACT_IDLE 1
#define SACHIEL_ACT_ROAM 2
#define SACHIEL_ACT_WALK_TO_MARIO 3
#define SACHIEL_ACT_FLY 4
#define SACHIEL_ACT_NEAR_MARIO 5
#define SACHIEL_ACT_ATTACK 6
#define SACHIEL_ACT_BEAM 7
#define SACHIEL_ACT_AT_FIELD 8
#define SACHIEL_ACT_DEATH 9

static struct ObjectHitbox sSachielHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 300,
    /* height:            */ 1500,
    /* hurtboxRadius:     */ 300,
    /* hurtboxHeight:     */ 1500,
};

void bhv_sachiel_init(void) {
    o->oSachielHealth = 50;
    obj_set_hitbox(o, &sSachielHitbox);
}

void bhv_sachiel_loop(void) {

    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(-30);

    struct Object *bullet;
    f32 dist;

    bullet = cur_obj_find_nearest_object_with_behavior(bhvBulletBill, &dist);
    if (bullet != NULL && dist < 1200.0f) {
        
        bullet->oInteractStatus |= INT_STATUS_INTERACTED;
        if (o->oAction != SACHIEL_ACT_AT_FIELD) {
        o->oSachielHealth -= 1;
        play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
        o->oBulletCounter += 1;
        if (o->oBulletCounter == 5) {
            o->oBulletCounter = 0;
            o->oAction = SACHIEL_ACT_AT_FIELD;
            o->oTimer = 0;

            if (gBattleTips[3] == 0 && gBattleDialogIndex != 99) {
        gBattleTips[3] = 1;
        gBattleDialogIndex = 99;
    }
        }
        }
    }

    struct Object *knife;
    f32 dist2;

    knife = cur_obj_find_nearest_object_with_behavior(bhvEviKnifeHitbox, &dist2);
    if (knife != NULL && dist2 < 1600.0f) {
        o->oSachielHealth -= 4;
        obj_mark_for_deletion(knife);
        play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
        

        if (o->oAction == SACHIEL_ACT_AT_FIELD) {
            if (o->oObjSachielAT) {
                o->oObjSachielAT->oDeleteMe = 1;
                
            }
            o->oAction = SACHIEL_ACT_FLY;
            o->oVelY = 50.0f;
        }
        else {
            o->oAction = SACHIEL_ACT_FLY;
            o->oVelY = 20.0f;
        }
        
    }

    gMarioState->enemyHealth = o->oSachielHealth;

    if (gMarioState->enemyHealth <= 0 && o->oAction != SACHIEL_ACT_DEATH) {
        gMarioState->enemyHealth = 0;
        o->oTimer = 0;
        o->oAction = SACHIEL_ACT_DEATH;
    }

    //print_text_fmt_int(20, 20, "SACHIEL HEALTH %d", o->oSachielHealth);
    //print_text_fmt_int(20, 40, "EVI HEALTH %d", gMarioState->eviHealth);

    switch(o->oAction) {
        case SACHIEL_ACT_CUTSCENE: sachiel_act_cutscene();
        break;
        case SACHIEL_ACT_IDLE: sachiel_act_idle();
        break;
        case SACHIEL_ACT_ROAM: sachiel_act_roam();
        break;
        case SACHIEL_ACT_WALK_TO_MARIO: sachiel_act_walk_to_mario();
        break;
        case SACHIEL_ACT_FLY: sachiel_act_fly();
        break;
        case SACHIEL_ACT_NEAR_MARIO: sachiel_act_near_mario();
        break;
        case SACHIEL_ACT_ATTACK: sachiel_act_attack();
        break;
        case SACHIEL_ACT_BEAM: sachiel_act_beam();
        break;
        case SACHIEL_ACT_AT_FIELD: sachiel_act_at_field();
        break;
        case SACHIEL_ACT_DEATH: sachiel_act_death();
        break;
    }

    f32 distToEvi;
    struct Object *evitalian = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &distToEvi);
    if (evitalian->oAction == 5 && evitalian->oSubAction == 3 && o->oDistanceToMario < 2000 && evitalian->oFaceAngleYaw + 0x8000 > o->oFaceAngleYaw - 0x3000 && evitalian->oFaceAngleYaw + 0x8000 < o->oFaceAngleYaw + 0x3000) {
        o->oForwardVel = -60;
    }
}

void sachiel_act_cutscene(void) {
    f32 distToEvi;
    struct Object *evitalian = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &distToEvi);
    if (evitalian->oAction != 0) {
    o->oAction = SACHIEL_ACT_IDLE;
    }
}

void sachiel_act_idle(void) {
    o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
}

void sachiel_act_roam(void) {

    cur_obj_init_animation(1);

    f32 calcPosX;
    f32 calcPosZ;
    
    calcPosX = o->oPosX + 4000*sins(o->oFaceAngleYaw);
    calcPosZ = o->oPosZ + 4000*coss(o->oFaceAngleYaw);

    if (find_floor_height(calcPosX, o->oPosY, calcPosZ) < -5000) {
        f32 upperPosX;
        f32 upperPosZ;
        upperPosX = o->oPosX + 2000*sins(o->oFaceAngleYaw + 0x4000);
        upperPosZ = o->oPosZ + 2000*coss(o->oFaceAngleYaw + 0x4000);

        f32 lowerPosX;
        f32 lowerPosZ;
        lowerPosX = o->oPosX + 2000*sins(o->oFaceAngleYaw - 0x4000);
        lowerPosZ = o->oPosZ + 2000*coss(o->oFaceAngleYaw - 0x4000);

        Vec3f aheadPos;
        vec3f_set(aheadPos, calcPosX, o->oPosY, calcPosZ);
        struct WallCollisionData wallCollisionData;

        resolve_and_return_wall_collisions(aheadPos, 0.0f, 50.0f, &wallCollisionData);
        u16 randomRotDisp = random_u16() / 8;

        if (find_floor_height(upperPosX, o->oPosY, upperPosZ) > -5000) {
            if (wallCollisionData.walls[0]) {
            o->oMoveAngleYaw = -0x4000 + randomRotDisp + atan2s(wallCollisionData.walls[0]->normal.z, wallCollisionData.walls[0]->normal.x);
            }
            else {
                o->oMoveAngleYaw += 0x4000;
            }
        }
        else if (find_floor_height(lowerPosX, o->oPosY, lowerPosZ) > -5000) {
            if (wallCollisionData.walls[0]) {
            o->oMoveAngleYaw = 0x4000 + randomRotDisp + atan2s(wallCollisionData.walls[0]->normal.z, wallCollisionData.walls[0]->normal.x);
            }
            else {
                o->oMoveAngleYaw += 0x4000;
            }
        }
        

        
    }

    //o->oMoveAngleYaw += 0x200;
    o->oForwardVel = 30.0f;

    if (o->oDistanceToMario < 10000) {
        o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
    }
}

void sachiel_act_walk_to_mario(void) {
    cur_obj_init_animation(1);

    f32 calcPosXLeft;
    f32 calcPosZLeft;
    f32 calcPosXRight;
    f32 calcPosZRight;
    f32 calcPosX;
    f32 calcPosZ;
    int wallTimer;
    int wallFlag = 0;

    o->oForwardVel = 60.0f;
    
    calcPosX = o->oPosX + 250*sins(o->oFaceAngleYaw);
    calcPosZ = o->oPosZ + 250*coss(o->oFaceAngleYaw);
    
    calcPosXLeft = o->oPosX + 1000*sins(o->oFaceAngleYaw - 0x2000);
    calcPosZLeft = o->oPosZ + 1000*coss(o->oFaceAngleYaw - 0x2000);

    calcPosXRight = o->oPosX + 1000*sins(o->oFaceAngleYaw + 0x2000);
    calcPosZRight = o->oPosZ + 1000*coss(o->oFaceAngleYaw + 0x2000);

    if (find_floor_height(calcPosXRight, o->oPosY, calcPosZRight) < -5000) {
        if (o->oFaceAngleYaw <= 0x2000 && o->oFaceAngleYaw >= -0x2000) {
            o->oFaceAngleYaw = 0;
        }
        else if (o->oFaceAngleYaw <= 0x6000 && o->oFaceAngleYaw > 0x2000) {
            o->oFaceAngleYaw = 0x4000;
        }
        else if (o->oFaceAngleYaw < -0x2000 && o->oFaceAngleYaw >= -0x6000) {
            o->oFaceAngleYaw = -0x4000;
        }
        else if (o->oFaceAngleYaw < -0x6000 && o->oFaceAngleYaw > 0x6000) {
            o->oFaceAngleYaw = 0x8000;
        }

        if(find_floor_height(calcPosXLeft, o->oPosY, calcPosZLeft) < -5000){
            o->oFaceAngleYaw += 0x8000;
        }
    }
    else if(find_floor_height(calcPosXLeft, o->oPosY, calcPosZLeft) < -5000) {
        if (o->oFaceAngleYaw <= 0x2000 && o->oFaceAngleYaw >= -0x2000) {
            o->oFaceAngleYaw = 0;
        }
        else if (o->oFaceAngleYaw <= 0x6000 && o->oFaceAngleYaw > 0x2000) {
            o->oFaceAngleYaw = 0x4000;
        }
        else if (o->oFaceAngleYaw < -0x2000 && o->oFaceAngleYaw >= -0x6000) {
            o->oFaceAngleYaw = -0x4000;
        }
        else if (o->oFaceAngleYaw < -0x6000 && o->oFaceAngleYaw > 0x6000) {
            o->oFaceAngleYaw = 0x8000;
        }
    }
    else {
        obj_turn_toward_object(o, gMarioObject, 0x10, 0x400);
    }

    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        wallTimer += 1;
    }
    else {
        wallTimer = 0;
    }

    

    if (find_floor_height(calcPosX, o->oPosY, calcPosZ) < -5000 && wallFlag == 0) {
        /*
        f32 upperPosX;
        f32 upperPosZ;
        upperPosX = o->oPosX + 2000*sins(o->oFaceAngleYaw + 0x4000);
        upperPosZ = o->oPosZ + 2000*coss(o->oFaceAngleYaw + 0x4000);

        f32 lowerPosX;
        f32 lowerPosZ;
        lowerPosX = o->oPosX + 2000*sins(o->oFaceAngleYaw - 0x4000);
        lowerPosZ = o->oPosZ + 2000*coss(o->oFaceAngleYaw - 0x4000);

        Vec3f aheadPos;
        vec3f_set(aheadPos, calcPosX, o->oPosY, calcPosZ);
        struct WallCollisionData wallCollisionData;

        resolve_and_return_wall_collisions(aheadPos, 0.0f, 50.0f, &wallCollisionData);
        

        if (find_floor_height(upperPosX, o->oPosY, upperPosZ) > -5000) {
            if (wallCollisionData.walls[0]) {
            o->oMoveAngleYaw = -0x4000 + atan2s(wallCollisionData.walls[0]->normal.z, wallCollisionData.walls[0]->normal.x);
            }
            else {
                o->oMoveAngleYaw += 0x4000;
            }
        }
        else if (find_floor_height(lowerPosX, o->oPosY, lowerPosZ) > -5000) {
            if (wallCollisionData.walls[0]) {
            o->oMoveAngleYaw = 0x4000 + atan2s(wallCollisionData.walls[0]->normal.z, wallCollisionData.walls[0]->normal.x);
            }
            else {
                o->oMoveAngleYaw += 0x4000;
            }
        }
        */
o->oMoveAngleYaw += 0x8000;
        
    }
//not TEMPORARY :(
if (o->oDistanceToMario < 7000) {
    o->oAction = SACHIEL_ACT_NEAR_MARIO;
    o->oTimer = 0;
}

}

void sachiel_act_fly(void) {
    cur_obj_init_animation(2);

    if (o->oMoveFlags & OBJ_MOVE_LANDED) {
        o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
    }
    o->oForwardVel = -400;

}

void sachiel_act_near_mario(void) {
    obj_turn_toward_object(o, gMarioObject, 0x10, 0x800);
    cur_obj_init_animation(0);
    o->oForwardVel = 0.0f;
    if (o->oTimer >= 30) {
        if (o->oDistanceToMario < 1500.0f) {
            switch (random_u16() % 2) {
                case 0:
            o->oAction = SACHIEL_ACT_ATTACK;
            break;
            case 1:
            o->oAction = SACHIEL_ACT_FLY;
            o->oVelY = 50.0f;
            break;
        }
        }
        else {
        switch (random_u16() % 3) {
            case 0:
            o->oAction = SACHIEL_ACT_FLY;
            o->oVelY = 50.0f;
            break;
            case 1:
            o->oAction = SACHIEL_ACT_BEAM;
            break;
            case 2:
            o->oAction = SACHIEL_ACT_ATTACK;
            break;
            o->oTimer = 0;
        }
        }
    }

}

void sachiel_act_attack(void) {
    f32 dist;
    f32 dist2;
            
            struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);

    switch(o->oSubAction) {
        case 0:
    cur_obj_init_animation(2);
    if (o->header.gfx.animInfo.animFrame >= 12) {
        o->oForwardVel = 350.0f;
    }
    else {
        obj_turn_toward_object(o, gMarioObject, 0x10, 0x800);
    }

    //is mario guarding?
    if (evi->oAction == 5 && evi->oSubAction == 3 && evi->oFaceAngleYaw + 0x8000 > o->oFaceAngleYaw - 0x3000 && evi->oFaceAngleYaw + 0x8000 < o->oFaceAngleYaw + 0x3000) {
        //guarding mario has an at field, so sachiel needs to stop farther away.
        if (o->oDistanceToMario < 3000.0f) {
            o->oSubAction++;
        }
        else if (o->oTimer >= 90) {
            o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
        }
        
    }
    else {
        //check if close enough to attack
        if (o->oDistanceToMario < 1500.0f) {
            o->oSubAction++;
        }
        else if (o->oTimer >= 90) {
            o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
        }
    }
    
    break;
    case 1:
    cur_obj_init_animation(3);
    o->oForwardVel = 0.0f;
    obj_turn_toward_object(o, gMarioObject, 0x10, 0x800);
    if (o->header.gfx.animInfo.animFrame == 12) {
        o->oObjCrossBeam = spawn_object_relative(0, 0, 1000, 700, o, MODEL_NONE, bhvSachielHurtEviHitbox);
    }
    if (cur_obj_check_if_at_animation_end()) {
        if ( o->oObjCrossBeam) {
        obj_mark_for_deletion(o->oObjCrossBeam);
        }
        
    }
    if (o->oTimer >= 130) {
        if (o->oDistanceToMario < 4000) {
        o->oAction = SACHIEL_ACT_NEAR_MARIO;
    }
    else {
        o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
    }
    break;
    }
}


    int wallTimer;
    if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
        wallTimer += 1;
    }
    else {
        wallTimer = 0;
    }
}

void sachiel_act_beam(void) {
    obj_turn_toward_object(o, gMarioObject, 0x10, 0x800);
    switch(o->oSubAction) {
        case 0:
    cur_obj_init_animation(4);
    if (o->oTimer == 1) {
        play_sound(SOUND_CROSS, gGlobalSoundSource);
    }
    if (o->header.gfx.animInfo.animFrame == 22) {
        if (o->oDistanceToMario < 4000) {
        o->oObjCrossBeam = spawn_object_relative(0, 0, 1000, 200, o, MODEL_SACHIEL_CROSS, bhvSachielCross);
        o->oObjCrossBeam->oFaceAnglePitch = 0x4000;
        o->oObjCrossBeam->oMoveAnglePitch = 0x4000;
        }
        else {
            f32 dist;
            
            struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
            o->oObjCrossBeam = spawn_object_relative(1, 0, 0, 0, evi, MODEL_SACHIEL_CROSS, bhvSachielCross);
        }
    }
    if (cur_obj_check_if_at_animation_end()) {
        o->oSubAction++;
    }
    break;
    case 1:
    if (o->oTimer >= 60) {
        if (o->oDistanceToMario < 4000) {
        o->oAction = SACHIEL_ACT_NEAR_MARIO;
    }
    else {
        o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
    }
    }
}
}

void sachiel_act_at_field(void) {
    o->oForwardVel = 0;
    f32 dist;
    if (o->header.gfx.animInfo.animFrame == 22) {
        cur_obj_init_animation_with_accel_and_sound(4, 0.01);
        if (!cur_obj_find_nearest_object_with_behavior(bhvATField, &dist)) {
            o->oTimer = 0;
            o->oObjSachielAT = spawn_object_relative(0, 0, 1000, 1000, o, MODEL_AT_FIELD, bhvATField);
            play_sound(SOUND_AT_FIELD, gGlobalSoundSource);
        }
    }
    else {
        cur_obj_init_animation(4);
    }

    if (o->oTimer >= 150) {
        cur_obj_init_animation_with_accel_and_sound(4, 1);
        obj_mark_for_deletion(o->oObjSachielAT);
        if (cur_obj_check_if_at_animation_end()) {
            o->oAction = SACHIEL_ACT_WALK_TO_MARIO;
        }

    }
}

void sachiel_act_death(void) {
    cur_obj_init_animation_with_accel_and_sound(2, 0.8f);
    if (o->oTimer % 10 == 0) {
        int x = 200 * (3 - random_u16() % 6);
        int y = 600 * (random_u16() % 12);
        int z = 200 * (3 - random_u16() % 6);
        spawn_object_relative(0, x, y, z, o, MODEL_EXPLOSION, bhvExplosion);
    }

    if (o->oTimer >= 90) {
        level_trigger_warp(gMarioState, WARP_OP_STAR_EXIT);
    }
}

void bhv_cross_loop(void) {

    if (o->oTimer == 1 && o->oBehParams2ndByte == 0) {
        spawn_object_relative(0, 0, 0, 0, o, MODEL_NONE, bhvSachielCrossHitbox);
    }

if (o->oBehParams2ndByte == 0) {
    obj_scale_xyz(o, 2, (f32)(o->oTimer/6.0), 2);
}
else {
    if (o->oTimer > 30) {
        if (o->oTimer == 31) {
            spawn_object_relative(1, 0, 0, 0, o, MODEL_NONE, bhvSachielCrossHitbox);
        }
    obj_scale_xyz(o, 2, 2, 2);
    } 
    else {
        obj_scale_xyz(o, (f32)(o->oTimer/10) + 2.0f, 0.1, (f32)(o->oTimer/10) + 2.0f);
    }
}

    if (o->oTimer >= 90) {
        obj_mark_for_deletion(o);
    }
}

void bhv_cross_hitbox_loop(void) {
    if (o->oBehParams2ndByte == 0) {
    if (o->oForwardVel < 10.0f) {
        o->oForwardVel = 120.0f;
    }
    if (!o->oObjEviTrap) {
    f32 dist;
    o->oObjEviTrap = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
    }

        if (o->oDistanceToMario < 1000.0f) {
            if (o->oObjEviTrap->oAction == 5 && o->oObjEviTrap->oSubAction == 3) {
                obj_mark_for_deletion(o->parentObj);
                obj_mark_for_deletion(o);
            }
            else if (o->oMarioTrapped != 1){
            o->oMarioTrapped = 1;
            gMarioState->eviHealth -= 4;
            }
        }
    if (o->oMarioTrapped == 1) {
        
            
            o->oObjEviTrap->oAction = 6;
            o->oObjEviTrap->oMoveAngleYaw = o->oFaceAngleYaw + 0x8000;
            o->oObjEviTrap->oFaceAngleYaw = o->oFaceAngleYaw + 0x8000;
            o->oObjEviTrap->oForwardVel = -120.0f;
        
    }

    if (o->oTimer >= 90) {
        obj_mark_for_deletion(o);
    }
    }
    else {
        if (o->oDistanceToMario < 1500.0f) {
            f32 dist;
            o->oObjEviTrap = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
            o->oObjEviTrap->oForwardVel = -120.0f;
            gMarioState->eviHealth -= 4;
            obj_mark_for_deletion(o);
        }
    }
}

void bhv_sachiel_hurt_evi_hitbox_loop(void) {
    if (o->oDistanceToMario < 700.0f) {
        obj_mark_for_deletion(o);
        f32 dist;
        struct Object *evi = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dist);
        if (evi->oAction == 5) {
            //this is the worst line of fucking code ive ever written. basically it checks if theres an at field up and then sees if the attack will hit the at field or not based on the angle. there was probably a better way to do this but i do not have the time to optimize it :)
            if (evi->oAction == 5 && evi->oSubAction == 3  && evi->oFaceAngleYaw + 0x8000 > o->parentObj->oFaceAngleYaw - 0x3000 && evi->oFaceAngleYaw + 0x8000 < o->parentObj->oFaceAngleYaw + 0x3000) {
               gMarioState->eviHealth -= 1; 
            }
            else {
                if (evi->oSubAction == 3) {
                    evi->oForwardVel = 60.0f;
                }
                else {
                    evi->oForwardVel = -60.0f;
                }
                gMarioState->eviHealth -= 3;
                play_sound(SOUND_GENERAL_POUND_WOOD_POST, gGlobalSoundSource);
                 
            }
        }
        else {
            gMarioState->eviHealth -= 5;
            evi->oForwardVel = -150.0f;
            evi->oAction = 6;
            play_sound(SOUND_GENERAL_POUND_WOOD_POST, gGlobalSoundSource);
            
        }
    }
    
}