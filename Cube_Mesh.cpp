#include "Cube_Mesh.h"

Cube_Mesh::Cube_Mesh()
	: Mesh("Mesh.Cube")
{
	auto v1 = { -0.5f, 0.5f, 0.5f };
	auto v2 = { -0.5f, -0.5f, 0.5f };
	auto v3 = { 0.5f, -0.5f, 0.5f };
	auto v4 = { 0.5f, 0.5f, 0.5f };

	auto v5 = { -0.5f, 0.5f, -0.5f };
	auto v6 = { -0.5f, -0.5f, -0.5f };
	auto v7 = { 0.5f, -0.5f, -0.5f };
	auto v8 = { 0.5f, 0.5f, -0.5f };

	auto tl = { 0.0f, 0.0f };
	auto tr = { 1.0f, 0.0f };
	auto br = { 1.0f, 1.0f };
	auto bl = { 0.0f, 1.0f };

	// Front Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

	// Right Face
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v8);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);


	// Back Face
	_verticies.insert(_verticies.end(), v8);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v8);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v5);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

	// Left Face
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v1);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

	// Top Face
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v8);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);

	// Bottom Face
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v3);

	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), bl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tl);
	_texture_coordinates.insert(_texture_coordinates.end(), br);
	_texture_coordinates.insert(_texture_coordinates.end(), tr);
}

Cube_Mesh::~Cube_Mesh()
{
}
