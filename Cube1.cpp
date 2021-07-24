#include "Cube1.h"
#include "Mesh.h"
#include "Assets.h"
#include "Textured_3D_Shader_Program.h"

Cube1::Cube1(const char* id, const int& key)
	: Game_Object(id, key)
{
}

Cube1::~Cube1()
{
}

void Cube1::render(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
	if (getIsVisible())
	{
		static double total_time = 0;
		total_time += seconds_to_simulate;
		_rotation.y = (float)total_time;

		const Textured_3D_Shader_Program* program =
			(Textured_3D_Shader_Program*)assets->get_asset("Shader_Program.Textured.3D");
		const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Cube");
		const Texture* texture = (Texture*)assets->get_asset("Texture.Dice.One");

		const glm::mat4x4 transformation = Game_Object::transformation(scene);

		program->render(mesh, texture, &transformation);
	}
}
