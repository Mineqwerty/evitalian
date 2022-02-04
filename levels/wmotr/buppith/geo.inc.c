#include "src/game/envfx_snow.h"

const GeoLayout buppith_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 313, 0, buppith_skl_root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 88, -188, 0, buppith_foot_l_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -88, -188, 0, buppith_foot_r_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, buppith_hand_l_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 150, 150, -30, buppith_hand_l_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, buppith_hand_r_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -150, 150, -30, buppith_hand_r_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 187, 0, buppith_head_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, buppith_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
