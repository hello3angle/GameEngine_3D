#pragma once
#include <vector>
#include <iostream>

#include "Shader_Program.h"

class Colored_2D_Shader_Program : public Shader_Program
{
public:
	Colored_2D_Shader_Program(const Shader* vertex_shader, const Shader* fragment_shader);
	~Colored_2D_Shader_Program();

	void render(const class Mesh* mesh, const std::vector<GLfloat>* colors) const;
};

