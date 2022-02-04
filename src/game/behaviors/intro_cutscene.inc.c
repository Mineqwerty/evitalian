#include "src/game/puppyprint.h"
#include "include/segment_symbols.h"


void bhv_intro_cutscene_loop(void) {
    if (o->oTimer < 1000) {
       //o->oTimer = 2100;
    }

    gCutsceneID = 1;
    extern s8 gSkipIntro;

    if (gPlayer1Controller->buttonPressed & START_BUTTON) {
        if (gSkipIntro == 0) {
            gSkipIntro = 90;
        }
        else if (gSkipIntro <= 60) {
        gSkipIntro = 0;
        gDialogIndex = 0;
        gCutsceneIndex = 0;
        //gCutsceneID = 0;
        initiate_warp(1, 1, 10, 0);
        }
    }
    
    
    struct Object *CCam;
    struct Object *SpawnedObj;
        f32 dist;

        
        //print_text_fmt_int(30, 30, "%d", o->oTimer);

    switch (o->oTimer) {
        case 30: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;
        case 40: gCutsceneIndex = 1;
        break;
        case 42: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        break; 
        case 49: gDialogIndex = 1;
        break;
        case 180: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        gDialogIndex = 0;
        break;
        case 190: gCutsceneIndex = 2;
        break;
        case 192: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        gDialogIndex = 2;
        break; 
        case 330: gDialogIndex = 0;
        break;
        case 400: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 30, 255, 255, 255);
        break;
        case 443: gCutsceneIndex = 3;
        break;
        case 444: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 1, 255, 255, 255);
        break; 
        case 466: gCutsceneIndex = 4;
        o->oFramesLeftOnApproach2 = 40;
        CCam = cur_obj_find_nearest_object_with_behavior(bhvCustomCam, &dist);
        o->oObjCutscene1 = spawn_object_relative(0, 0, 0, 0, CCam, MODEL_EVA64_LOGO, bhvGenericCutsceneObject);
        break;

        case 650: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 255, 255, 255);
        break;
        case 660: gCutsceneIndex = 5;
        
        
        break;
        case 662: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 255, 255, 255);
        
        
        load_segment_decompress_skybox(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd);
        break; 
        case 670: gCutsceneIndex = 6;
        break;

        case 810: CCam = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamFocus, 5);
         spawn_object_relative(1, -200, -500, 0, CCam, MODEL_DAISUKA_SIL, bhvSwitchCaseModel);
         spawn_object_relative(2, 200, 500, 0, CCam, MODEL_REISALINA_SIL, bhvSwitchCaseModel);
        break;

        case 1090:
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 255, 255, 255);
        break;
        case 1100: gCutsceneIndex = 7;
        CCam = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamFocusApproachPos, 8);
         spawn_object_relative(3, -800, -800, -1000, CCam, MODEL_PEASATO, bhvSwitchCaseModel);
        
        
        break;
        case 1102: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 255, 255, 255);
        load_segment_decompress_skybox(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd);
        
        break;
        case 1120: gCutsceneIndex = 8;
        break;

        case 1310:
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 255, 255, 255);
        break;
        case 1320: gCutsceneIndex = 9;
        break;
        case 1322: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 255, 255, 255);
        break;
        case 1420:
        CCam = cur_obj_find_object_with_bparam_2nd_byte(bhvSwitchCaseModel, 5);
         SpawnedObj = spawn_object_relative(6, 0, -100, 350, CCam, MODEL_REISALINA, bhvSwitchCaseModel);
         SpawnedObj->oMoveAngleYaw = 0x000;
         SpawnedObj->oFaceAngleYaw = 0x000;
         obj_mark_for_deletion(CCam);
        break;
        case 1455: gCutsceneIndex = 10;

        break;

        case 1487: gCutsceneIndex = 11;
        break;

        case 1499: gCutsceneIndex = 12;
        break;

        case 1515: gCutsceneIndex = 13;
        break;

        case 1528: gCutsceneIndex = 14;
        break;

        case 1540: gCutsceneIndex = 15;
        break;

        case 1545: gCutsceneIndex = 16;
        break;

        case 1600: gCutsceneIndex = 17;
        break;

        case 1630: gCutsceneIndex = 18;
        break;

        case 1635: gCutsceneIndex = 19;
        break;

        case 1680: gCutsceneIndex = 20;
        break;

        case 1710: gCutsceneIndex = 21;
        break;

        case 1718: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 5, 0, 0, 0);
        break;

        case 1724: gCutsceneIndex = 22;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 2, 0, 0, 0);
        break;

        case 1734: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 5, 0, 0, 0);
        break;

        case 1740: gCutsceneIndex = 23;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 2, 0, 0, 0);
        break;

        case 1750: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 5, 0, 0, 0);
        break;

        case 1756: gCutsceneIndex = 24;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 2, 0, 0, 0);
        break;

        case 1766: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 5, 0, 0, 0);
        break;

        case 1772: gCutsceneIndex = 25;
        play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 2, 0, 0, 0);
        load_segment_decompress_skybox(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd);
        break;

        case 1963: gCutsceneIndex = 26;
        break;
        case 1973: gCutsceneIndex = 27;
        break;
        case 1983: gCutsceneIndex = 28;
        break;
        case 1989: gCutsceneIndex = 29;
        break;
        case 1999: gCutsceneIndex = 30;
        break;
        case 2005: gCutsceneIndex = 31;
        break;
        case 2014: gCutsceneIndex = 32;
        break;
        case 2022: gCutsceneIndex = 33;
        break;
        case 2029: gCutsceneIndex = 34;
        break;
        case 2037: gCutsceneIndex = 35;
        break;
        case 2048: gCutsceneIndex = 36;
        break;
        case 2055: gCutsceneIndex = 37;
        load_segment_decompress_skybox(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd);
        break;
        case 2064: gCutsceneIndex = 38;
        break;
        case 2065: gCutsceneIndex = 39;
        break;
        case 2087: gCutsceneIndex = 40;
        break;
        case 2093: gCutsceneIndex = 41;
        break;
        case 2100: gCutsceneIndex = 42;
        load_segment_decompress_skybox(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd);
        break;
        case 2105: gCutsceneIndex = 43;
        break;
        case 2112: gCutsceneIndex = 44;
        break;
        case 2116: gCutsceneIndex = 45;
        break;
        case 2122: gCutsceneIndex = 46;
        break;
        case 2127: gCutsceneIndex = 47;
        break;
        case 2137: gCutsceneIndex = 48;
        break;
        case 2146: gCutsceneIndex = 49;
        break;
        //missing nerv hq interior here
        case 2159: gCutsceneIndex = 50;
        break;
        case 2169: gCutsceneIndex = 51;
        break;
        case 2179: gCutsceneIndex = 52;
        break;
        case 2185: gCutsceneIndex = 53;
        break;
        case 2190: gCutsceneIndex = 54;
        break;
        case 2195: gCutsceneIndex = 55;
        break;
        case 2200: gCutsceneIndex = 56;
        load_segment_decompress_skybox(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd);
        break;
        case 2205: gCutsceneIndex = 57;
        break;
        case 2215: gCutsceneIndex = 58;
        break;
        case 2220: gCutsceneIndex = 59;
        break;
        case 2235: gCutsceneIndex = 60;
        load_segment_decompress_skybox(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd);
        break;
        case 2240: gCutsceneIndex = 61;
        break;
        case 2246: gCutsceneIndex = 62;
        break;
        case 2252: gCutsceneIndex = 63;
        break;
        case 2257: gCutsceneIndex = 64;
        break;
        case 2261: gCutsceneIndex = 65;
        break;
        case 2265: gCutsceneIndex = 66;
        break;
        case 2290: gCutsceneIndex = 67;
        break;
        case 2299: gCutsceneIndex = 68;
        break;
        case 2319: gCutsceneIndex = 69;
        break;
        case 2336: gCutsceneIndex = 70;
        break;
        case 2364: gCutsceneIndex = 71;
        load_segment_decompress_skybox(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd);
        break;
        case 2402: gCutsceneIndex = 72;
        break;
        case 2425: gCutsceneIndex = 73;
        load_segment_decompress_skybox(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd);
        break;
        case 2470: gCutsceneIndex = 74;
        break;
        case 2510: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
        break;
        case 2520: gCutsceneIndex = 75;
        break;
        case 2590: play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        break;
        case 2650: play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 25, 0, 0, 0);
        break;
        case 2680: //play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
        gDialogIndex = 0;
        gCutsceneIndex = 0;
        //gCutsceneID = 0;
        initiate_warp(1, 1, 10, 0);
        break;


    }

    if (o->oFramesLeftOnApproach2 > 0) {
        switch (gCutsceneIndex) {
            case 4: 
            if (o->oObjCutscene1) {
                
                struct Object *CamFoc;
                CamFoc = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamFocus, 3);
                if (CamFoc) {
                obj_approach_obj(20, o->oObjCutscene1, CamFoc);
                }
            }

            break;
        }

        o->oFramesLeftOnApproach2 -= 1;
    }
  
}

