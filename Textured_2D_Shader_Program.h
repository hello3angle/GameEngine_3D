#pragma once
#include <iostream>
#include <vector>

#include <glm/mat4x4.hpp>

#include "Shader_Program.h"
#include "Texture.h"

class Textured_2D_Shader_Program : public Shader_Program
{
public:
	Textured_2D_Shader_Program(const Shader* vertex_shader, const Shader* fragment_shader);
	~Textured_2D_Shader_Program();

	void render(const class Mesh* mesh, const Texture* texture, const glm::mat4* transformation) const;
};

