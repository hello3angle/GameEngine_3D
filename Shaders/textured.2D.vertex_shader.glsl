#version 330 core

in vec2 vertex_position;
in vec2 vertex_texture_coordinate;

out vec2 interpolated_texture_coordinate;

uniform mat4 transformation;

void main()
{
    vec4 transformed_position = transformation * vec4(vertex_position.xy, 1.0, 1.0);
    gl_Position = vec4(transformed_position.xy, 0.0, 1.0);
    interpolated_texture_coordinate = vertex_texture_coordinate;
}