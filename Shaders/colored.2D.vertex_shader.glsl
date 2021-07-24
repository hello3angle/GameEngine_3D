#version 330 core
in vec2 vertex_position;
in vec4 vertex_color;

out vec4 interpolated_color;

void main()
{
    vec4 transformed_position = vec4(vertex_position.xy, 0.0, 1.0);

    gl_Position        = transformed_position;
    interpolated_color = vertex_color;
}