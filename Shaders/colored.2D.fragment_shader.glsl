#version 330 core

in vec4 interpolated_color;

out vec4 fragment_color;

void main()
{
    fragment_color = interpolated_color;
}