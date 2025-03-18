#pragma once

#include <glad/glad.h>
#include <iostream>
#include "SDL3/SDL_init.h"
#include "SDL3/SDL.h"

constexpr int	width = 640;
constexpr int	height = 480;

class Render
{
private:
	SDL_Window*		window;
	SDL_GLContext	GLContext;
public:
	bool	running;
	Render();
	~Render();

	
};
