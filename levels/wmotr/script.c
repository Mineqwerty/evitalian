#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_EVI_BOWORU, evi_boworu_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -50, 696, -3556, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, -531, 1455, -7185, 0, 0, 0, 0x00010000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -13, 730, -3653, 0, 0, 0, 0x00000000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -775, 1807, -6552, 0, 0, 0, 0x30020000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -531, 1807, -6552, 0, 0, 0, 0x30020000, bhvCustomCamApproachPos),
		OBJECT(MODEL_NONE, 80, 1750, -6964, 0, 0, 0, 0x00030000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 324, 1750, -6964, 0, 0, 0, 0x00030000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 80, -586, -6013, 0, 0, 0, 0x00040000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 324, -586, -6013, 0, 0, 0, 0x00040000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -775, 1455, -7185, 0, 0, 0, 0x00010000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -882, 2236, -7466, 0, 0, 0, 0x00000000, bhvBoworuDeathCutscene),
		OBJECT(MODEL_EVI_UNIT, -871, 2236, -7466, 0, 0, 0, 0x00000000, bhvEviUnit),
		OBJECT(MODEL_NONE, -856, 2222, -7469, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -856, 2222, -7469),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wmotr_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -687, 752, -6299, 0, 0, 0, 0x00000000, bhvCustomCamVolumeCamPos),
		OBJECT(MODEL_NONE, -479, 1442, -1728, 0, 0, 0, 0x00000000, bhvCustomCamVolumeCamFocus),
		OBJECT(MODEL_NONE, 80, 642, 4810, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, 80, 642, 4810, 0, 0, 0, 0x00010000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 3844, 1179, 5657, 0, 0, 0, 0x00020000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 3844, 1179, 5657, 0, 0, 0, 0x00030000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 1286, 1196, 6368, 0, 0, 0, 0x00040000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -41, 1013, 6700, 0, 0, 0, 0x00050000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1261, 689, 6086, 0, 0, 0, 0x00060000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1261, 689, 6086, 0, 0, 0, 0x00070000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -87, 749, 6662, 0, 0, 0, 0x00080000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1208, -887, 6722, 0, 0, 0, 0x00090000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -811, -1070, 6213, 0, 0, 0, 0x600A0000, bhvCustomCamApproachPos),
		OBJECT(MODEL_NONE, -23, 2899, 6721, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -672, 561, 4798, 0, 0, 0, 0x00020000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 174, 561, 5597, 0, 0, 0, 0x00040000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -236, 561, 5855, 0, 0, 0, 0x00050000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 445, 989, 6421, 0, 0, 0, 0x00060000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 2, 561, 5413, 0, 0, 0, 0x00080000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -605, -1209, 6023, 0, 0, 0, 0x00090000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 82, -266, 8179, 0, 0, 0, 0x60010000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -727, 561, 7053, 0, 0, 0, 0x60030000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, 6, 2404, 8172, 0, 0, 0, 0x30070000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -603, -1244, 5811, 0, 0, 0, 0x600A0000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -721, 592, -5112, 0, 0, 0, 0x000B0000, bhvCustomCamVolume),
		OBJECT(MODEL_NONE, 77, 561, 5454, 0, 0, 0, 0x010F0000, bhvCustomCamVolume),
		OBJECT(MODEL_E_GENDDO, -163, 561, 6104, 0, 17, 0, 0x00010000, bhvGenericNPC),
		OBJECT(MODEL_REISALINA, 391, 561, 6013, 0, -23, 0, 0x00020000, bhvGenericNPC),
		OBJECT(MODEL_NONE, -90, 590, -7607, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wmotr_area_2_collision),
		MACRO_OBJECTS(wmotr_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -856, 2222, -7469),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
