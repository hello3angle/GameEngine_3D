#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include "Asset.h"

class Shader : public Asset
{
public:
	enum class Type
	{
		Vertex,
		Fragment
	};

	Shader(const char* id, const char* file_path, const Type type);
	~Shader();

	const GLuint data() const;

private:
	GLuint _data;
};

