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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	LOAD_MODEL_FROM_GEO(MODEL_GEOFRONT_ELEVATOR, geofront_elevator_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2050, 0, 37, 0, 0, 0, 0x400B0000, bhvWarp),
		OBJECT(MODEL_LUIJI_FIXED, -798, 0, 578, 0, 128, 0, 0x00020000, bhvGenericNPC),
		OBJECT(MODEL_NONE, 1087, 22, 28, 0, 90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 90, 1081, 22, 28),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AMP, -83, 5295, -19792, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 162, 4774, -18701, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -246, 4774, -18701, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 145, 4284, -17593, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -47, 4293, -17593, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -47, 3856, -16548, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 254, 3841, -16548, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -283, 3841, -16548, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 451, 3818, -16548, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -13, 4827, -18506, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, -225, 4350, -17488, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_AMP, 76, 3690, -16050, 0, 0, 0, 0x00000000, bhvCirclingAmp),
		OBJECT(MODEL_NONE, -47, 7746, -23488, 0, 0, 0, (00 << 24) | (22 << 16), bhvCustomCamVolume),
		OBJECT(MODEL_NONE, -47, 8964, -27885, 0, 0, 0, (01 << 24) | (22 << 16), bhvCustomCamVolume),
		OBJECT(MODEL_NONE, -47, 4624, -14787, 0, 0, 0, (2 << 24) | (65 << 16), bhvCustomCamVolume),
		OBJECT(MODEL_NONE, -1760, 8131, -22957, 0, 0, 0, 0x00000000, bhvCustomCamVolumeCamPos),
		OBJECT(MODEL_NONE, 151, 10858, -24638, 0, 0, 0, (1 << 16), bhvCustomCamVolumeCamPos),
		OBJECT(MODEL_NONE, 49, 5830, -20283, 0, 0, 0, (2 << 16), bhvCustomCamVolumeCamPos),
		OBJECT(MODEL_NONE, 151, 19924, -23879, 0, 0, 0, (1 << 16), bhvCustomCamVolumeCamFocus),
		OBJECT(MODEL_GEOFRONT_ELEVATOR, 23, 9630, -29952, 0, 0, 0, 0x00000000, bhvGeofrontElevator),
		OBJECT(MODEL_NONE, -518, 3469, -15561, 0, 90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 518, 2947, -14287, 0, -90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 518, 3310, -14287, 0, -90, 0, 0x00000000, bhvFlamethrower),
		OBJECT(MODEL_NONE, 19, 9664, -30025, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 17, 1848, -12056, 0, 0, 0, (50 << 24) | (11 << 16), bhvWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 90, 1081, 22, 28),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
