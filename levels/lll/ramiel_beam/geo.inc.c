#include "src/game/envfx_snow.h"

const GeoLayout ramiel_beam_geo[] = {
	GEO_CULLING_RADIUS(0x7FFF),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_beam_Circle_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_beam_Circle_003_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ramiel_beam_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ramiel_beam_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
