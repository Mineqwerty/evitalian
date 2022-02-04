#include "actors/luiji_fixed/anim_header.h"
#include "actors/e_genddo/anim_header.h"
#include "actors/peasato/anim_header.h"
#include "actors/daisuka/anim_header.h"
#include "actors/reisalina/anim_header.h"

#include "levels/wf/boworu/anim_header.h"
void bhv_generic_npc_init(void) {
    o->oGravity  = 5.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    o->oInteractionSubtype = INT_SUBTYPE_NPC;

    if (cur_obj_has_model(MODEL_LUIJI_FIXED)) {
        o->oAnimations = luiji_fixed_anims;
        cur_obj_init_animation(0);
    }

    if (cur_obj_has_model(MODEL_E_GENDDO)) {
        o->oAnimations = e_genddo_anims;
        cur_obj_init_animation(0);
    }

    if (cur_obj_has_model(MODEL_PEASATO)) {
        o->oAnimations = peasato_anims;
        cur_obj_init_animation(0);
    }

    if (cur_obj_has_model(MODEL_DAISUKA)) {
        o->oAnimations = daisuka_anims;
        cur_obj_init_animation(0);
    }

    if (cur_obj_has_model(MODEL_REISALINA)) {
        o->oAnimations = reisalina_anims;
        cur_obj_init_animation(0);
    }

    if (cur_obj_has_model(MODEL_BOWORU)) {
        o->oAnimations = boworu_anims;
        cur_obj_init_animation(0);
    }
}

void bhv_generic_npc_loop(void) {
    if (cur_obj_has_model(MODEL_LUIJI_FIXED)) {
        if (gCurrLevelNum == LEVEL_BOB && gCurrAreaIndex == 2) {
            if (o->oPosZ > -20000) {
                cur_obj_init_animation(1);
            }
        }
    }
}