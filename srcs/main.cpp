#include "../includes/Render.hpp"
#include "../includes/Models.hpp"


int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		Render render;
		Models models;

		models.parsing_obj(argv[1]);

		while (render.running)
		{
			SDL_Event event;
			while (SDL_PollEvent(&event))
			{
				if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
					render.running = false;
			}
		}
	}
}
