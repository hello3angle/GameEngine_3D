#include "Mesh.h"

Mesh::Mesh(const char* id)
    : Asset(id)
{
}

Mesh::~Mesh()
{
}

const std::vector<GLfloat> Mesh::verticies() const
{
    return _verticies;
}

const std::vector<GLfloat> Mesh::texture_coordinates() const
{
    return _texture_coordinates;
}
