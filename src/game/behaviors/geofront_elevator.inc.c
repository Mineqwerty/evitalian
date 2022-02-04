void bhv_geofront_elevator_loop(void) {
    

    o->oPosZ += 20.0f;
    f32 floor = find_floor_height(o->oPosX, o->oPosY, o->oPosZ);
    o->oPosY = floor;
    cur_obj_play_sound_1(SOUND_ENV_ELEVATOR1);

    if (!o->oObjElevatorLuiji) {
        o->oObjElevatorLuiji = spawn_object_relative(0, 320, 400, 0, o, MODEL_LUIJI_FIXED, bhvGenericNPC);
    }

    if (o->oObjElevatorLuiji) {
        o->oObjElevatorLuiji->oPosZ = o->oPosZ;
        o->oObjElevatorLuiji->oPosY = o->oPosY + 130;
    }

    gMarioState->pos[2] = o->oPosZ;
    if (gMarioState->pos[0] < o->oPosX - 100) {
        gMarioState->pos[0] = o->oPosX - 100;
    }
    if (gMarioState->pos[0] > o->oPosX + 100) {
        gMarioState->pos[0] = o->oPosX + 100;
    }
}