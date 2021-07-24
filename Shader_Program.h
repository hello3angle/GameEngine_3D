#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include "Asset.h"

class Shader_Program : public Asset
{
public:
	Shader_Program(const char* id, const class Shader* vertex_shader, const class Shader* fragment_shader);
	~Shader_Program();

	const GLuint program() const;
	const GLuint vao() const;

private:
	GLuint _program;
	GLuint _vao;
};

