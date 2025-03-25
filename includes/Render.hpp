#pragma once

#include <glad/glad.h>
#include <iostream>
#include "SDL3/SDL_init.h"
#include "SDL3/SDL.h"

constexpr int	width = 1260;
constexpr int	height = 840;

class Render
{
private:
SDL_GLContext	GLContext;
public:
	SDL_Window*		window;
	bool	running;
	Render();
	~Render();

	
};
