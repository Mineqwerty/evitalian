#include "src/game/envfx_snow.h"

const GeoLayout ramiel_drill_hurt_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_drill_hurt_Circle_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_drill_hurt_Circle_004_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_drill_hurt_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_drill_hurt_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
