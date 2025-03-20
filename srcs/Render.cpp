#include "../includes/Render.hpp"
#include "SDL3/SDL_oldnames.h"

Render::Render()
{
	if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS))
	{
		std::cerr << "error\n";
		return ;
	}

	window = SDL_CreateWindow("scop", width, height, SDL_WINDOW_OPENGL);
	GLContext = SDL_GL_CreateContext(window);
	running = true;
	SDL_GL_MakeCurrent(window, GLContext);
	if (!gladLoadGLLoader(GLADloadproc(SDL_GL_GetProcAddress)))
		std::cerr << "nope\n";
}

Render::~Render()
{
	SDL_DestroyWindow(window);
	SDL_GL_DestroyContext(GLContext);
	SDL_Quit();
}
