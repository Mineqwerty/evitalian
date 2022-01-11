void scroll_sa_dl_Circle_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 208;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_mesh_layer_1_vtx_1);

	deltaX = (int)(2.0199999809265137 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_Circle_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 185;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_001_mesh_layer_5_vtx_0);

	deltaX = (int)(1.3300000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_Circle_002_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 41;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_002_mesh_layer_1_vtx_0);

	deltaX = (int)(0.2200000286102295 * 0x20) % width;
	deltaY = (int)(0.10000002384185791 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sa_dl_Circle_003_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 184;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_003_mesh_layer_5_vtx_0);

	deltaX = (int)(1.600000023841858 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_Circle_004_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 185;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_004_mesh_layer_5_vtx_0);

	deltaX = (int)(1.3600000143051147 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_Circle_006_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 41;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_006_mesh_layer_1_vtx_0);

	deltaX = (int)(0.2200000286102295 * 0x20) % width;
	deltaY = (int)(0.10000002384185791 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sa_dl_Circle_007_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 41;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_007_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;
	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sa_dl_Circle_010_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 41;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Circle_010_mesh_layer_1_vtx_0);

	deltaX = (int)(0.2200000286102295 * 0x20) % width;
	deltaY = (int)(0.10000002384185791 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sts_mat_sa_dl_f3d_material_012_v4() {
	static int intervalTex0 = 7;
	static int curInterval0 = 7;
	Gfx *mat = segmented_to_virtual(mat_sa_dl_f3d_material_012_v4);

	if (--curInterval0 <= 0) {
		shift_t_down(mat, 18, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_sa_dl_f3d_material_027_v4() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_sa_dl_f3d_material_027_v4);

	if (--curInterval0 <= 0) {
		shift_t(mat, 18, PACK_TILESIZE(0, 45));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_sa_dl_f3d_material_028_v4() {
	Gfx *mat = segmented_to_virtual(mat_sa_dl_f3d_material_028_v4);
	shift_t(mat, 18, PACK_TILESIZE(0, 45));
};

void scroll_sa_dl_Plane_013_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_Plane_013_mesh_layer_1_vtx_0);

	deltaX = (int)(-1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_Plane_022_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Plane_022_mesh_layer_1_vtx_0);

	deltaX = (int)(0.0 * 0x20) % width;
	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sa_dl_Plane_048_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_Plane_048_mesh_layer_1_vtx_0);

	deltaX = (int)(0.0 * 0x20) % width;
	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_sa() {
	scroll_sa_dl_Circle_mesh_layer_1_vtx_1();
	scroll_sa_dl_Circle_001_mesh_layer_5_vtx_0();
	scroll_sa_dl_Circle_002_mesh_layer_1_vtx_0();
	scroll_sa_dl_Circle_003_mesh_layer_5_vtx_0();
	scroll_sa_dl_Circle_004_mesh_layer_5_vtx_0();
	scroll_sa_dl_Circle_006_mesh_layer_1_vtx_0();
	scroll_sa_dl_Circle_007_mesh_layer_1_vtx_0();
	scroll_sa_dl_Circle_010_mesh_layer_1_vtx_0();
	scroll_sts_mat_sa_dl_f3d_material_012_v4();
	scroll_sts_mat_sa_dl_f3d_material_027_v4();
	scroll_sts_mat_sa_dl_f3d_material_028_v4();
	scroll_sa_dl_Plane_013_mesh_layer_1_vtx_0();
	scroll_sa_dl_Plane_022_mesh_layer_1_vtx_0();
	scroll_sa_dl_Plane_048_mesh_layer_1_vtx_0();
}
