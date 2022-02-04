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
#include "levels/lll/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _fire_yay0SegmentRomStart, _fire_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL, ramiel_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_DRILL, ramiel_drill_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_HURT, ramiel_hurt_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_CHARGE, ramiel_charge_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_BEAM, ramiel_beam_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAMIEL_SHARD, ramiel_shard_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, lll_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EVI_UNIT, -10082, -1644, -12077, 0, 1, 0, 0x00000000, bhvEviUnit),
		OBJECT(MODEL_RAMIEL, -9393, 3884, -5219, 0, 1, 0, 0x00000000, bhvRamiel),
		OBJECT(MODEL_RAMIEL_SHARD, -2472, 945, 2090, 0, 1, 0, 0x00000000, bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -11155, 809, -5402, 0, 1, 0, 0x00000000, bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 6544, 895, 5425, 0, 1, 0, 0x00000000, bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -1688, 895, 11282, 0, 1, 0, 0x00000000, bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -1688, 895, -10349, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -11262, 895, 4682, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 8893, 895, -2457, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 4280, 895, -11312, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -5042, 895, 9032, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 2395, 895, 3795, 0, 1, 0, (1 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -2339, 895, -4506, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 4907, 895, -4672, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 4907, 895, 11106, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -7098, 1029, 2033, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, -2150, 810, 6777, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_RAMIEL_SHARD, 10116, 807, -7373, 0, 1, 0, (2 << 16), bhvRamielShard),
		OBJECT(MODEL_NONE, -8787, 1672, 11018, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -9873, 4630, 12094),
		TERRAIN(lll_area_1_collision),
		MACRO_OBJECTS(lll_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_DECISIVE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -9873, 4630, 12094),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
