#include "include/segment_symbols.h"

void bhv_third_impact_cutscene(void) {
    struct Object *luiji;
    struct Object *mario;
    struct Object *bupith;
    struct Object *bupith2;
    struct Object *peasato;
    struct Object *coin;
    struct Object *boworu;
    struct Animation **luiji_anims;
    struct Animation **mario_anims;
    struct Animation **bupith_anims;
    struct Animation **bupith2_anims;
    struct Animation **peasato_anims;

//delete
//if (o->oTimer > 4 && o->oTimer < 1000) {
    //o->oTimer = 1000;
//}

    //here we fuckin go
    switch (o->oTimer) {
        case 0:
        case 1:
        case 2:
        //update_mario_pos_to_cam();
        gCutsceneID = 4;
            gCamera->cutscene = 1;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
            set_mario_animation(gMarioState, MARIO_ANIM_FIRST_PERSON);

            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            luiji_anims = luiji->oAnimations;
            geo_obj_init_animation(&luiji->header.gfx, &luiji_anims[0]);

            mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            mario_anims = mario->oAnimations;
            geo_obj_init_animation(&mario->header.gfx, &mario_anims[0]);
        break;
        case 30:
            gDialogIndex = 86;
            gCutsceneIndex = 0;
        break;
        case 90:
            gDialogIndex = 87;
            
        break;
        case 180:
            gDialogIndex = 88;
            gCutsceneIndex = 1;
            mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            mario_anims = mario->oAnimations;
            geo_obj_init_animation(&mario->header.gfx, &mario_anims[1]);
        break;
        case 210:
            mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            mario_anims = mario->oAnimations;
            geo_obj_init_animation(&mario->header.gfx, &mario_anims[0]);
        break;
        case 290:
            gDialogIndex = 89;
        break;
        case 400:
            gDialogIndex = 90;
            gCutsceneIndex = 2;
        break;
        case 490:
            gDialogIndex = 91;
            gCutsceneIndex = 3;
        break;
        case 580:
            gDialogIndex = 92;
            luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
            luiji_anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &luiji_anims[6]);
        break;
        case 670:
            gDialogIndex = 93;
            
        break;
        case 760:
        gCutsceneIndex = 4;
        gDialogIndex = 0;
        break;
        case 890:
        gCutsceneIndex = 5;
        gDialogIndex = 94;
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
        mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
        mario->oPosX = luiji->oPosX;
        mario->oPosZ = luiji->oPosZ  + 100.0f;
        break;
        case 940:
        gDialogIndex = 0;
        break;
        case 1070:
        luiji = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 01);
        luiji_anims = luiji->oAnimations;
        geo_obj_init_animation(&luiji->header.gfx, &luiji_anims[7]);
        break;
        case 1080:
        gCutsceneIndex = 6;
        mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
            mario_anims = mario->oAnimations;
            geo_obj_init_animation(&mario->header.gfx, &mario_anims[2]);
        break;
        case 1085:
        mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
        mario->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_DED_MARIO];
        break;
        case 1110:
            gCutsceneIndex = 7;
            play_secondary_music(SEQ_STREAMED_KOMM_SUSSER_TOD, 0, 255, 10);
        break;
        case 1140:
            gCutsceneIndex = 8;
            
        break;
        case 1150:
            gCutsceneIndex = 9;
            
        break;

