#include "src/game/camera.h"

void bhv_general_cutscene_init(void) {
    o->oNextStep = 1;
    gCamera->cutscene = 1;
}

void bhv_first_time_in_nerv_cutscene(void) {
struct Object *luiji;

if (gPrevLevel == LEVEL_CCM) {
    gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        obj_mark_for_deletion(o);
    return;
}


if (o->oTimer >= 60 && gCutsceneID == 2) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (gPlayer1Controller->buttonPressed & START_BUTTON) {
        if (gSkipIntro == 0) {
            gSkipIntro = 90;
        }
        else if (gSkipIntro <= 60) {
        gSkipIntro = 0;
        gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        obj_mark_for_deletion(o);
        return;
        }
    }

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 2;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        gCamera->cutscene = 1;
            if (o->oTimer >= 30) {
                o->oCutsceneStep = 2;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
        break;
        case 2:
        gCamera->cutscene = 1;
            gDialogIndex = 3;
            o->oNonPersistentCutsceneStep = 0;
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;
         case 3:
            gDialogIndex = 4;
            gCutsceneIndex = 1;
        break;
        case 4:
        gDialogIndex = 0;
        play_sound(SOUND_GENERAL_POUND_ROCK, gGlobalSoundSource);
        o->oCutsceneStep = 5;
        o->oNextStep = 1;
        break;
        case 5:
            play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
            set_mario_animation(gMarioState, MARIO_ANIM_FALL_OVER_BACKWARDS);
            play_secondary_music(SEQ_STREAMED_TRIUMPHANT, 0, 165, 1);
            play_sound(SOUND_MARIO_WHOA, gGlobalSoundSource);
            gDialogIndex = 0;
            o->oCutsceneStep = 6;
        o->oNextStep = 1;
            
        break;
        case 6: 
        
            if (o->oTimer >= 59) {
                o->oCutsceneStep = 7;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
            break;
        case 7:
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            gDialogIndex = 5;
            o->oNonPersistentCutsceneStep = 0;
        break;
        case 8:
            gDialogIndex = 6;
            gCutsceneIndex = 2;
        break;
        case 9:
            gDialogIndex = 7;
        break;
        case 10:
            gDialogIndex = 8;
            gCutsceneIndex = 3;
        break;
        case 11:
            gDialogIndex = 9;
            gCutsceneIndex = 2;
        break;
        case 12:
            gDialogIndex = 10;
            gCutsceneIndex = 4;
        break;
        case 13:
            gDialogIndex = 11;
        break;
        case 14:
            gDialogIndex = 12;
        break;
        case 15:
            gDialogIndex = 13;
        break;
        case 16:
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 18);
        struct Animation **anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &anims[3]);
        gDialogIndex = 14;
        gCutsceneIndex = 5;
        break;

        case 17:
        gCutsceneIndex = 6;
        gDialogIndex = 15;
        break;
        case 18:
        gDialogIndex = 16;
        break;
        case 19:
        gDialogIndex = 17;
        break;

        case 20:
        gDialogIndex = 0;
        play_sound(SOUND_MENU_STAR_SOUND_OKEY_DOKEY, gGlobalSoundSource);
        gCutsceneIndex = 7;
        break;

        case 21:
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 18);
        struct Animation **anims2 = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &anims2[0]);
        gDialogIndex = 18;
        gCutsceneIndex = 5;
        break;
        case 22:
        gDialogIndex = 19;
        break;
        case 23:
        gCutsceneIndex = 6;
        gDialogIndex = 20;
        break;
        case 24:
        gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        break;
    }

}
}

