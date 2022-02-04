#include "src/game/envfx_snow.h"

const GeoLayout ramiel_charge_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_charge_Circle_002_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_charge_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
