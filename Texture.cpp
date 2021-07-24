#pragma once

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include "Texture.h"

Texture::Texture(const char* id, const char* file_path)
    : Asset(id)
{
    stbi_set_flip_vertically_on_load(true);
    _data = stbi_load(file_path, &_width, &_height, &_components, STBI_rgb);
}

Texture::~Texture()
{
    delete _data;
}

const unsigned char* Texture::data() const
{
    return _data;
}

const int Texture::width() const
{
    return _width;
}

const int Texture::height() const
{
    return _height;
}

const int Texture::components() const
{
    return _components;
}