void bhv_post_sachiel(void) {
struct Object *luiji;
struct Object *peasato;
struct Object *daisuka;
struct Object *genddo;
struct Object *reisalina;


if (o->oTimer >= 60 && gCutsceneID == 3) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (gPlayer1Controller->buttonPressed & START_BUTTON) {
        if (gSkipIntro == 0) {
            gSkipIntro = 90;
        }
        else if (gSkipIntro <= 60) {
        gSkipIntro = 0;
        gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);

        genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
        daisuka = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            if (genddo) {
                obj_mark_for_deletion(genddo);
            }
            if (reisalina) {
                obj_mark_for_deletion(reisalina);
            }
            
            if (daisuka) {
                obj_mark_for_deletion(daisuka);
            }


        obj_mark_for_deletion(o);
        return;
        }
    }

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 3;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        play_secondary_music(SEQ_STREAMED_TRIUMPHANT, 0, 165, 1);
        o->oNonPersistentCutsceneStep = 0;
            gCamera->cutscene = 1;
            o->oNextStep = 1;
            if (o->oTimer >= 30) {
                o->oCutsceneStep = 2;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 17);
        struct Animation **anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &anims[4]);
        luiji->oForwardVel = 20.0f;
        break;
        case 2:
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 17);
            gDialogIndex = 21;
            if (luiji->oPosX > gMarioState->pos[0]) {
                luiji->oForwardVel = 20.0f;
            }
            else {
                struct Animation **anims = luiji->oAnimations;
                geo_obj_init_animation(&luiji->header.gfx, &anims[0]);
                luiji->oMoveAngleYaw = gMarioState->faceAngle[1];
                luiji->oFaceAngleYaw = gMarioState->faceAngle[1];
            }
            o->oNextStep = 1;
        break;
        case 3:
            gCutsceneIndex = 1;
            gDialogIndex = 22;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 17);
            if (luiji->oPosX > gMarioState->pos[0]) {
                luiji->oForwardVel = 20.0f;
            }
            else {
                struct Animation **anims = luiji->oAnimations;
                geo_obj_init_animation(&luiji->header.gfx, &anims[0]);
                luiji->oMoveAngleYaw = gMarioState->faceAngle[1];
                luiji->oFaceAngleYaw = gMarioState->faceAngle[1];
            }
            o->oNextStep = 1;
        break;
        case 4:
            gDialogIndex = 23;
        break;
        case 5:
        gCutsceneIndex = 2;
        gDialogIndex = 24;
        break;
        case 6:
            gDialogIndex = 25;
        break;
        case 7:
        gCutsceneIndex = 3;
            gDialogIndex = 26;
        break;
        case 8:
            gDialogIndex = 27;
        break;
        case 9:
            gDialogIndex = 28;
        break;
        case 10:
        gCutsceneIndex = 4;
            gDialogIndex = 29;
        break;
        case 11:
            gDialogIndex = 30;
        break;
        case 12:
            gDialogIndex = 31;
        break;
        case 13:
        //im out
            peasato = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 21);
            peasato->oFaceAngleYaw = -0x2000;
            peasato->oMoveAngleYaw = -0x2000;

            genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            genddo->oFaceAngleYaw = -0x500;
            genddo->oMoveAngleYaw = -0x500;

            daisuka = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            daisuka->oFaceAngleYaw = 0x8000;
            daisuka->oMoveAngleYaw = 0x8000;
            daisuka->oForwardVel = 10.0f;
            struct Animation **danims = daisuka->oAnimations;
                geo_obj_init_animation(&daisuka->header.gfx, &danims[1]);

            gCutsceneIndex = 5;
            gDialogIndex = 32;
            o->oNextStep = 1;
        break;
        case 14:
            genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            struct Animation **ganims = genddo->oAnimations;
                geo_obj_init_animation(&genddo->header.gfx, &ganims[1]);
            if (genddo->oPosZ < reisalina->oPosZ) {
            genddo->oForwardVel = 10.0f;
            }
            else {
                genddo->oForwardVel = 0.0f;
            }

            daisuka = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            if (daisuka) {
                obj_mark_for_deletion(daisuka);
            }
            gDialogIndex = 33;
            o->oNextStep = 1;
        break;
        case 15:
            genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            genddo->oPosZ = reisalina->oPosZ + 150.0f;
            genddo->oPosX = reisalina->oPosX;
            genddo->oFaceAngleYaw = -0x2000;
            genddo->oMoveAngleYaw = -0x2000;
            genddo->oForwardVel = 0.0f;
            struct Animation **g3anims = genddo->oAnimations;
                geo_obj_init_animation(&genddo->header.gfx, &g3anims[0]);
            gDialogIndex = 34;
            gCutsceneIndex = 6;
            o->oNextStep = 1;
        break;
        case 16:
        genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            genddo->oForwardVel = 10.0f;
            struct Animation **g2anims = genddo->oAnimations;
                geo_obj_init_animation(&genddo->header.gfx, &g2anims[1]);
            reisalina->oMoveAngleYaw -= 0x200;
            reisalina->oFaceAngleYaw -= 0x200;
            gDialogIndex = 35;
            gCutsceneIndex = 7;
            o->oNextStep = 1;
        break;
        case 17:
        genddo = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            if (genddo) {
                obj_mark_for_deletion(genddo);
            }
            if (reisalina) {
                obj_mark_for_deletion(reisalina);
            }
            gDialogIndex = 36;
            gCutsceneIndex = 8;
        break;
        case 18:
            gDialogIndex = 37;
        break;
        case 19:
            gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        obj_mark_for_deletion(o);
        break;
    }
}
}

