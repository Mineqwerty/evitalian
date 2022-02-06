void scroll_wdw_dl_Plane_007_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 34;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Plane_007_mesh_layer_1_vtx_7);

	deltaX = (int)(0.49000000953674316 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_wdw_dl_cozieswater_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wdw_dl_cozieswater_layer5);
	shift_t(mat, 14, PACK_TILESIZE(0, 1));
	shift_s(mat, 22, PACK_TILESIZE(0, 1));
	shift_t(mat, 22, PACK_TILESIZE(0, 1));
};

void scroll_wdw_dl_Sphere_002_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 208;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Sphere_002_mesh_layer_4_vtx_0);

	deltaX = (int)(0.7900000214576721 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wdw_dl_Sphere_003_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 424;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Sphere_003_mesh_layer_4_vtx_0);

	deltaX = (int)(0.7900000214576721 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wdw_dl_Sphere_004_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 424;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Sphere_004_mesh_layer_4_vtx_0);

	deltaX = (int)(0.7900000214576721 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wdw_dl_Sphere_006_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 254;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wdw_dl_Sphere_006_mesh_layer_4_vtx_0);

	deltaX = (int)(1.4500000476837158 * 0x20) % width;
	deltaY = (int)(0.7599999904632568 * 0x20) % height;

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

#include "src/game/level_update.h"
void scroll_wdw() {
	scroll_wdw_dl_Plane_007_mesh_layer_1_vtx_7();
	scroll_sts_mat_wdw_dl_cozieswater_layer5();
	if (gCutsceneIndex >= 35) {
	scroll_wdw_dl_Sphere_002_mesh_layer_4_vtx_0();
	}
	if (gCutsceneIndex >= 36) {
	scroll_wdw_dl_Sphere_003_mesh_layer_4_vtx_0();
	}
	if (gCutsceneIndex >= 38) {
	scroll_wdw_dl_Sphere_004_mesh_layer_4_vtx_0();
	}
	scroll_wdw_dl_Sphere_006_mesh_layer_4_vtx_0();
}