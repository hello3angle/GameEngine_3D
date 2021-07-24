#version 330 core

in vec2 interpolated_texture_coordinate;
uniform sampler2D image;

out vec4 fragment_color;

void main()
{
    vec4 image_textel = texture(image, interpolated_texture_coordinate);
    fragment_color    = image_textel;
}