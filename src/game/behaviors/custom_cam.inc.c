void bhv_custom_cam_init(void) {
o->oCutsceneIndex = -1;

}


void bhv_custom_cam_loop(void) {

     //print_text_fmt_int(30, 50, "%d", gCutsceneIndex);
       // print_text_fmt_int(40, 50, "%d", o->oCutsceneIndex);

     if (gCutsceneID == 1) {
          gMarioState->action = ACT_WAITING_FOR_DIALOG;
          gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
          gMarioState->pos[0] = o->oPosX;
          gMarioState->pos[1] = o->oPosY;
          gMarioState->pos[2] = o->oPosZ;
     }
    
    if (o->oCutsceneIndex != gCutsceneIndex) {

         
     
     struct Object *nextPosObj;
     nextPosObj = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamNextPos, gCutsceneIndex);
     if (nextPosObj) {
          o->oPosX = nextPosObj->oPosX;
          o->oPosY = nextPosObj->oPosY;
          o->oPosZ = nextPosObj->oPosZ;
     }

     o->oObjCamApproach = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamApproachPos, gCutsceneIndex);
     if (o->oObjCamApproach) {
     o->oFramesLeftOnApproach = (o->oObjCamApproach->oBehParams >> 24);
     }
     struct Object *camFocusCheck;
    camFocusCheck = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamFocus, gCutsceneIndex);
     if (camFocusCheck) {
    o->oObjCamFocus = camFocusCheck;
     }
     o->oCutsceneIndex = gCutsceneIndex;
    }

    gCamera->cutscene = 1;

    if (o->oObjCamFocus) {
   gLakituState.goalFocus[0] = o->oObjCamFocus->oPosX;
         gLakituState.goalFocus[1] = o->oObjCamFocus->oPosY;
         gLakituState.goalFocus[2] = o->oObjCamFocus->oPosZ;
    }
    else {
        gLakituState.goalFocus[0] = gMarioState->pos[0];
         gLakituState.goalFocus[1] = gMarioState->pos[1];
         gLakituState.goalFocus[2] = gMarioState->pos[2];
    }

     if (o->oObjCamApproach) {
          if (o->oFramesLeftOnApproach > 0) {
          cam_approach((o->oObjCamApproach->oBehParams >> 24));
          o->oFramesLeftOnApproach -= 1;

          }
     }



         gLakituState.goalPos[0] = o->oPosX;
         gLakituState.goalPos[1] = o->oPosY;
         gLakituState.goalPos[2] = o->oPosZ;
}

void bhv_custom_cam_focus_loop(void) {
     if (o->oFocusCutsceneIndex != gCutsceneIndex && o->oBehParams2ndByte <= gCutsceneIndex) {
     
     
     o->oObjCamApproach = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamFocusApproachPos, gCutsceneIndex);
     if (o->oObjCamApproach) {
     o->oFramesLeftOnApproach = (o->oObjCamApproach->oBehParams >> 24);
     }
     o->oFocusCutsceneIndex = gCutsceneIndex;

     }

     if (o->oObjCamApproach) {
          if (o->oFramesLeftOnApproach > 0) {
          cam_approach((o->oObjCamApproach->oBehParams >> 24));
          o->oFramesLeftOnApproach -= 1;

          }
     }

}

void cam_approach(int frames) {
     o->oPosX += (o->oObjCamApproach->oPosX - o->oPosX)/frames; 
    o->oPosY += (o->oObjCamApproach->oPosY - o->oPosY)/frames; 
    o->oPosZ += (o->oObjCamApproach->oPosZ - o->oPosZ)/frames; 
}

void bhv_custom_cam_volume_loop(void) {
     //is mario within the cube
     if (gMarioState->pos[0] < (o->oPosX + (o->oBehParams2ndByte * 100)) && gMarioState->pos[0] > (o->oPosX - (o->oBehParams2ndByte * 100)) && gMarioState->pos[1] < (o->oPosY + (o->oBehParams2ndByte * 100)) && gMarioState->pos[1] > (o->oPosY - (o->oBehParams2ndByte * 100)) && gMarioState->pos[2] < (o->oPosZ + (o->oBehParams2ndByte * 100)) && gMarioState->pos[2] > (o->oPosZ - (o->oBehParams2ndByte * 100))) {
               o->oMarioInRange = 1;
               gCamera->cutscene = 1;

               

               o->oObjCameraVolumeCam = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamVolumeCamPos, o->oBehParams >> 24);
               if (o->oObjCameraVolumeCam) {
                    gLakituState.goalPos[0] = o->oObjCameraVolumeCam->oPosX;
                    gLakituState.goalPos[1] = o->oObjCameraVolumeCam->oPosY;
                    gLakituState.goalPos[2] = o->oObjCameraVolumeCam->oPosZ;

                    o->oObjCameraVolumeFocus = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamVolumeCamFocus, o->oBehParams >> 24);
                    if (o->oObjCameraVolumeFocus) {
                         gLakituState.goalFocus[0] = o->oObjCameraVolumeFocus->oPosX;
                         gLakituState.goalFocus[1] = o->oObjCameraVolumeFocus->oPosY;
                         gLakituState.goalFocus[2] = o->oObjCameraVolumeFocus->oPosZ;
                    }
                    else {
                         gLakituState.goalFocus[0] = gMarioState->pos[0];
                         gLakituState.goalFocus[1] = gMarioState->pos[1];
                         gLakituState.goalFocus[2] = gMarioState->pos[2];
                    }
               }
          }

     else if (o->oMarioInRange == 1) {
          o->oMarioInRange = 0;
          gCamera->cutscene = 0;
          
          
     }

     

}

void bhv_custom_cam_volume_cam_loop(void) {

     if (gCurrLevelNum == LEVEL_BOB) {
               if (o->oBehParams2ndByte == 2) {
                    o->oPosY = gMarioState->pos[1] + 700;
                    o->oPosZ = gMarioState->pos[2] - 1000;
               }
          }

}

void bhv_custom_cam_volume_focus_loop(void) {
     if (gCurrLevelNum == LEVEL_BOB) {
          struct Object *corCamPos;
          corCamPos = cur_obj_find_object_with_bparam_2nd_byte(bhvCustomCamVolumeCamPos, 1);
          if (o->oPosY > corCamPos->oPosY) {
               o->oPosY -= 60;
          }
     }
}