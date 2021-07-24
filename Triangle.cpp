#include "Triangle.h"
#include "Assets.h"
#include "Mesh.h"
#include "Colored_2D_Shader_Program.h"
#include "Textured_2D_Shader_Program.h"

Triangle::Triangle(const char* id, const int& key)
	: Game_Object(id, key)
{
}

Triangle::~Triangle()
{
}

void Triangle::render(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
	if (getIsVisible())
	{
		const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Triangle");
		const Texture* texture = (Texture*)assets->get_asset("Sprite.Olympic");
		const Textured_2D_Shader_Program* program =
			(Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.Textured.2D");

		const glm::mat4x4 transformation = Game_Object::transformation(scene);

		program->render(mesh, texture, &transformation);

		/*std::vector<GLfloat> colors =
		{
			1.f, 0.f, 0.f, 1.f,
			0.f, 1.f, 0.f, 1.f,
			0.f, 0.f, 1.f, 1.f
		};*/
		/*const Colored_2D_Shader_Program* program = (Colored_2D_Shader_Program*)assets->get_asset("Shader_Program.Colored.2D");
		program->render(mesh, &colors);*/
	}
}