void bhv_pre_ramiel(void) {


if (gPrevLevel == LEVEL_LLL) {
    gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        obj_mark_for_deletion(o);
    return;
}

if (o->oTimer >= 60 && gCutsceneID == 3) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 3;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        o->oNonPersistentCutsceneStep = 0;
            gCamera->cutscene = 1;
            gCutsceneIndex = 1;
            gDialogIndex = 38;
            break;
            case 2:
            gDialogIndex = 39;
            break;
            case 3:
            gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        obj_mark_for_deletion(o);
            break;  
    }
}
}

void bhv_post_ramiel(void) {
struct Object *luiji;
struct Object *peasato;
struct Object *boworu;

if (gPrevLevel == LEVEL_WF) {
    gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
        obj_mark_for_deletion(boworu);
        obj_mark_for_deletion(o);
    return;
}

if (gPlayer1Controller->buttonPressed & START_BUTTON) {
        if (gSkipIntro == 0) {
            gSkipIntro = 90;
        }
        else if (gSkipIntro <= 60) {
        gSkipIntro = 0;
        gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
        obj_mark_for_deletion(boworu);
        obj_mark_for_deletion(o);
        return;
        }
    }

if (o->oTimer >= 60 && gCutsceneID == 3) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 3;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        o->oNextStep = 1;
        o->oNonPersistentCutsceneStep = 0;
            gCamera->cutscene = 1;
            if (o->oTimer >= 30) {
                o->oCutsceneStep = 2;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 25);
        struct Animation **anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &anims[4]);
        luiji->oForwardVel = 20.0f;
        break;
        case 2:
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 25);
            gDialogIndex = 40;
            if (luiji->oPosX > gMarioState->pos[0]) {
                luiji->oForwardVel = 20.0f;
            }
            else {
                struct Animation **anims = luiji->oAnimations;
                geo_obj_init_animation(&luiji->header.gfx, &anims[0]);
                luiji->oMoveAngleYaw = gMarioState->faceAngle[1];
                luiji->oFaceAngleYaw = gMarioState->faceAngle[1];
            }
            o->oNextStep = 1;
        break;
        case 3:
            
            gDialogIndex = 41;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 25);
            if (luiji->oPosX > gMarioState->pos[0]) {
                luiji->oForwardVel = 20.0f;
            }
            else {
                struct Animation **anims = luiji->oAnimations;
                geo_obj_init_animation(&luiji->header.gfx, &anims[0]);
                luiji->oMoveAngleYaw = gMarioState->faceAngle[1];
                luiji->oFaceAngleYaw = gMarioState->faceAngle[1];
            }
            o->oNextStep = 1;
        break;
        case 4:
            gCutsceneIndex = 1;
            gDialogIndex = 42;
        break;
        case 5:
            gDialogIndex = 43;
        break;
        case 6:
            gDialogIndex = 44;
        break;
        case 7:
            gDialogIndex = 45;
        break;
        case 8:
            gDialogIndex = 46;
        break;
        case 9:
            gCutsceneIndex = 2;
            gDialogIndex = 47;
        break;
        case 10:
            gCutsceneIndex = 3;
            gDialogIndex = 48;
            peasato = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 26);
            peasato->oFaceAngleYaw = -0x2000;
            peasato->oMoveAngleYaw = -0x2000;
        break;
        case 11:
            gCutsceneIndex = 2;
            gDialogIndex = 49;
        break;
        case 12:
            gCutsceneIndex = 3;
            gDialogIndex = 50;
        break;
        case 13:
            gDialogIndex = 51;
        break;
        case 14:
            gDialogIndex = 52;
        break;
        case 15:
            gCutsceneIndex = 2;
            gDialogIndex = 53;

            
            boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
                struct Animation **boworuanims = boworu->oAnimations;
                geo_obj_init_animation(&boworu->header.gfx, &boworuanims[1]);
                boworu->oFaceAngleYaw = 0x6000;
            boworu->oMoveAngleYaw = 0x6000;
        break;
        case 16:
            boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            boworu->oVelY = 20.0f;
             gDialogIndex = 54;
             o->oNextStep = 1;
        break;
        case 17:
        boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 03);
            obj_mark_for_deletion(boworu);
        break;
        case 18:
            gCutsceneIndex = 1;
            gDialogIndex = 55;
            break;
        case 19:
            gCutsceneIndex = 4;
            gDialogIndex = 56;
            break;
            case 20:
            gCutsceneIndex = 1;
            gDialogIndex = 57;
            break;
            case 21:
            gCutsceneIndex = 4;
            gDialogIndex = 58;
            break;
            case 22:
            gCutsceneIndex = 3;
            gDialogIndex = 59;
            break;
            case 23:
            gCutsceneIndex = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gMarioState->action = ACT_IDLE;
        gCamera->cutscene = 0;
        obj_mark_for_deletion(o);
            break;  

    }
}
}

