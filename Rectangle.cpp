#include "Rectangle.h"
#include "Mesh.h"
#include "Assets.h"
#include "Colored_2D_Shader_Program.h"
#include "Textured_2D_Shader_Program.h"

Rectangle::Rectangle(const char* id, const int& key)
	: Game_Object(id, key)
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::render(const double& seconds_to_simulate, const Assets* assets, const Scene* scene)
{
	if (getIsVisible())
	{
		const Textured_2D_Shader_Program* program =
			(Textured_2D_Shader_Program*)assets->get_asset("Shader_Program.Textured.2D");
		const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Rectangle");
		const Texture* texture = (Texture*)assets->get_asset("Sprite.Olympic");

		const glm::mat4x4 transformation = Game_Object::transformation(scene);

		program->render(mesh, texture, &transformation);

		//std::vector<GLfloat> colors =
		//{
		//	1.f, 0.f, 0.f, 1.f,	// v1
		//	0.f, 1.f, 0.f, 1.f,	// v2
		//	0.f, 0.f, 1.f, 1.f,	// v3
		//	0.f, 1.f, 0.f, 1.f,	// v2
		//	1.f, 1.f, 0.f, 1.f,	// v4
		//	0.f, 0.f, 1.f, 1.f,	// v3
		//};

		//const Colored_2D_Shader_Program* program = (Colored_2D_Shader_Program*)assets->get_asset("Shader_Program.Colored.2D");
		//program->render(mesh, &colors);
	}
}
