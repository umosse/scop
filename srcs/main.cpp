#include "../includes/Render.hpp"
#include "../includes/Models.hpp"
#include "SDL3/SDL_video.h"
#include <fstream>
#include <string>


int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		Render render;
		Models models;

		// models.parsing_obj(argv[1]);

		std::string	vss;
		std::string	shadertmp;
		std::ifstream	file("../res/basic.vert");

		if (!file.is_open())
		{
			std::cerr << "nope\n";
			return 1;
		}
		while (std::getline(file, shadertmp))
		{
			vss += shadertmp;
			vss += "\n";
		}
		const char *	vertexShaderSource = vss.c_str();
		unsigned int	vertexShader = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
		glCompileShader(vertexShader);
		int success;
		char	infoLog[512];
		glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
		if(!success) {
			glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
			std::cerr << "vertexShader\n";
			std::cerr << infoLog << "\n";
		}
		shadertmp.clear();


		std::string	fs;
		file = std::ifstream ("../res/basic.frag");
		if (!file.is_open())
		{
			std::cerr << "nope\n";
			return 1;
		}
		while (std::getline(file, shadertmp))
		{
			fs += shadertmp;
			fs += "\n";
		}
		const char *	fragmentShaderSource = fs.c_str();
		unsigned int	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
		glCompileShader(fragmentShader);
		glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
		if(!success) {
			glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
			std::cerr << "fragmentShader\n";
			std::cerr << infoLog << "\n";
		}


		unsigned int	shaderProgram = glCreateProgram();
		glAttachShader(shaderProgram, vertexShader);
		glAttachShader(shaderProgram, fragmentShader);
		glLinkProgram(shaderProgram);
		glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
		if(!success) {
			glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
			std::cerr << "shaderProgram\n";
			std::cerr << infoLog << "\n";
		}

		glDeleteShader(vertexShader);
		glDeleteShader(fragmentShader);

		float vertices[] = {
			0.5f,  0.5f, 0.0f,
			0.5f, -0.5f, 0.0f,
			-0.5f, -0.5f, 0.0f,
			-0.5f,  0.5f, 0.0f
		};
		unsigned int indices[] = {
			0, 1, 3,
			1, 2, 3
		};

		unsigned int	VAO;
		glGenVertexArrays(1, &VAO);
		glBindVertexArray(VAO);
		
		unsigned int	VBO;
		glGenBuffers(1, &VBO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

		unsigned int	EBO;
		glGenBuffers(1, &EBO);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
		
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
		glEnableVertexAttribArray(0);

		//wireframe
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);

		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

		SDL_GL_SwapWindow(render.window);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


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
