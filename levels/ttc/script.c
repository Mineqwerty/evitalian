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
#include "levels/ttc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _machine_yay0SegmentRomStart, _machine_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_SHARD, daisuka_hospital_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -57, 339, -238, 0, 0, 0, 0x00000000, bhvCustomCam),
		OBJECT(MODEL_NONE, 378, 176, -428, 0, 0, 0, 0x00020000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 671, 100, -246, 0, 0, 0, 0x00000000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 522, 191, 854, 0, 0, 0, 0x00010000, bhvCustomCamFocus),
		OBJECT(MODEL_NONE, 136, 255, 917, 0, 0, 0, 0x00010000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 181, 282, 190, 0, 0, 0, 0x00020000, bhvCustomCamNextPos),
		OBJECT(MODEL_NONE, 2200, 614, 56, 0, 0, 0, 0x00000000, bhvHospitalCutscene),
		OBJECT(MODEL_LUIJI_FIXED, 199, 100, -217, 0, 90, 0, (1 << 16), bhvGenericNPC),
		OBJECT(MODEL_RAMIEL_SHARD, 399, 162, -291, 0, 0, 0, (2 << 16), bhvGenericNPC),
		OBJECT(MODEL_RAMIEL_SHARD, 399, 162, 851, 0, 0, 0, (2 << 16), bhvGenericNPC),
		OBJECT(MODEL_NONE, 671, 100, -247, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 671, 100, -247),
		TERRAIN(ttc_area_1_collision),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_THANATOS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 671, 100, -247),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
