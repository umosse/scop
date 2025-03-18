#include "../includes/Render.hpp"

Render::Render()
{
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0)
	{
		std::cerr << "error\n";
		return ;
	}

	gladLoadGLLoader(GLADloadproc(SDL_GL_GetProcAddress));
	window = SDL_CreateWindow("scop", width, height, SDL_WINDOW_OPENGL);
	GLContext = SDL_GL_CreateContext(window);
	running = true;
	SDL_GL_MakeCurrent(window, GLContext);
}

Render::~Render()
{
	SDL_DestroyWindow(window);
	SDL_GL_DestroyContext(GLContext);
	// why the fk does SDL_QUIT() not work ???
}
