void scroll_fmttm_Plane_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 198;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 0.5199999809265137;
	float frequencyX = 0.1599999964237213;
	float offsetX = 0.0;
	Vtx *vertices = segmented_to_virtual(fmttm_Plane_mesh_layer_5_vtx_1);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;	timeX += 1;
}

void scroll_sts_mat_fmttm_cozieswater_layer5() {
	Gfx *mat = segmented_to_virtual(mat_fmttm_cozieswater_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 2));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 3));
};

void scroll_sts_mat_fmttm_cozieswater_002_layer5() {
	Gfx *mat = segmented_to_virtual(mat_fmttm_cozieswater_002_layer5);
	shift_t(mat, 22, PACK_TILESIZE(0, 3));
};

void scroll_sts_mat_fmttm_cozieswater_001() {
	Gfx *mat = segmented_to_virtual(mat_fmttm_cozieswater_001);
	shift_s(mat, -1, PACK_TILESIZE(0, 1));
	shift_t(mat, -1, PACK_TILESIZE(0, 3));
};

void scroll_actor_geo_fmttm() {
	scroll_fmttm_Plane_mesh_layer_5_vtx_1();
	scroll_sts_mat_fmttm_cozieswater_layer5();
	scroll_sts_mat_fmttm_cozieswater_002_layer5();
	scroll_sts_mat_fmttm_cozieswater_001();
}