//end of chair room, start credits
        case 1290:
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;

        case 1300:
        gCutsceneIndex = 10;
            play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        break;
        case 1450:
        gCutsceneIndex = 11;
        break;

        case 1550:
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;

        case 1560:
        gCutsceneIndex = 12;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        //update_mario_pos_to_cam();
        gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
        break;

        case 1700:
        //update_mario_pos_to_cam();
        gCutsceneIndex = 13;
        gDialogIndex = 95;
        break;

        case 1850:
        gCutsceneIndex = 14;
        gDialogIndex = 96;
        break;

        case 1980:
        gDialogIndex = 0;
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;

        case 1990:
        gCutsceneIndex = 15;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        //update_mario_pos_to_cam();
        break;

        case 2140:
        gCutsceneIndex = 16;
        bupith = cur_obj_find_object_with_bparam_2nd_byte(bhvBupith, 04);
        bupith_anims = bupith->oAnimations;
            geo_obj_init_animation(&bupith->header.gfx, &bupith_anims[2]);
        break;

        case 2340:
        gCutsceneIndex = 17;
        bupith = cur_obj_find_object_with_bparam_2nd_byte(bhvBupith, 04);
        spawn_object_relative(0, 0, 800, 500, bupith, MODEL_RAMIEL, bhvBupith);
        break;

        case 2410:
        gCutsceneIndex = 18;
        break;

        case 2500:
        gCutsceneIndex = 19;
        break;

        case 2530:
        gCutsceneIndex = 20;
        break;

        case 2620:
        gCutsceneIndex = 21;
        break;

        case 2710:
        gCutsceneIndex = 22;
        peasato = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 05);
        gDialogIndex = 97;
        break;

        case 2850:
        gDialogIndex = 0;
        break;
        
        case 2865:
        peasato = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 05);
        coin = spawn_object(o, MODEL_YELLOW_COIN, bhvSingleCoinGetsSpawned);
        coin->oPosX = peasato->oPosX;
        coin->oPosY = peasato->oPosY;
        coin->oPosZ = peasato->oPosZ;
        peasato->oSubAction = 1;
        play_sound(SOUND_OBJ_DIVING_IN_WATER, gGlobalSoundSource);
        update_mario_pos_to_cam();
        break;

        case 2930:
        gCutsceneIndex = 23;
        break;

        case 3020:
        gCutsceneIndex = 24;
        gDialogIndex = 98;
        break;

        case 3160:

        gDialogIndex = 0;
        break;

        case 3175:
        peasato = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 06);
        coin = spawn_object(o, MODEL_YELLOW_COIN, bhvSingleCoinGetsSpawned);
        coin->oPosX = peasato->oPosX;
        coin->oPosY = peasato->oPosY;
        coin->oPosZ = peasato->oPosZ;
        peasato->oSubAction = 1;
        play_sound(SOUND_OBJ_DIVING_IN_WATER, gGlobalSoundSource);
        update_mario_pos_to_cam();
        break;

        case 3195:
        gCutsceneIndex = 25;
        update_mario_pos_to_cam();
        boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvStaticModel, 07);
        boworu->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];

        break;

        case 3300:
         gCutsceneIndex = 26;
         gDialogIndex = 99;
        break;
        case 3520:
        gDialogIndex = 100;
        break;
        case 3680:
        gCutsceneIndex = 27;
         gDialogIndex = 101;
         boworu = cur_obj_find_object_with_bparam_2nd_byte(bhvStaticModel, 07);
        boworu->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_BOWORU_GHOST];
        break;
        case 3850:
        gDialogIndex = 102;
        break;
        case 3920:
        gDialogIndex = 103;
        gCutsceneIndex = 28;
        break;

        case 4020:
        gDialogIndex = 104;
        break;

        case 4030:
        gCutsceneIndex = 29;
        break;

        case 4040:
        play_sound(SOUND_EVI_BITE, gGlobalSoundSource);
        break;

        case 4060:
        load_segment_decompress_skybox(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd);
        gDialogIndex = 0;
        gCutsceneIndex = 30;
        break;

        case 4150:
        gCutsceneIndex = 31;
        load_segment_decompress_skybox(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd);
        break;

        case 4240:
        gCutsceneIndex = 32;
        play_sound(SOUND_MENU_THANK_YOU_PLAYING_MY_GAME, gGlobalSoundSource);
        break;
        
        case 4330:
        mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 8);
        coin = spawn_object(o, MODEL_YELLOW_COIN, bhvSingleCoinGetsSpawned);
        coin->oPosX = mario->oPosX;
        coin->oPosY = mario->oPosY;
        coin->oPosZ = mario->oPosZ;
        mario->oSubAction = 1;
        play_sound(SOUND_OBJ_DIVING_IN_WATER, gGlobalSoundSource);
        update_mario_pos_to_cam();
        break;

        case 4400:
        gCutsceneIndex = 33;
        bupith2 = cur_obj_find_object_with_bparam_2nd_byte(bhvBupith, 04);
        bupith2_anims = bupith2->oAnimations;
            geo_obj_init_animation(&bupith2->header.gfx, &bupith2_anims[1]);
        //spawn_object_relative(0, 0, 400, 300, bupith2, MODEL_RAMIEL, bhvStaticModel);
        //spawn_object_relative(1, 0, 0, 0, bupith2, MODEL_RAMIEL_BEAM, bhvStaticModel);
        break;

        case 4500:
        gCutsceneIndex = 34;
        
        break;
        case 4560:
        play_sound(SOUND_OBJ_UKIKI_CHATTER_LONG, gGlobalSoundSource);
        break;

        case 4610:
        gCutsceneIndex = 35;
        play_sound(SOUND_SCREAMING, gGlobalSoundSource);
        break;

        case 4660:
        gCutsceneIndex = 36;
        break;
        case 4665:
        gCutsceneIndex = 37;
        break;

        case 4725:
        gCutsceneIndex = 38;
        break;

        case 4770:
        gCutsceneIndex = 39;
        break;

        case 4800:
        gCutsceneIndex = 40;
        break;

        case 4970:
        gCutsceneIndex = 41;
        break;

        case 5070:
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 150, 0, 0, 0);
        break;

        case 5220:
        initiate_warp(LEVEL_ENDING, 1, 10, 0);
        //play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        break;
        
    }

    //mario turn
    if (o->oTimer >= 180 && o->oTimer < 210) {
        mario = cur_obj_find_object_with_bparam_2nd_byte(bhvGenericNPC, 02);
        mario->oMoveAngleYaw -= 0x444;
        mario->oFaceAngleYaw -= 0x444;
    }
}

void update_mario_pos_to_cam(void) {
    f32 dist;
    struct Object *cam = cur_obj_find_nearest_object_with_behavior(bhvCustomCam, &dist);

    gMarioState->pos[0] = cam->oPosX;
    gMarioState->pos[1] = cam->oPosY;
    gMarioState->pos[2] = cam->oPosZ;
}

void bhv_evi_genddo_loop(void) {
    if (gCutsceneIndex < 29) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
}

void bhv_bupith_loop(void) {

    if (gCutsceneIndex == 32) {
        if (o->oBehParams2ndByte == 1) {
            o->header.gfx.scale[0] = 0.01f;
            o->header.gfx.scale[1] = 0.01f;
            o->header.gfx.scale[2] = 0.01f;
        }
    }
    if (gCutsceneIndex >= 33) {
        
        //o->header.gfx.animInfo.animFrame = 0;
        //o->header.gfx.animInfo.animFrameAccelAssist = 1;
        

    if (o->oBehParams2ndByte == 1) {
        if (o->header.gfx.scale[0] <= 1.0f) {
            o->header.gfx.scale[0] += 0.01f;
            o->header.gfx.scale[1] += 0.01f;
            o->header.gfx.scale[2] += 0.01f;
        }
    }
    }
}