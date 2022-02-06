void bhv_boworu_init(void) {
    o->oBoworuHealth = 50;
    
}

void bhv_boworu_loop(void) {
    cur_obj_update_floor_and_walls();
    cur_obj_move_standard(-30);

    if (o->oBoworuHealth == 50 && o->oTimer == 2) {
        gMarioState->deathTimer = 70.0f;
    }

    struct Object *bullet;
    f32 dist;

    bullet = cur_obj_find_nearest_object_with_behavior(bhvBulletBill, &dist);
    if (bullet != NULL && dist < 400.0f) {  
        bullet->oInteractStatus |= INT_STATUS_INTERACTED;
        o->oBoworuHealth -= 8;
        play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
    }

    struct Object *knife;
    f32 dist2;

    knife = cur_obj_find_nearest_object_with_behavior(bhvEviKnifeHitbox, &dist2);
    if (knife != NULL && dist2 < 600.0f) {
        o->oBoworuHealth -= 15;
        obj_mark_for_deletion(knife);
        play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
        
    }

    gMarioState->enemyHealth = o->oBoworuHealth;

    static int xOffset;
    static int zOffset;

    if (o->oTimer % 30 == 0) {
        xOffset = 300*((random_u16() % 6) - 3);
        zOffset = 300*((random_u16() % 6) - 3);

        if (xOffset < 0) {
        xOffset -= 900;
    }
    else {
        xOffset += 900;
    }

    if (zOffset < 0) {
        zOffset -= 900;
    }
    else {
        zOffset += 900;
    }
    }

    

    boworu_approach_position(gMarioState->pos[0] + xOffset, gMarioState->pos[2] + zOffset, 25);
    obj_turn_toward_object(o, gMarioObject, 0x10, 0x400);

    if (gMarioState->enemyHealth <= 0) {
        gMarioState->enemyHealth = 0;
        gMarioState->deathTimer = -1;
        o->oTimer = 0;
        initiate_warp(LEVEL_WMOTR, 1, 10, 0);
    }
}

void boworu_approach_position(f32 targetX, f32 targetZ, int delay) {

    o->oPosX += (targetX - o->oPosX)/delay; 
    o->oPosZ += (targetZ - o->oPosZ)/delay; 

}