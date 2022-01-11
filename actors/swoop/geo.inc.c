// 0x0D0000DC
const GeoLayout swoop_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
            GEO_OPEN_NODE(),
               GEO_BILLBOARD(),
               GEO_OPEN_NODE(),
                  GEO_DISPLAY_LIST(LAYER_ALPHA, swoop_seg6_dl_06006880),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, swoop_seg6_dl_06006758),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 54, 0, 0, swoop_seg6_dl_06006A88),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 57, -48, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, swoop_seg6_dl_06006BD0),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 57, -48, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, swoop_seg6_dl_06006D00),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};