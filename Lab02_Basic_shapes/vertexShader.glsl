#version 330 core

layout(location = 0) in vec3 position;
void main()
{
// Output vertext position
gl_Position = vec4 (positon, 1.0);
}