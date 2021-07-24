#pragma once
#include <iostream>
#include <vector>

#include <glm/glm.hpp>

#include "shader_program.h"
#include "texture.h"

class Textured_3D_Shader_Program : public Shader_Program
{
public:
	Textured_3D_Shader_Program(const Shader* vertex_shader, const Shader* fragment_shader);
	~Textured_3D_Shader_Program();

	void render(const class Mesh* mesh, const Texture* texture, const glm::mat4* transformation) const;
};

