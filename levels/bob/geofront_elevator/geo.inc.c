#include "src/game/envfx_snow.h"

const GeoLayout geofront_elevator_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, geofront_elevator_Plane_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, geofront_elevator_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
