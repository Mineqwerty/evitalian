// intro_peach.inc.c

/**
 * Set peach's location relative to the camera focus.
 * If nonzero, make peach's opacity approach targetOpacity by increment
 */
void intro_peach_set_pos_and_opacity(struct Object *obj, f32 targetOpacity, f32 increment) {
    Vec3f newPos;
    s16 focusPitch, focusYaw;

    vec3f_get_angle(gLakituState.pos, gLakituState.focus, &focusPitch, &focusYaw);
    vec3f_set_dist_and_angle(gLakituState.pos, newPos, obj->oIntroPeachDistToCamera, obj->oIntroPeachPitchFromFocus + focusPitch,
                             obj->oIntroPeachYawFromFocus + focusYaw);
    vec3f_copy(&obj->oPosVec, newPos);
    f32 newOpacity = obj->oOpacity;
    camera_approach_f32_symmetric_bool(&newOpacity, targetOpacity, increment);
    obj->oOpacity = newOpacity;
}

void bhv_intro_peach_loop(void) {
    switch (gCurrentObject->oAction) {
        case 0:
            gCurrentObject->oAction += 1;
            gCurrentObject->oFaceAnglePitch = 0x400;
            gCurrentObject->oFaceAngleYaw = 0x7500;
            gCurrentObject->oFaceAngleRoll = -0x3700;
            gCurrentObject->oIntroPeachDistToCamera = 186.f;
            gCurrentObject->oIntroPeachPitchFromFocus = -9984.f;
            gCurrentObject->oIntroPeachYawFromFocus = -768.f;
            gCurrentObject->oOpacity = 255;
            gCurrentObject->header.gfx.animInfo.animFrame = 100;
            break;
        case 1:
            intro_peach_set_pos_and_opacity(gCurrentObject, 0.f, 0.f);

            if (gCurrentObject->oTimer > 20)
                gCurrentObject->oAction += 1;
            break;
        case 2:
            intro_peach_set_pos_and_opacity(gCurrentObject, 255.f, 3.f);

            if ((gCurrentObject->oTimer > 100) && (get_dialog_id() == DIALOG_NONE))
                gCurrentObject->oAction += 1;
            break;
        case 3:
            intro_peach_set_pos_and_opacity(gCurrentObject, 0.f, 8.f);

            if (gCurrentObject->oTimer > 60)
                obj_mark_for_deletion(gCurrentObject);
            break;
    }
}
