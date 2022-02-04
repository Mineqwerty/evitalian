#include "src/game/envfx_snow.h"

const GeoLayout cross_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cross_Plane_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, cross_Plane_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cross_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, cross_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
