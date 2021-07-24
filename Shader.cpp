#include <iostream>
#include <fstream>

#include "Shader.h"

Shader::Shader(const char* id, const char* file_path, const Type type)
	: Asset(id)
{
	std::ifstream file(file_path);
	if (!file.is_open())
		std::cout << "Failed to open file. File: " << file_path << std::endl;

	std::string source = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	const char* source_c_str = source.c_str();

	switch (type)
	{
	case Type::Vertex:
		{
			_data = glCreateShader(GL_VERTEX_SHADER);
			break;
		}
	case Type::Fragment:
		{
			_data = glCreateShader(GL_FRAGMENT_SHADER);
			break;
		}
	default:
		throw std::runtime_error("Unknown shader type provided.");
	}

	glShaderSource(_data, 1, &source_c_str, nullptr);
	glCompileShader(_data);

	GLint shader_compile_result;
	glGetShaderiv(_data, GL_COMPILE_STATUS, &shader_compile_result);
	if (shader_compile_result == GL_FALSE)
	{
		GLchar info[1024];
		glGetShaderInfoLog(_data, sizeof(info), nullptr, info);
		throw std::runtime_error(info);
	}
}

Shader::~Shader()
{
}

const GLuint Shader::data() const
{
	return _data;
}
