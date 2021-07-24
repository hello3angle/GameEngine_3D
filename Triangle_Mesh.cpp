#include "Triangle_Mesh.h"

Triangle_Mesh::Triangle_Mesh()
	: Mesh("Mesh.Triangle")
{
	_verticies.insert(_verticies.end(), { -0.5f, -0.5f });	// v1
	_verticies.insert(_verticies.end(), { 0.5f, -0.5f });	// v2
	_verticies.insert(_verticies.end(), { -0.5f, 0.5f });	// v3

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 0.f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.f, 0.f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 1.f });
}

Triangle_Mesh::~Triangle_Mesh()
{
}
