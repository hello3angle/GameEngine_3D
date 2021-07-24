#include "Pyramid_Mesh.h"

Pyramid_Mesh::Pyramid_Mesh()
	: Mesh("Mesh.Pyramid")
{
	auto v1 = { -0.5f, -0.5f, 0.5f };
	auto v2 = { 0.5f, -0.5f, 0.5f };
	auto v3 = { 0.f, 0.5f, 0.f };
	auto v4 = { 0.f, -0.5f, -0.5f };

	auto tl = { 0.0f, 0.0f };
	auto tr = { 1.0f, 0.0f };
	auto tc = { 0.5f, 1.0f };

	// Front face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);
	_texture_coordinates.insert(_texture_coordinates.end(), tc);

	// Right face
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);
	_texture_coordinates.insert(_texture_coordinates.end(), tc);

	// Left face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);
	_texture_coordinates.insert(_texture_coordinates.end(), tc);

	// Bottom face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v2);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);
	_texture_coordinates.insert(_texture_coordinates.end(), tc);
}

Pyramid_Mesh::~Pyramid_Mesh()
{
}
