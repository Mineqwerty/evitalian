// bowser_key_cutscene.inc.c

Gfx *geo_scale_bowser_key(s32 run, struct GraphNode *node, UNUSED Mat4 mtx) {
    struct Object *nodeObj;
    if (run == TRUE) {
        nodeObj = (struct Object *) gCurGraphNodeObject;
        ((struct GraphNodeScale *) node->next)->scale = nodeObj->oBowserKeyScale;
    }
    return 0;
}

void bhv_bowser_key_unlock_door_loop(void) {
    s32 animTimer;
    animTimer = o->header.gfx.animInfo.animFrame;
    cur_obj_init_animation_with_sound(0);
    if (animTimer < 38)
        o->oBowserKeyScale = 0.0f;
    else if (animTimer < 49)
        o->oBowserKeyScale = 0.2f;
    else if (animTimer < 58)
        o->oBowserKeyScale = (animTimer - 53) * 0.11875f + 0.2f; // 0.11875f?
    else if (animTimer < 59)
        o->oBowserKeyScale = 1.1f;
    else if (animTimer < 60)
        o->oBowserKeyScale = 1.05f;
    else
        o->oBowserKeyScale = 1.0f;
    if (o->oTimer > 150)
        obj_mark_for_deletion(o);
}

void bhv_bowser_key_course_exit_loop(void) {
    s32 animTimer = o->header.gfx.animInfo.animFrame;
    cur_obj_init_animation_with_sound(1);
    if (animTimer < 38)
        o->oBowserKeyScale = 0.2f;
    else if (animTimer < 52)
        o->oBowserKeyScale = (animTimer - 42) * (3.0f / 70.0f) + 0.2f;
    else if (animTimer < 94)
        o->oBowserKeyScale = 0.8f;
    else if (animTimer < 101)
        o->oBowserKeyScale = (101 - animTimer) * (6.0f / 70.0f) + 0.2f;
    else
        o->oBowserKeyScale = 0.2f;
    if (o->oTimer > 138)
        obj_mark_for_deletion(o);
}
