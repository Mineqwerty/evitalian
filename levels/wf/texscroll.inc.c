void scroll_sts_mat_wf_dl_cozieswater_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_cozieswater_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_wf_dl_f3d_material_023() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_f3d_material_023);
	shift_t_down(mat, 17, PACK_TILESIZE(0, 16));
};

void scroll_sts_mat_wf_dl_cozieswater_001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_cozieswater_001_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 8));
	shift_t(mat, 22, PACK_TILESIZE(0, 8));
};

void scroll_wf() {
	scroll_sts_mat_wf_dl_cozieswater_layer5();
	scroll_sts_mat_wf_dl_f3d_material_023();
	scroll_sts_mat_wf_dl_cozieswater_001_layer5();
}
