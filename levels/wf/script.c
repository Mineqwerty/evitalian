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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL, daisuka_lying_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOWORU, boworu_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_WF, 0x06, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -404, 256, -67, 0, 0, 0, 0x00000000, bhvCustomCamVolumeCamPos),
		OBJECT(MODEL_NONE, 505, 256, -65, 0, 0, 0, 0x00000000, bhvCustomCamVolumeCamFocus),
		OBJECT(MODEL_NONE, 29, 1817, -46, 0, 0, 0, 0x00070000, bhvCustomCamVolume),
		OBJECT(MODEL_NONE, 3939, 6563, 2594, 0, 0, 0, 0x300B0000, bhvWarp),
		OBJECT(MODEL_NONE, -3483, 100, -12, 0, 0, 0, 0x300B0000, bhvWarp),
		OBJECT(MODEL_NONE, 29, 100, -87, 0, 0, 0, 0x300C0000, bhvWarp),
		OBJECT(MODEL_NONE, 427, 1783, -494, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 427, 1783, -494),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 100, -4622, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, 0, 100, -4925, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 327, 596, -83, 0, 0, 0, 0x00010000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 373, 495, -373, 0, 0, 0, 0x00020000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 211, 562, -549, 0, 0, 0, 0x60040000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, 223, 495, 227, 0, 0, 0, 0x00030000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 152, 509, 153, 0, 0, 0, 0x00050000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 413, 555, -438, 0, 0, 0, 0x00060000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 373, 563, -94, 0, 0, 0, 0x00070000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -1021, 482, -76, 0, 0, 0, 0x00010000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 133, 663, -161, 0, 0, 0, 0x00020000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 372, 564, -62, 0, 0, 0, 0x00050000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 236, 503, -166, 0, 0, 0, 0x00060000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 810, 663, -90, 0, 0, 0, 0x00070000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -2932, 2703, -1421, 0, 22, 0, 0x00000000, bhvFirstTimeInNervCutscene),
		OBJECT(MODEL_E_GENDDO, 421, 439, -442, 0, -28, 0, 0x00100000, bhvGenericNPC),
		OBJECT(MODEL_LUIJI_FIXED, 135, 439, 186, 0, 107, 0, 0x00120000, bhvGenericNPC),
		OBJECT(MODEL_PEASATO, 255, 439, -701, 0, -15, 0, 0x000F0000, bhvGenericNPC),
		OBJECT(MODEL_NONE, 180, 439, -78, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 2703, 1158, -20, 0, 0, 0, 0x200B0000, bhvWarp),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 165, 533, 1984, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, 1502, 710, 2079, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 464, 439, 665, 0, 0, 0, 0x00050000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -902, 460, 829, 0, 0, 0, 0x00020000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -667, 439, 2030, 0, 0, 0, 0x00060000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 178, 439, 470, 0, 0, 0, 0x00080000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -95, 562, 373, 0, 0, 0, 0x60010000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -1213, 447, 2040, 0, 0, 0, 0x60030000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -1213, 447, 423, 0, 0, 0, 0x10040000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, 1200, 516, 1553, 0, 0, 0, 0x60070000, bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, 350, 645, 1323, 0, 0, 0, 0x00020000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -386, 515, 1285, 0, 0, 0, 0x00050000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 228, 611, 1378, 0, 0, 0, 0x00060000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 456, 786, 1488, 0, 0, 0, 0x00080000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -860, 437, -569, 0, 0, 0, 0x00000000, bhvPostSachielCutscene),
		OBJECT(MODEL_DAISUKA, -170, 439, 1150, 0, 71, 0, 0x00020000, bhvGenericNPC),
		OBJECT(MODEL_E_GENDDO, 122, 439, 942, 0, 13, 0, 0x00010000, bhvGenericNPC),
		OBJECT(MODEL_LUIJI_FIXED, 2928, 685, 1892, 0, -91, 0, 0x00110000, bhvGenericNPC),
		OBJECT(MODEL_PEASATO, 308, 439, 910, 0, 12, 0, 0x00150000, bhvGenericNPC),
		OBJECT(MODEL_REISALINA, -170, 439, 1461, 0, 78, 0, 0x00030000, bhvGenericNPC),
		OBJECT(MODEL_NONE, 994, 439, 2159, 0, -129, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -2039, 439, -2950, 0, 0, 0, 0x200B0000, bhvWarp),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, wf_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 614, 957, -416, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, -1817, 439, -2469, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -860, 437, -569, 0, 0, 0, 0x00000000, bhvPreRamielCutscene),
		OBJECT(MODEL_DAISUKA, -2006, 439, -2702, 0, 35, 0, 0x00180000, bhvGenericNPC),
		OBJECT(MODEL_PEASATO, -741, 439, -1836, 0, -124, 0, 0x00170000, bhvGenericNPC),
		OBJECT(MODEL_NONE, -2087, 439, -2469, 0, 36, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 2703, 1158, -20, 0, 0, 0, 0x200B0000, bhvWarp),
		TERRAIN(wf_area_4_collision),
		MACRO_OBJECTS(wf_area_4_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, wf_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 165, 533, 1984, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, 1502, 710, 2079, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 274, 439, 266, 0, 0, 0, 0x00010000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -2240, 439, 2433, 0, 0, 0, 0x00020000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 614, 439, 388, 0, 0, 0, 0x00030000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 1502, 521, 1718, 0, 0, 0, 0x00040000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -39, 867, 1772, 0, 0, 0, 0x00010000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 201, 863, 1609, 0, 0, 0, 0x00020000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 104, 581, 1352, 0, 0, 0, 0x00030000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -39, 578, 1772, 0, 0, 0, 0x00040000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -2932, 2703, -1421, 0, 22, 0, 0x00000000, bhvPostRamielCutscene),
		OBJECT(MODEL_RAMIEL, 122, 439, 788, 0, 59, 0, 0x001B0000, bhvGenericNPC),
		OBJECT(MODEL_BOWORU, -1158, 439, 2050, 0, 127, 0, 0x00030000, bhvGenericNPC),
		OBJECT(MODEL_LUIJI_FIXED, 2928, 685, 1892, 0, -91, 0, 0x00190000, bhvGenericNPC),
		OBJECT(MODEL_PEASATO, 308, 439, 910, 0, -119, 0, 0x001A0000, bhvGenericNPC),
		OBJECT(MODEL_NONE, 994, 439, 2159, 0, -129, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_5_collision),
		MACRO_OBJECTS(wf_area_5_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, wf_area_6),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EVI_UNIT, 28, 4966, -37, 0, 0, 0, 0x00000000, bhvEviUnit),
		OBJECT(MODEL_BOWORU, 413, 1002, 1335, 0, 0, 0, 0x00000000, bhvBoworu),
		OBJECT(MODEL_NONE, -15, 216, 2834, 0, -129, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_6_collision),
		MACRO_OBJECTS(wf_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_ODE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 427, 1783, -494),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
