#include "levels/lll/header.h"
#include "levels/lll/ramiel_drill/texscroll.inc.c"
#include "levels/lll/ramiel_charge/texscroll.inc.c"
#include "levels/lll/ramiel_beam/texscroll.inc.c"
#include "levels/lll/ramiel_drill_hurt/texscroll.inc.c"
void scroll_textures_lll() {
		scroll_lll_level_geo_ramiel_drill();
	scroll_lll_level_geo_ramiel_charge();
	scroll_lll_level_geo_ramiel_beam();
	scroll_lll_level_geo_ramiel_drill_hurt();
}
