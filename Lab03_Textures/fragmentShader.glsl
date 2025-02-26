#version 330 core

// Input
in vec2 UV;

// Output
out vec3 colour;

// Uniforms
uniform sampler2D texture1;
uniform sampler2D texture2;

void main()
{
    colour = vec3(mix(texture(texture1, UV), texture(texture2, UV), 1));
    //colour = vec3(texture(texture2, UV).y,texture(texture2, UV).x,texture(texture2, UV).z);
}