#include "Colored_2D_Shader_Program.h"
#include "mesh.h"

Colored_2D_Shader_Program::Colored_2D_Shader_Program(const Shader* vertex_shader, const Shader* fragment_shader)
	: Shader_Program("Shader_Program.Colored.2D", vertex_shader, fragment_shader)
{
}

Colored_2D_Shader_Program::~Colored_2D_Shader_Program()
{
}

void Colored_2D_Shader_Program::render(const Mesh* mesh, const std::vector<GLfloat>* colors) const
{
	glUseProgram(program());
	glBindVertexArray(vao());

	GLuint vbo_index;
	glGenBuffers(1, &vbo_index);
	glBindBuffer(GL_ARRAY_BUFFER, vbo_index);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * mesh->verticies().size(), mesh->verticies().data(), GL_STATIC_DRAW);

	GLint vertex_location = glGetAttribLocation(program(), "vertex_position");
	if (vertex_location == -1)
	{
		std::cout << "Failed to get vertex_location" << std::endl;
		exit(1);
	}
	glEnableVertexAttribArray(vertex_location);
	glVertexAttribPointer(vertex_location, 2, GL_FLOAT, GL_FALSE, 0, NULL);

	GLuint cbo_index;
	glGenBuffers(1, &cbo_index);
	glBindBuffer(GL_ARRAY_BUFFER, cbo_index);
	glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * colors->size(), colors->data(), GL_STATIC_DRAW);

	GLint color_location = glGetAttribLocation(program(), "vertex_color");
	if (color_location == -1)
	{
		std::cout << "Failed to get color_location" << std::endl;
		exit(1);
	}
	glEnableVertexAttribArray(color_location);
	glVertexAttribPointer(color_location, 4, GL_FLOAT, GL_FALSE, 0, NULL);

	glDrawArrays(GL_TRIANGLES, 0, GLsizei(mesh->verticies().size() / 2));

	glDeleteBuffers(1, &vbo_index);
	glDeleteBuffers(1, &cbo_index);
}
