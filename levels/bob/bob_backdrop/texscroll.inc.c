void scroll_sts_mat_bob_backdrop_cozieswater_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bob_backdrop_cozieswater_layer1);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 2));
};

void scroll_bob_level_dl_bob_backdrop() {
	scroll_sts_mat_bob_backdrop_cozieswater_layer1();
}
