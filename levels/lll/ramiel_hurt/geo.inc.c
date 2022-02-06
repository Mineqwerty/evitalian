#include "src/game/envfx_snow.h"

const GeoLayout ramiel_hurt_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_hurt_Icosphere_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_hurt_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
