#include "../includes/Render.hpp"
#include "SDL3/SDL_oldnames.h"
#include <cstdlib>

Render::Render()
{
	if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS))
	{
		std::cerr << "error\n";
		return ;
	}

	// SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG);
	// SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
	// SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
	// SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
	window = SDL_CreateWindow("scop", width, height, SDL_WINDOW_OPENGL);
	GLContext = SDL_GL_CreateContext(window);
	running = true;
	SDL_GL_MakeCurrent(window, GLContext);
	if (!gladLoadGLLoader(GLADloadproc(SDL_GL_GetProcAddress)))
	{
		std::cerr << "thisnope\n";
		exit(1);
	}
}

Render::~Render()
{
	SDL_DestroyWindow(window);
	SDL_GL_DestroyContext(GLContext);
	SDL_Quit();
}
