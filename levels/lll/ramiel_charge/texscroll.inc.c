void scroll_ramiel_charge_Circle_002_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 68;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ramiel_charge_Circle_002_mesh_layer_4_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ramiel_charge_Circle_002_mesh_layer_4_vtx_1() {
	int i = 0;
	int count = 86;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ramiel_charge_Circle_002_mesh_layer_4_vtx_1);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll_level_geo_ramiel_charge() {
	scroll_ramiel_charge_Circle_002_mesh_layer_4_vtx_0();
	scroll_ramiel_charge_Circle_002_mesh_layer_4_vtx_1();
}
