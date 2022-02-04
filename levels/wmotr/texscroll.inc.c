void scroll_sts_mat_wmotr_dl_cozieswater_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wmotr_dl_cozieswater_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 1));
};

void scroll_wmotr() {
	scroll_sts_mat_wmotr_dl_cozieswater_layer5();
}
