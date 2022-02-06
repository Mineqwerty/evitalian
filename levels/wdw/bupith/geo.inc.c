#include "src/game/envfx_snow.h"

const GeoLayout bupith_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 313, 0, bupith_skl_root_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 88, -188, 0, bupith_foot_l_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -88, -188, 0, bupith_foot_r_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bupith_hand_l_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 150, 150, -30, bupith_hand_l_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bupith_hand_r_skinned_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -150, 150, -30, bupith_hand_r_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 187, 0, bupith_head_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bupith_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