void bhv_boworu_death(void) {
    f32 dista;
            struct Object *eviiz_nuts = cur_obj_find_nearest_object_with_behavior(bhvEviUnit, &dista);
    

    if (gAButtonPrompt >= 2 && gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        gAButtonPrompt = 0;
        o->oSubAction++;
    }

    switch(o->oSubAction) {
        case 0:
        switch (o->oTimer) {
        case 0:
        case 1:
        case 2: 
        //if (o->oDistanceToMario > 1000.0f) {
            //obj_mark_for_deletion(o);
        //}
        //else {
            gCutsceneID = 3;
            gCamera->cutscene = 1;
        //}
        break;

        case 20:
            play_sound(SOUND_GENERAL_GRINDEL_ROLL, gGlobalSoundSource);
        break;

        case 60:
            
            o->oPosX = eviiz_nuts->oPosX;
            o->oPosY = eviiz_nuts->oPosY;
            o->oPosZ = eviiz_nuts->oPosZ;
            spawn_object_relative(0, 0, 0, 0, o, MODEL_EVI_BOWORU, bhvStaticModel);
            gCutsceneIndex = 1;
        break;
        case 95:
            gCutsceneIndex = 2;
        break;

        case 170:
            gCutsceneIndex = 3;
            play_secondary_music(SEQ_STREAMED_AIR, 0, 255, 10);
        break;

        case 260:
            gAButtonPrompt = 2;
        break;
    }
    break;
        case 1:
        if (o->oTimer == 1) {
        play_sound(SOUND_MARIO_SO_LONGA_BOWSER, gGlobalSoundSource);
        }
        if (o->oTimer >= 50) {
            o->oSubAction++;
            o->oTimer = 0;
            
        }
        break;
        case 2:
        if (o->oTimer == 1) {
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 255, 0, 0);
            play_sound(SOUND_OBJ_BOWSER_TAIL_PICKUP, gGlobalSoundSource);
        }
            if (o->oTimer >= 30) {
                o->oSubAction++;
                gCutsceneIndex = 4;
            o->oTimer = 0;
            }
        break;
        case 3:
        if (o->oTimer == 1) {
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 100, 0, 0, 0);
        }
            if (o->oTimer >= 150) {
                o->oSubAction++;
            o->oTimer = 0;
            initiate_warp(LEVEL_TTC, 1, 10, 0);
            }
        break;
    }
}

void bhv_hospital_cutscene(void) {
    struct Object *luiji;
            
    if (o->oTimer >= 60 && gCutsceneID == 3) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 3;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        o->oNonPersistentCutsceneStep = 0;
            gCamera->cutscene = 1;
            if (o->oTimer >= 90) {
                o->oCutsceneStep = 2;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
            break;
        case 2: 
            gDialogIndex = 60;
            
        break;
        case 3:
            gDialogIndex = 61;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            struct Animation **anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &anims[5]);
        break;
        case 4: 
            gDialogIndex = 62;
            gCutsceneIndex = 1;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            struct Animation **animse = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &animse[0]);
        break;
        case 5: 
            gDialogIndex = 63;
            gCutsceneIndex = 2;
        break;
        case 6: 
            gDialogIndex = 64;
            break;
            case 7: 
            gDialogIndex = 65;
            break;
        case 8: 
            gDialogIndex = 66;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            struct Animation **animsee = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &animsee[3]);
            break;
            case 9:
            gDialogIndex = 0;
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 60, 0, 0, 0);
            break;
            case 10:
            gCutsceneIndex = 0;
                 gAButtonPrompt = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gCamera->cutscene = 0;
            initiate_warp(LEVEL_WMOTR, 2, 10, 0);
            break;
    }
}

}

