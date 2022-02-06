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
#include "levels/wdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_INTRO_MARIO, ti_mario_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_DED_MARIO, ded_mario_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BUPITH, bupith_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL, blackmoon_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_SHARD, daisuka_again_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EVI_BOWORU, evi_genddo_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOWORU_GHOST, boworu_ghost_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_BEAM, bupwings_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wdw_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOWORU_GHOST, -1108, 535, -16487, 90, 0, -88, (7 << 16), bhvStaticModel),
		OBJECT(MODEL_BUPITH, 15065, 6963, 4704, 0, -56, 0, (04 << 16), bhvBupith),
		OBJECT(MODEL_BUPITH, 16196, 7335, 20393, 0, -93, 0, (05 << 16), bhvBupith),
		OBJECT(MODEL_RAMIEL_BEAM, 16196, 7689, 20393, 0, -93, 0, (1 << 16), bhvBupith),
		OBJECT(MODEL_NONE, -222, 255, 484, 0, 0, 0, (0 << 16), bhvCustomCam),
		OBJECT(MODEL_NONE, -222, 255, 484, 0, 0, 0, (0 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -211, 188, -366, 0, 0, 0, (1 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -166, 203, 64, 0, 0, 0, (2 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 61, 246, 24, 0, 0, 0, (3 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -34, 100, -15, 0, 0, 0, (4 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -69, 310, 125, 0, 0, 0, (5 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -145, 173, -288, 0, 0, 0, (6 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -86, 122, -117, 0, 0, 0, (7 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -568, 179, -283, 0, 0, 0, (8 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -568, 179, 127, 0, 0, 0, (90 << 24) | (9 << 16), bhvCustomCamApproachPos),
		OBJECT(MODEL_NONE, -89, -598, 649, 0, 0, 0, (10 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 1495, 0, 0, 0, (11 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1240, 1133, -9586, 0, 0, 0, (12 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -753, 1232, -8724, 0, 0, 0, (13 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 176, 657, -8948, 0, 0, 0, (14 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 2528, 0, 0, 0, (15 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 12243, 9262, 4245, 0, 0, 0, (16 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 14487, 8984, 5099, 0, 0, 0, (17 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 3554, 0, 0, 0, (18 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 14288, 8217, 6194, 0, 0, 0, (19 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 14836, 8217, 6194, 0, 0, 0, (60 << 24) | (20 << 16), bhvCustomCamApproachPos),
		OBJECT(MODEL_NONE, -89, -598, 4489, 0, 0, 0, (21 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -8731, 121, -7046, 0, 0, 0, (22 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 5386, 0, 0, 0, (23 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -8432, -338, -10419, 0, 0, 0, (24 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 6318, 0, 0, 0, (25 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1288, 1097, -16473, 0, 0, 0, (26 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1045, 841, -16029, 0, 0, 0, (27 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1079, 10540, -10243, 0, 0, 0, (28 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1127, 10770, -10898, 0, 0, 0, (29 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -1574, 10705, -10611, 0, 0, 0, (30 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -89, -598, 7279, 0, 0, 0, (31 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -379, 1226, -19467, 0, 0, 0, (32 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 11820, 8293, 20345, 0, 0, 0, (33 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 15225, 8501, 21065, 0, 0, 0, (34 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -16186, 8045, 21561, 0, 0, 0, (35 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -16186, 1777, 19434, 0, 0, 0, (36 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -16186, 1777, 19434, 0, 0, 0, (37 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -16983, -3572, 20248, 0, 0, 0, (38 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -13523, 4722, 3324, 0, -180, 0, (39 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, -13523, 6003, 3324, 0, -180, 0, (120 << 24) | (40 << 16), bhvCustomCamApproachPos),
		OBJECT(MODEL_NONE, -16555, 9422, 3084, 0, -180, 0, (41 << 16), bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 335, 187, -11, 0, 0, 0, (0 << 16), bhvThirdImpactCutscene),
		OBJECT(MODEL_RAMIEL_SHARD, -7911, -557, -10529, 0, 0, 0, (6 << 16), bhvGenericNPC),
		OBJECT(MODEL_EVI_BOWORU, -380, 9499, -10988, 0, 2, 0, 0x00000000, bhvEviGenddo),
		OBJECT(MODEL_NONE, 195, 100, -495, 0, 0, 0, (0 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 311, 187, 441, 0, 0, 0, (1 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 309, 187, -343, 0, 0, 0, (2 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 58, 100, -449, 0, 0, 0, (3 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 107, 324, 203, 0, 0, 0, (4 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 264, 141, -333, 0, 0, 0, (5 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 266, 332, 43, 0, 0, 0, (6 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 194, 127, -110, 0, 0, 0, (7 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 354, 187, -118, 0, 0, 0, (8 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 354, 187, -37, 0, 0, 0, (90 << 24) | (9 << 16), bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, 362, -598, 649, 0, 0, 0, (10 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 1495, 0, 0, 0, (11 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -103, 428, -7415, 0, 0, 0, (12 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 379, 561, -9756, 0, 0, 0, (13 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -176, 561, -10176, 0, 0, 0, (14 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 2528, 0, 0, 0, (15 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 14690, 7202, 4374, 0, 0, 0, (16 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 14528, 6612, 5166, 0, 0, 0, (17 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 3554, 0, 0, 0, (18 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 14860, 8232, 3594, 0, 0, 0, (19 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 14860, 8232, 3594, 0, 0, 0, (20 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 4489, 0, 0, 0, (21 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -7747, -649, -7813, 0, 0, 0, (22 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 5386, 0, 0, 0, (23 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -7724, -537, -10544, 0, 0, 0, (24 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 6318, 0, 0, 0, (25 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -837, 554, -16473, 0, 0, 0, (26 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -1004, 416, -16773, 0, 0, 0, (27 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -629, 10540, -10243, 0, 0, 0, (28 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -676, 10770, -10898, 0, 0, 0, (29 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -1123, 10705, -10611, 0, 0, 0, (30 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 362, -598, 7279, 0, 0, 0, (31 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 851, 561, -20353, 0, 0, 0, (32 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 12271, 8293, 20345, 0, 0, 0, (33 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 16376, 8633, 19826, 0, 0, 0, (34 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -17834, 7407, 19671, 0, 0, 0, (35 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -17429, 1359, 19669, 0, 0, 0, (36 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -17359, 1172, 21797, 0, 0, 0, (60 << 24) | (37 << 16), bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -17133, -5943, 20283, 0, 0, 0, (38 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -13974, 4722, 3324, 0, -180, 0, (39 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_NONE, -13974, 6003, 3324, 0, -180, 0, (120 << 24) | (40 << 16), bhvCustomCamFocusApproachPos),
		OBJECT(MODEL_NONE, -16707, 5750, 3424, 0, -180, 0, (41 << 16), bhvCustomCamFocus),
		OBJECT(MODEL_E_GENDDO, -26, 561, -9433, 0, -17, 0, (3 << 16), bhvGenericNPC),
		OBJECT(MODEL_LUIJI_FIXED, 61, 100, -190, 0, 0, 0, (1 << 16), bhvGenericNPC),
		OBJECT(MODEL_INTRO_MARIO, 61, 100, 138, 0, 0, 0, (2 << 16), bhvGenericNPC),
		OBJECT(MODEL_INTRO_MARIO, 338, 561, -20067, 0, -36, 0, (8 << 16), bhvGenericNPC),
		OBJECT(MODEL_PEASATO, -7906, -649, -7660, 0, -17, 0, (5 << 16), bhvGenericNPC),
		OBJECT(MODEL_NONE, 55, 561, -10057, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 55, 561, -10057),
		TERRAIN(wdw_area_1_collision),
		MACRO_OBJECTS(wdw_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 55, 561, -10057),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
