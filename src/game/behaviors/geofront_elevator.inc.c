void bhv_geofront_elevator_loop(void) {
    

    o->oPosZ += 20.0f;
    f32 floor = find_floor_height(o->oPosX, o->oPosY, o->oPosZ);
    o->oPosY = floor;
    cur_obj_play_sound_1(SOUND_ENV_ELEVATOR1);

    gMarioState->pos[2] = o->oPosZ;
}