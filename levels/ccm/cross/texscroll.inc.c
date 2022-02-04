void scroll_cross_Plane_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 46;
	int width = 64 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(cross_Plane_mesh_layer_5_vtx_0);

	deltaX = (int)(1.600000023841858 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ccm_level_geo_cross() {
	scroll_cross_Plane_mesh_layer_5_vtx_0();
}
