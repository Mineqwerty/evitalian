Lights1 ramiel_beam_f3d_material_013_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx ramiel_beam_beamenv_ci4_aligner[] = {gsSPEndDisplayList()};
u8 ramiel_beam_beamenv_ci4[] = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x12, 0x22, 0x33, 0x33, 0x33, 0x22, 
	0x00, 0x00, 0x00, 0x01, 0x11, 0x22, 0x22, 0x21, 
	0x11, 0x11, 0x12, 0x23, 0x33, 0x33, 0x32, 0x22, 
	0x00, 0x00, 0x01, 0x00, 0x11, 0x22, 0x32, 0x22, 
	0x11, 0x11, 0x22, 0x33, 0x33, 0x33, 0x32, 0x21, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x22, 0x32, 0x21, 
	0x11, 0x11, 0x23, 0x33, 0x33, 0x33, 0x33, 0x22, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x12, 0x22, 0x22, 
	0x21, 0x21, 0x22, 0x33, 0x33, 0x33, 0x33, 0x32, 
	0x44, 0x04, 0x40, 0x00, 0x01, 0x12, 0x22, 0x22, 
	0x21, 0x12, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x40, 0x00, 0x00, 0x12, 0x22, 0x22, 
	0x22, 0x11, 0x22, 0x33, 0x35, 0x55, 0x33, 0x33, 
	0x44, 0x44, 0x40, 0x00, 0x11, 0x12, 0x22, 0x11, 
	0x11, 0x11, 0x23, 0x33, 0x35, 0x55, 0x33, 0x33, 
	0x44, 0x44, 0x00, 0x01, 0x11, 0x22, 0x11, 0x11, 
	0x11, 0x12, 0x23, 0x33, 0x33, 0x53, 0x33, 0x33, 
	0x44, 0x44, 0x00, 0x01, 0x11, 0x22, 0x11, 0x11, 
	0x11, 0x11, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x00, 0x01, 0x11, 0x11, 0x11, 0x21, 
	0x11, 0x11, 0x22, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x40, 0x01, 0x11, 0x11, 0x12, 0x22, 
	0x22, 0x11, 0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x00, 0x00, 0x11, 0x11, 0x11, 0x12, 
	0x21, 0x11, 0x12, 0x23, 0x33, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x12, 0x33, 0x33, 0x33, 0x33, 
	0x64, 0x44, 0x40, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x12, 0x23, 0x33, 0x33, 0x33, 
	0x64, 0x44, 0x44, 0x00, 0x11, 0x11, 0x00, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x23, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x01, 0x11, 0x11, 0x12, 0x33, 0x33, 0x33, 
	0x44, 0x44, 0x44, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x11, 0x11, 0x12, 0x22, 0x23, 0x33, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x11, 0x12, 0x22, 0x22, 0x33, 
	0x44, 0x46, 0x66, 0x44, 0x44, 0x44, 0x44, 0x00, 
	0x00, 0x00, 0x01, 0x11, 0x11, 0x12, 0x22, 0x23, 
	0x44, 0x46, 0x77, 0x66, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x22, 
	0x44, 0x46, 0x77, 0x77, 0x66, 0x44, 0x44, 0x44, 
	0x44, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 0x22, 
	0x44, 0x44, 0x46, 0x77, 0x76, 0x44, 0x44, 0x44, 
	0x44, 0x04, 0x40, 0x00, 0x00, 0x01, 0x11, 0x12, 
	0x44, 0x44, 0x44, 0x77, 0x76, 0x66, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x40, 0x00, 0x00, 0x01, 0x11, 
	0x00, 0x44, 0x44, 0x47, 0x77, 0x77, 0x66, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x40, 0x00, 0x00, 0x01, 
	0x00, 0x04, 0x44, 0x46, 0x77, 0x77, 0x76, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x44, 0x44, 0x47, 0x77, 0x76, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 0x00, 0x00, 
	0x10, 0x00, 0x04, 0x44, 0x46, 0x77, 0x76, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x00, 0x00, 0x44, 0x44, 0x46, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x00, 0x00, 0x04, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x00, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x10, 0x00, 0x04, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	0x11, 0x10, 0x00, 0x00, 0x00, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 
	
};

