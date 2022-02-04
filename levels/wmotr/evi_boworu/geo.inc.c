#include "src/game/envfx_snow.h"

const GeoLayout evi_boworu_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_boworu_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, evi_boworu_Cube_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, evi_boworu_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, evi_boworu_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
