#include "Pentagon.h"
#include "Mesh.h"
#include "Assets.h"
#include "Colored_2D_Shader_Program.h"
#include "Textured_2D_Shader_Program.h"

Pentagon::Pentagon(const char* id, const int& key)
	: Game_Object(id, key)
{
}

Pentagon::~Pentagon()
{
}

void Pentagon::render(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
	if (getIsVisible())
	{
		const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Pentagon");
		const Texture* texture = (Texture*)assets->get_asset("Sprite.Olympic");
		const Textured_2D_Shader_Program* program =
			(Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.Textured.2D");

		const glm::mat4x4 transformation = Game_Object::transformation(scene);

		program->render(mesh, texture, &transformation);

		//std::vector<GLfloat> colors =
		//{
		//	1.f, 0.f, 0.f, 1.f,		// v1
		//	0.f, 1.f, 0.f, 1.f,		// v2
		//	0.f, 0.f, 1.f, 1.f,		// v3
		//	0.f, 1.f, 0.f, 1.f,		// v2
		//	1.f, 1.f, 0.f, 1.f,		// v4
		//	0.f, 0.f, 1.f, 1.f,		// v3
		//	0.f, 0.f, 1.f, 1.f,		// v3
		//	1.f, 1.f, 0.f, 1.f,		// v4
		//	0.f, 0.5f, 0.5f, 1.f	// v5
		//};

		//const Colored_2D_Shader_Program* program = (Colored_2D_Shader_Program*)assets->get_asset("Shader_Program.Colored.2D");
		//program->render(mesh, &colors);
	}
}
