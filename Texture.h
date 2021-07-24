#pragma once

#include "Asset.h"

class Texture : public Asset
{
public:
	Texture(const char* id, const char* file_path);
	~Texture();

	const unsigned char* data() const;
	const int width() const;
	const int height() const;
	const int components() const;

private:
	unsigned char* _data;
	int _width;
	int _height;
	int _components;
};

