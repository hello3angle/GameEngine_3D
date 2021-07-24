#include "Pentagon_Mesh.h"

Pentagon_Mesh::Pentagon_Mesh()
	: Mesh("Mesh.Pentagon")
{
	_verticies.insert(_verticies.end(), { -0.25f, -0.5f });	// v1
	_verticies.insert(_verticies.end(), { 0.25f, -0.5f });	// v2
	_verticies.insert(_verticies.end(), { -0.5f, 0.25f });	// v3
	_verticies.insert(_verticies.end(), { 0.25f, -0.5f });	// v2
	_verticies.insert(_verticies.end(), { 0.5f, 0.25f });	// v4
	_verticies.insert(_verticies.end(), { -0.5f, 0.25f });	// v3
	_verticies.insert(_verticies.end(), { -0.5f, 0.25f });	// v3
	_verticies.insert(_verticies.end(), { 0.5f, 0.25f });	// v4
	_verticies.insert(_verticies.end(), { 0.f, 0.75 });		// v5

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 0.f });	// v1
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.f, 0.f });	// v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 0.5f });	// v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.f, 0.f });	// v2
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.f, 0.5f });	// v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 0.5f });	// v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.f, 0.5f });	// v3
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.f, 0.5f });	// v4
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.5f, 1.f });	// v5

}

Pentagon_Mesh::~Pentagon_Mesh()
{
}
