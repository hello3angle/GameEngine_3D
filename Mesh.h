#pragma once
#include "asset.h"

#include <vector>

#define GLEW_STATIC
#include <GL/glew.h>

class Mesh : public Asset
{
public:
	Mesh(const char* id);
	~Mesh();

	const std::vector<GLfloat> verticies() const;
	const std::vector<GLfloat> texture_coordinates() const;

protected:
	std::vector<GLfloat> _verticies;
	std::vector<GLfloat> _texture_coordinates;
};