#include "levels/sa/intro_mario/anim_header.h"

void obj_approach_obj(int frames, struct Object *moveObj, struct Object *approachObj) {

     moveObj->oPosX += (approachObj->oPosX - moveObj->oPosX)/frames; 
    moveObj->oPosY += (approachObj->oPosY - moveObj->oPosY)/frames; 
    moveObj->oPosZ += (approachObj->oPosZ - moveObj->oPosZ)/frames; 
}

void bhv_intro_generic_object_loop(void) {
    
    if (gCutsceneIndex == 5) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        //o->oOpacity = 50;
        cur_obj_scale(5.0f);
        
        
    }

}

#include "levels/sa/daisuka_sil/anim_header.h"
#include "levels/sa/reisalina_sil/anim_header.h"
#include "levels/sa/peasato_sil/anim_header.h"
#include "actors/luiji/anim_header.h"
#include "levels/sa/reisalina_intro/anim_header.h"
#include "levels/sa/evi_intro/anim_header.h"

void bhv_switch_animation_init(void) {
    switch (o->oBehParams2ndByte) {
        case 0:

        break;
        case 1: o->oAnimations = daisuka_sil_anims;
        cur_obj_init_animation(0);
        break;
        case 2: o->oAnimations = reisalina_sil_anims;
        cur_obj_init_animation(0);
        break;
        case 3: o->oAnimations = peasato_sil_anims;
        cur_obj_init_animation_with_accel_and_sound(0, 0.9f);
        cur_obj_scale(5.0f);
        
        break;
        case 4: o->oAnimations = luiji_anims;
        cur_obj_init_animation(0);
        cur_obj_scale(16.0f);
        
        break;
        case 5:
        o->oAnimations = daisuka_sil_anims;
        cur_obj_init_animation(1);
        cur_obj_scale(3.0f);

        break;

        case 6:
        o->oAnimations = reisalina_intro_anims;
        cur_obj_init_animation(0);
        cur_obj_scale(3.0f);

        break;

        case 7:
        o->oAnimations = luiji_anims;
        cur_obj_init_animation(1);
        cur_obj_scale(4.0f);

        break;

        case 8:
        o->oAnimations = evi_intro_anims;
        cur_obj_init_animation_with_accel_and_sound(0, 0.9f);
        //cur_obj_scale(4.0f);

        break;
        case 9:
        o->oAnimations = evi_intro_anims;
        cur_obj_init_animation(1);
        break;

        case 10:
        o->oAnimations = evi_intro_anims;
        cur_obj_init_animation(2);
        break;

        case 11:
        o->oAnimations = peasato_sil_anims;
        cur_obj_init_animation(1);
        cur_obj_scale(4.0f);
        break;

    }
}

