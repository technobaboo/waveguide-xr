#include <stereokit.h>

using namespace sk;

model_t model;

int main() {
	sk_settings_t settings = {};
	settings.app_name = "Waveguide XR";
	settings.log_filter = log_diagnostic;
	// settings.depth_mode = sk::depth_mode_d32;
	sk_init(settings);

	material_t box = material_copy(material_find(default_id_material_ui_box));
	material_set_cull(box, cull_back);
	model = model_create_mesh(mesh_find(default_id_mesh_cube), box);

	while(sk_step([]() {
		
		model_draw(model, matrix_identity);
	})) {};
	// sk_shutdown();
}