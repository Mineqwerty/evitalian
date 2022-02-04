#include "src/game/envfx_snow.h"

const GeoLayout daisuka_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, -5, 0, 36, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 23, 0, 0, -36, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Torso_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 83, 6, daisuka_Chest_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 23, 0, daisuka_Head_mesh_layer_1),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 14, 12, -6, -96, -90, 7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Left_shoulder_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 15, 0, 6, -1, -7),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Left_arm_1_mesh_layer_1),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -2, 0, 0),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Left_arm_2_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 1, -1, 0, 0),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Left_hand_mesh_layer_1),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -14, 12, -6, -96, 90, -7),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Right_shoulder_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 15, 0, 6, 1, 7),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Right_arm_1_mesh_layer_1),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 14, 0, -2, 0, 0),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Right_arm_2_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 20, 1, -1, 0, 0),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, daisuka_Right_hand_mesh_layer_1),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, daisuka_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
