#version 330 core
in vec3 vertex;
in vec2 texels;
out vec2 textureCoodrs;

uniform mat4 mvp;

void main()
{
    gl_Position = mvp * vec4(vertex, 1.0);
    textureCoodrs = texels;
}
