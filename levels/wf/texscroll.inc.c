void scroll_sts_mat_wf_dl_cozieswater_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_cozieswater_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 1));
};

void scroll_wf_dl_Circle_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 42;
	int width = 32 * 0x20;
	int height = 128 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Circle_mesh_layer_1_vtx_1);

	deltaY = (int)(2.619999885559082 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_sts_mat_wf_dl_cozieswater_layer5();
	scroll_wf_dl_Circle_mesh_layer_1_vtx_1();
}