void bhv_switch_animation_loop(void) {

    switch (o->oBehParams2ndByte) {
        case 1: o->oPosY += 3.0f;
        if (o->oTimer > 600) {
        obj_mark_for_deletion(o);
    }
        break;
        case 2: o->oPosY -= 3.0f;
        o->oFaceAngleRoll = 0x8000;
        if (o->oTimer > 600) {
        obj_mark_for_deletion(o);
    }
        break;
        case 3:
        if (gCutsceneIndex == 7) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        
        break;
        case 4:
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        if (gCutsceneIndex > 8) {
            o->oPosX -= 1;
        }
        break;
        case 5:
        if (gCutsceneIndex == 8) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;
        case 6:
       o->oPosY += 1;
        break;
        case 7:
        if (gCutsceneIndex <= 16) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;
        case 8:
        if (gCutsceneIndex < 25) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        if (gCutsceneIndex > 30 && gCutsceneIndex < 74) {
            cur_obj_init_animation(3);
            o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;
        case 9:
        if (gCutsceneIndex < 57) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;

        case 10:
        if (gCutsceneIndex < 66) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;

        case 11:
        if (gCutsceneIndex < 72) {
        
        o->header.gfx.animInfo.animFrame = 0;
        o->header.gfx.animInfo.animFrameAccelAssist = 1;
        }
        break;
    }

    

}