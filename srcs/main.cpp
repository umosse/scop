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

		models.parsing_obj(argv[1]);

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
			0.232406, -1.216630, 1.133818,
			0.232406, -0.745504, 2.843098,
			-0.227475, -0.745504, 2.843098,
			-0.227475, -1.216630, 1.133818,
			0.232407, 1.119982, 1.133819,
			0.232406, 1.119982, 1.602814,
			-0.227475, 1.119982, 1.602813,
			-0.227475, 1.119982, 1.133818,
			0.232406, -0.340316, 2.843098,
			-0.227475, -0.340316, 2.843098,
			0.232407, -0.305193, 1.133819,
			0.232407, -0.294496, 2.297937,
			-0.227475, -0.305193, 1.133818,
			-0.227475, -0.294496, 2.297937,
			0.232406, -1.222569, 1.497195,
			0.232406, -0.745504, 1.477731,
			-0.227475, -0.745504, 1.477731,
			-0.227475, -1.222569, 1.497194,
			-0.227403, -0.731178, 0.901477,
			-0.227403, -0.731178, -0.037620,
			0.223704, -0.731178, -0.037620,
			0.223704, -0.731178, 0.901477,
			-0.227403, 1.119377, 0.901477,
			-0.227403, 1.119377, -0.037620,
			0.223704, 1.119377, -0.037620,
			0.223704, 1.119377, 0.901477,
			-0.227403, -0.129772, 0.901477,
			-0.227403, 0.551492, 0.384487,
			-0.227403, 1.104268, 0.408501,
			-0.227403, 0.507336, 0.901477,
			0.223704, 0.507336, 0.901477,
			0.223704, 1.104269, 0.408501,
			0.223704, 0.551492, 0.384487,
			0.223704, -0.129772, 0.901477,
			-0.227403, 0.634134, -0.037620,
			-0.227403, -0.066768, 0.398575,
			-0.227403, -0.684649, 0.389681,
			-0.227403, -0.075523, -0.037620,
			0.223704, 0.634134, -0.037620,
			0.223704, -0.066768, 0.398575,
			0.223704, -0.684649, 0.389681,
			0.223704, -0.075523, -0.037620
		};
		unsigned int indices[] = {
			2, 17, 16,
			5, 7, 6,
			29, 30, 23,
			6, 10, 9,
			14, 13, 17,
			1, 13, 11,
			9, 3, 2,
			5, 14, 8,
			11, 14, 12,
			1, 18, 4,
			16, 18, 15,
			42, 20, 38,
			39, 32, 33,
			27, 22, 34,
			20, 22, 19,
			25, 23, 26,
			23, 31, 26,
			31, 29, 32,
			29, 33, 32,
			28, 34, 33,
			25, 35, 24,
			39, 36, 35,
			40, 37, 36,
			41, 38, 37,
			26, 31, 32,
			37, 38, 20,
			21, 42, 41,
			12, 5, 6,
			25, 26, 32,
			22, 21, 41,
			8, 14, 7,
			28, 36, 27,
			14, 3, 10,
			33, 40, 39,
			40, 33, 34,
			16, 1, 11,
			14, 10, 7,
			2, 12, 9,
			11, 12, 16,
			34, 41, 40,
			12, 6, 9,
			17, 4, 18,
			36, 28, 35,
			37, 20, 19,
			29, 23, 24,
			27, 37, 19,
			35, 29, 24,
			2, 3, 17,
			5, 8, 7,
			6, 7, 10,
			1, 4, 13,
			9, 10 ,3,
			5, 12 ,14,
			11, 13, 14,
			1, 15 ,18,
			16, 17, 18,
			42, 21, 20,
			39, 25, 32,
			27, 19, 22,
			20, 21, 22,
			25, 24, 23,
			23, 30, 31,
			31, 30, 29,
			29, 28, 33,
			28, 27, 34,
			25, 39, 35,
			39, 40, 36,
			40, 41, 37,
			41, 42, 38,
			14, 17, 3,
			16, 15, 1,
			2, 16, 12,
			34, 22, 41,
			17, 13, 4,
			27, 36, 37,
			35, 28, 29
		};

		unsigned int	VAO;
		glGenVertexArrays(1, &VAO);
		glBindVertexArray(VAO);
		
		unsigned int	VBO;
		glGenBuffers(1, &VBO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
		// glBufferData(GL_ARRAY_BUFFER, models.vertices.size() * sizeof(float), &models.vertices, GL_STATIC_DRAW);

		unsigned int	EBO;
		glGenBuffers(1, &EBO);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
		// glBufferData(GL_ELEMENT_ARRAY_BUFFER, models.vertices_index.size() * sizeof(unsigned int), &models.vertices_index, GL_STATIC_DRAW);
		
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
		glEnableVertexAttribArray(0);

		//wireframe
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);

		glDrawElements(GL_TRIANGLES, 227, GL_UNSIGNED_INT, 0);
		// glDrawElements(GL_TRIANGLES, models.vertices_index.size(), GL_UNSIGNED_INT, 0);

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