Gfx ramiel_beam_beamenv_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ramiel_beam_beamenv_ci4_pal_rgba16[] = {
	0xe7, 0x7f, 0xef, 0x7f, 0xef, 0xbf, 0xf7, 0xbf, 
	0xdf, 0x7f, 0xff, 0xbf, 0xdf, 0x3f, 0xd7, 0x3f, 
	
};

Gfx ramiel_beam_shoonen3_ia8_aligner[] = {gsSPEndDisplayList()};
u8 ramiel_beam_shoonen3_ia8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf1, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf1, 0xf7, 0xfa, 0xf6, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf2, 0xfd, 0xff, 0xfe, 0xf4, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf2, 0xfe, 0xff, 0xff, 0xf8, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf1, 0xfd, 0xff, 0xff, 0xf8, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf0, 0xf6, 0xfc, 0xfb, 0xf4, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf1, 0xf1, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf2, 0xf2, 0xf1, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf3, 0xfc, 0xff, 0xff, 0xfd, 0xf3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf5, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xf7, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf5, 
	0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xfa, 0xfe, 0xff, 0xfe, 0xfd, 0xf7, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf0, 0xf4, 0xf7, 0xf5, 0xf2, 0xf1, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf1, 0xf0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf2, 0xf2, 0xf4, 0xf5, 0xf3, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xf9, 0xfe, 0xff, 0xff, 0xff, 0xfe, 0xf6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
	0xf4, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
	0xf3, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf1, 0xf2, 0xf1, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf1, 0xf9, 0xfe, 0xfe, 0xff, 0xfe, 0xf9, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf0, 0xf6, 0xfd, 0xfe, 0xfe, 0xfb, 
	0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf1, 0xf2, 0xf2, 0xf2, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf1, 0xfd, 0xff, 0xff, 0xff, 0xff, 
	0xf8, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf2, 0xfe, 0xff, 0xff, 0xff, 0xfe, 
	0xf7, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf1, 0xf9, 0xfe, 0xfe, 0xfd, 0xf8, 
	0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf2, 0xf2, 0xf1, 0xf0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Vtx ramiel_beam_Circle_003_mesh_layer_1_vtx_cull[8] = {
	{{{-1230, -1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, 1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, 1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, -1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, -1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, 1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, 1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, -1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx ramiel_beam_Circle_003_mesh_layer_1_vtx_0[43] = {
	{{{458, -793, 1518},0, {-16, 1008},{0x3E, 0x95, 0xE1, 0xFF}}},
	{{{458, -793, 18235},0, {-16, 1008},{0x3F, 0x92, 0x0, 0xFF}}},
	{{{0, -916, 18235},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{793, -458, 1518},0, {-16, 1008},{0x6B, 0xC2, 0xE1, 0xFF}}},
	{{{25, -14, -43},0, {-16, 1008},{0x60, 0xC9, 0xC1, 0xFF}}},
	{{{14, -25, -43},0, {-16, 1008},{0x37, 0xA0, 0xC1, 0xFF}}},
	{{{0, -916, 1518},0, {-16, 1008},{0x0, 0x85, 0xE1, 0xFF}}},
	{{{-458, -793, 18235},0, {-16, 1008},{0xC1, 0x92, 0x0, 0xFF}}},
	{{{-458, -793, 1518},0, {-16, 1008},{0xC2, 0x95, 0xE1, 0xFF}}},
	{{{-793, -458, 18235},0, {-16, 1008},{0x92, 0xC1, 0x0, 0xFF}}},
	{{{-793, -458, 1518},0, {-16, 1008},{0x95, 0xC2, 0xE1, 0xFF}}},
	{{{-916, 0, 18235},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-916, 0, 1518},0, {-16, 1008},{0x85, 0x0, 0xE1, 0xFF}}},
	{{{-793, 458, 18235},0, {-16, 1008},{0x92, 0x3F, 0x0, 0xFF}}},
	{{{-793, 458, 1518},0, {-16, 1008},{0x95, 0x3E, 0xE1, 0xFF}}},
	{{{-458, 793, 18235},0, {-16, 1008},{0xC1, 0x6E, 0x0, 0xFF}}},
	{{{-458, 793, 1518},0, {-16, 1008},{0xC2, 0x6B, 0xE1, 0xFF}}},
	{{{0, 916, 18235},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 916, 1518},0, {-16, 1008},{0x0, 0x7B, 0xE1, 0xFF}}},
	{{{458, 793, 18235},0, {-16, 1008},{0x3F, 0x6E, 0x0, 0xFF}}},
	{{{458, 793, 1518},0, {-16, 1008},{0x3E, 0x6B, 0xE1, 0xFF}}},
	{{{793, 458, 18235},0, {-16, 1008},{0x6E, 0x3F, 0x0, 0xFF}}},
	{{{793, 458, 1518},0, {-16, 1008},{0x6B, 0x3E, 0xE1, 0xFF}}},
	{{{916, 0, 18235},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{916, 0, 1518},0, {-16, 1008},{0x7B, 0x0, 0xE1, 0xFF}}},
	{{{793, -458, 18235},0, {-16, 1008},{0x6E, 0xC1, 0x0, 0xFF}}},
	{{{29, 0, -43},0, {-16, 1008},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{25, 14, -43},0, {-16, 1008},{0x60, 0x37, 0xC1, 0xFF}}},
	{{{14, 25, -43},0, {-16, 1008},{0x37, 0x60, 0xC1, 0xFF}}},
	{{{0, 29, -43},0, {-16, 1008},{0x0, 0x6E, 0xC1, 0xFF}}},
	{{{-14, 25, -43},0, {-16, 1008},{0xC9, 0x60, 0xC1, 0xFF}}},
	{{{-25, 14, -43},0, {-16, 1008},{0xA0, 0x37, 0xC1, 0xFF}}},
	{{{-793, 458, 1518},0, {-16, 1008},{0x95, 0x3E, 0xE1, 0xFF}}},
	{{{-25, 14, -43},0, {-16, 1008},{0xA0, 0x37, 0xC1, 0xFF}}},
	{{{-29, 0, -43},0, {-16, 1008},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{-916, 0, 1518},0, {-16, 1008},{0x85, 0x0, 0xE1, 0xFF}}},
	{{{-25, -14, -43},0, {-16, 1008},{0xA0, 0xC9, 0xC1, 0xFF}}},
	{{{-793, -458, 1518},0, {-16, 1008},{0x95, 0xC2, 0xE1, 0xFF}}},
	{{{-14, -25, -43},0, {-16, 1008},{0xC9, 0xA0, 0xC1, 0xFF}}},
	{{{-458, -793, 1518},0, {-16, 1008},{0xC2, 0x95, 0xE1, 0xFF}}},
	{{{0, -29, -43},0, {-16, 1008},{0x0, 0x92, 0xC1, 0xFF}}},
	{{{0, -916, 1518},0, {-16, 1008},{0x0, 0x85, 0xE1, 0xFF}}},
	{{{14, -25, -43},0, {-16, 1008},{0x37, 0xA0, 0xC1, 0xFF}}},
};

Gfx ramiel_beam_Circle_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(ramiel_beam_Circle_003_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
	gsSP2Triangles(8, 7, 9, 0, 8, 9, 10, 0),
	gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(14, 13, 15, 0, 14, 15, 16, 0),
	gsSP2Triangles(16, 15, 17, 0, 16, 17, 18, 0),
	gsSP2Triangles(18, 17, 19, 0, 18, 19, 20, 0),
	gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
	gsSP2Triangles(22, 21, 23, 0, 22, 23, 24, 0),
	gsSP2Triangles(24, 23, 25, 0, 24, 25, 3, 0),
	gsSP2Triangles(3, 25, 1, 0, 3, 26, 24, 0),
	gsSP2Triangles(3, 4, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(24, 27, 22, 0, 22, 27, 28, 0),
	gsSP2Triangles(22, 28, 20, 0, 20, 28, 29, 0),
	gsSP2Triangles(20, 29, 18, 0, 18, 29, 30, 0),
	gsSP2Triangles(18, 30, 16, 0, 16, 30, 31, 0),
	gsSP1Triangle(16, 31, 14, 0),
	gsSPVertex(ramiel_beam_Circle_003_mesh_layer_1_vtx_0 + 32, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSPEndDisplayList(),
};

Vtx ramiel_beam_Circle_003_mesh_layer_4_vtx_cull[8] = {
	{{{-1230, -1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, 1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, 1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-1230, -1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, -1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, 1230, 18235},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, 1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{1230, -1230, -43},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx ramiel_beam_Circle_003_mesh_layer_4_vtx_0[26] = {
	{{{-550, -952, 1518},0, {10009, 240},{0xC1, 0x92, 0xFF, 0xFF}}},
	{{{-615, -1066, 18235},0, {-7822, 240},{0xC1, 0x92, 0xFF, 0xFF}}},
	{{{-1066, -615, 18235},0, {-7822, 283},{0x92, 0xC1, 0xFF, 0xFF}}},
	{{{-952, -550, 1518},0, {10009, 283},{0x92, 0xC1, 0xFF, 0xFF}}},
	{{{-1230, 0, 18235},0, {-7822, 325},{0x81, 0x0, 0xFF, 0xFF}}},
	{{{-1099, 0, 1518},0, {10009, 325},{0x81, 0x0, 0xFF, 0xFF}}},
	{{{-1066, 615, 18235},0, {-7822, 368},{0x92, 0x3F, 0xFF, 0xFF}}},
	{{{-952, 550, 1518},0, {10009, 368},{0x92, 0x3F, 0xFF, 0xFF}}},
	{{{-615, 1066, 18235},0, {-7822, 411},{0xC1, 0x6E, 0xFF, 0xFF}}},
	{{{-550, 952, 1518},0, {10009, 411},{0xC1, 0x6E, 0xFF, 0xFF}}},
	{{{0, 1230, 18235},0, {-7822, 453},{0x0, 0x7F, 0xFF, 0xFF}}},
	{{{0, 1099, 1518},0, {10009, 453},{0x0, 0x7F, 0xFF, 0xFF}}},
	{{{615, 1066, 18235},0, {-7822, 496},{0x3F, 0x6E, 0xFF, 0xFF}}},
	{{{550, 952, 1518},0, {10009, 496},{0x3F, 0x6E, 0xFF, 0xFF}}},
	{{{1066, 615, 18235},0, {-7822, 539},{0x6E, 0x3F, 0xFF, 0xFF}}},
	{{{952, 550, 1518},0, {10009, 539},{0x6E, 0x3F, 0xFF, 0xFF}}},
	{{{1230, 0, 18235},0, {-7822, 581},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{1099, 0, 1518},0, {10009, 581},{0x7F, 0x0, 0xFF, 0xFF}}},
	{{{1066, -615, 18235},0, {-7822, 624},{0x6E, 0xC1, 0xFF, 0xFF}}},
	{{{952, -550, 1518},0, {10009, 624},{0x6E, 0xC1, 0xFF, 0xFF}}},
	{{{615, -1066, 18235},0, {-7822, 667},{0x3F, 0x92, 0xFF, 0xFF}}},
	{{{550, -952, 1518},0, {10009, 667},{0x3F, 0x92, 0xFF, 0xFF}}},
	{{{0, -1230, 18235},0, {-7822, 709},{0x0, 0x81, 0xFF, 0xFF}}},
	{{{0, -1099, 1518},0, {10009, 709},{0x0, 0x81, 0xFF, 0xFF}}},
	{{{-615, -1066, 18235},0, {-7822, 752},{0xC1, 0x92, 0xFF, 0xFF}}},
	{{{-550, -952, 1518},0, {10009, 752},{0xC1, 0x92, 0xFF, 0xFF}}},
};

Gfx ramiel_beam_Circle_003_mesh_layer_4_tri_0[] = {
	gsSPVertex(ramiel_beam_Circle_003_mesh_layer_4_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
	gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
	gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
	gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
	gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ramiel_beam_f3d_material_012[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(1983, 1983, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, ramiel_beam_beamenv_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 7),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, ramiel_beam_beamenv_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ramiel_beam_f3d_material_012[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_ramiel_beam_f3d_material_013[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, ramiel_beam_shoonen3_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(ramiel_beam_f3d_material_013_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ramiel_beam_f3d_material_013[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx ramiel_beam_Circle_003_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(ramiel_beam_Circle_003_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_ramiel_beam_f3d_material_012),
	gsSPDisplayList(ramiel_beam_Circle_003_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_ramiel_beam_f3d_material_012),
	gsSPEndDisplayList(),
};

Gfx ramiel_beam_Circle_003_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(ramiel_beam_Circle_003_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_ramiel_beam_f3d_material_013),
	gsSPDisplayList(ramiel_beam_Circle_003_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ramiel_beam_f3d_material_013),
	gsSPEndDisplayList(),
};

Gfx ramiel_beam_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