void bhv_terminal_dogma_cutscene(void) {

    struct Object *luiji;
    struct Object *reisalina;
    struct Object *genddo;
            
    if (o->oTimer >= 60 && gCutsceneID == 3) {
    gAButtonPrompt = 1;
    if (gPlayer1Controller->buttonPressed & A_BUTTON) {
        o->oTimer = 0;
        o->oCutsceneStep += 1;
        gAButtonPrompt = 0;
        o->oNextStep = 1;
    }
}

if (o->oNextStep == 1 || o->oNonPersistentCutsceneStep == 1) {

    o->oNextStep = 0;

if (o->oNonPersistentCutsceneStep == 0) {
    play_sound(SOUND_MENU_MESSAGE_APPEAR, gGlobalSoundSource);
}

    switch (o->oCutsceneStep) {
        case 0:
        gCutsceneID = 3;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);
            gMarioState->pos[0] = o->oPosX;
            gMarioState->pos[1] = o->oPosY;
            gMarioState->pos[2] = o->oPosZ;
            gMarioState->faceAngle[1] = 0;
            o->oNonPersistentCutsceneStep = 1;
            o->oCutsceneStep = 1;
        break;
        case 1: 
        o->oNonPersistentCutsceneStep = 0;
            gCamera->cutscene = 1;
            gCutsceneIndex = 1;
            if (o->oTimer >= 90) {
                o->oCutsceneStep = 2;
                o->oNextStep = 1;
                o->oTimer = 0;
            }
            break;
        case 2: 
            gDialogIndex = 67;
        break;
        case 3: 
            gDialogIndex = 68;
        break;
        case 4: 
            gDialogIndex = 69;
        break;
        case 5: 
            gDialogIndex = 70;
        break;
        case 6:
        gCutsceneIndex = 2; 
            gDialogIndex = 71;
        break;
        case 7:
        gCutsceneIndex = 3; 
            gDialogIndex = 72;
        break;
        case 8:
        gCutsceneIndex = 4; 
            gDialogIndex = 73;
        break;
        case 9: 
            gDialogIndex = 74;
        break;
        case 10: 
            gDialogIndex = 75;
            reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            struct Animation **animsee = reisalina->oAnimations;
        geo_obj_init_animation(&reisalina->header.gfx, &animsee[1]);
        break;
        case 11: 
            gDialogIndex = 76;
        break;
        case 12: 
            gDialogIndex = 77;
        break;
        case 13:
        gCutsceneIndex = 5; 
            gDialogIndex = 78;
        break;
        case 14:
        reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            struct Animation **animse = reisalina->oAnimations;
        geo_obj_init_animation(&reisalina->header.gfx, &animse[2]);
        if (o->oTimer < 30) {
            reisalina->oGravity = 0.0f;
            reisalina->oPosY += 20.0f;
        }
        o->oNextStep = 1;
        gCutsceneIndex = 6; 
            gDialogIndex = 79;
        break;
        case 15:
        reisalina = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
        if (o->oTimer < 80) {
            struct Animation **animsa = reisalina->oAnimations;
        geo_obj_init_animation(&reisalina->header.gfx, &animsa[2]);
            reisalina->oMoveAngleYaw = -0x800;
            reisalina->oFaceAngleYaw = -0x800;
            reisalina->oPosY += 16.0f;
            reisalina->oForwardVel = 30.0f;
        }
        else if (reisalina) {
            obj_mark_for_deletion(reisalina);
            o->oCutsceneStep += 1;
        }
        o->oNextStep = 1;
        gCutsceneIndex = 7; 
            gDialogIndex = 80;
        break;
        case 16:

        break;
        case 17:
            gCutsceneIndex = 8; 
            gDialogIndex = 81;
        break;
        case 18:
            gDialogIndex = 82;
        break;
        case 19:
            gCutsceneIndex = 9; 
            gDialogIndex = 83;
        break;
        case 20:
            gDialogIndex = 84;
        break;
        case 21:
        gCutsceneIndex = 10; 
            gDialogIndex = 85;
        break;
        case 22:
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 60, 255, 255, 255);
            gDialogIndex = 0;
            o->oNextStep = 1;
            if (o->oTimer >= 60) {
                 gCutsceneIndex = 0;
                 gAButtonPrompt = 0;
        gDialogIndex = 0;
        gCutsceneID = 0;
        gCamera->cutscene = 0;
                initiate_warp(LEVEL_WDW, 1, 10, 0);
            }
        break;
    }
}
}