#include "src/game/envfx_snow.h"

const GeoLayout evi_intro_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 340, 0, evi_intro_torso_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, evi_intro_torso_mesh_layer_4),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 511, 0, evi_intro_chest_mesh_layer_1),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 262, 0, evi_intro_head_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, evi_intro_head_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 151, 178, 0, 90, 90),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_upperarm_L_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_lowerarm_L_skinned_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 262, 0, 0, -90, 0),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_lowerarm_L_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_hand_L_skinned_mesh_layer_1),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 324, 0, 0, 90, 0),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_hand_L_mesh_layer_1),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 151, -178, -90, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_upperarm_R_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_lowerarm_R_skinned_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 262, 0, evi_intro_lowerarm_R_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_hand_R_skinned_mesh_layer_1),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 324, 0, evi_intro_hand_R_mesh_layer_1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_upperleg_L_skinned_mesh_layer_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 82, 201, 0, -90, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_upperleg_L_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_lowerleg_L_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 115, 0, -1, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_lowerleg_L_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 150, 0, -61, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_foot_L_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_upperleg_R_skinned_mesh_layer_1),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 82, -201, 0, -90, -180),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_upperleg_R_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_lowerleg_R_skinned_mesh_layer_1),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 115, 0, -1, 0, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_lowerleg_R_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 150, 0, -61, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, evi_intro_foot_R_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_intro_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, evi_intro_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
