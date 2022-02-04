#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "stomp_smoke/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "peasato/model.inc.c"
#include "luiji/model.inc.c"
#include "luiji/anims/data.inc.c"
#include "luiji/anims/table.inc.c"
#include "reisalina/model.inc.c"
#include "e_genddo/model.inc.c"

#include "evi_unit/model.inc.c"
#include "evi_unit/anims/data.inc.c"
#include "evi_unit/anims/table.inc.c"
#include "luiji_fixed/anims/data.inc.c"
#include "luiji_fixed/anims/table.inc.c"
#include "luiji_fixed/model.inc.c"
#include "e_genddo/anims/data.inc.c"
#include "e_genddo/anims/table.inc.c"
#include "peasato/anims/data.inc.c"
#include "peasato/anims/table.inc.c"
#include "sachiel/model.inc.c"
#include "sachiel/anims/data.inc.c"
#include "sachiel/anims/table.inc.c"
#include "at_field/model.inc.c"
#include "daisuka/model.inc.c"
#include "daisuka/anims/data.inc.c"
#include "daisuka/anims/table.inc.c"
#include "reisalina/anims/data.inc.c"
#include "reisalina/anims/table.inc.c"