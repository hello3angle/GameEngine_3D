#include "Cube_Mesh2.h"

Cube_Mesh2::Cube_Mesh2()
	: Mesh("Mesh.Cube2")
{
	auto v1 = { -0.5f, 0.5f, 0.5f };
	auto v2 = { -0.5f, -0.5f, 0.5f };
	auto v3 = { 0.5f, -0.5f, 0.5f };
	auto v4 = { 0.5f, 0.5f, 0.5f };

	auto v5 = { -0.5f, 0.5f, -0.5f };
	auto v6 = { -0.5f, -0.5f, -0.5f };
	auto v7 = { 0.5f, -0.5f, -0.5f };
	auto v8 = { 0.5f, 0.5f, -0.5f };

	auto width = 1.0f / 6.0f;
	for (int face_index = 0; face_index < 6; ++face_index)
	{
		auto tl = { face_index * width, 1.0f };
		auto tr = { (face_index * width) + width, 1.0f };
		auto br = { (face_index * width) + width, 0.0f };
		auto bl = { face_index * width, 0.0f };

		_texture_coordinates.insert(_texture_coordinates.end(), tl);
		_texture_coordinates.insert(_texture_coordinates.end(), bl);
		_texture_coordinates.insert(_texture_coordinates.end(), br);
		_texture_coordinates.insert(_texture_coordinates.end(), tl);
		_texture_coordinates.insert(_texture_coordinates.end(), br);
		_texture_coordinates.insert(_texture_coordinates.end(), tr);
	}

	// Front Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);

	// Right Face
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v8);

	// Back Face
	_verticies.insert(_verticies.end(), v8);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v8);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v5);

	// Left Face
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v1);

	// Top Face
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v5);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v8);

	// Bottom Face

	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v6);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v7);
	_verticies.insert(_verticies.end(), v3);
}

Cube_Mesh2::~Cube_Mesh2()
{
}
