#include "../includes/Render.hpp"
#include "../includes/Models.hpp"
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
		}
		const char *	vertexShaderSource = vss.c_str();
		unsigned int	vertexShader;
		vertexShader = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
		glCompileShader(vertexShader);
		if (glGetError() != 0) {
			std::cerr << "nope\n";
			return 1;
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
		}
		const char *	fragmentShaderSource = fs.c_str();
		unsigned int	fragmentShader;
		fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
		glCompileShader(fragmentShader);
		if (glGetError() != 0) {
			std::cerr << "nope\n";
			return 1;
		}

		unsigned int	shaderProgram;
		shaderProgram = glCreateProgram();
		glAttachShader(shaderProgram, vertexShader);
		glAttachShader(shaderProgram, fragmentShader);
		glLinkProgram(shaderProgram);
		int success;
		char	infoLog[512];
		glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
		if(!success) {
			glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
			std::cerr << infoLog << "\n";
		}

		glDeleteShader(vertexShader);
		glDeleteShader(fragmentShader);
		
		unsigned int	VAO;
		glGenVertexArrays(1, &VAO);
		glBindVertexArray(VAO);
		
		unsigned int VBO;
		glGenBuffers(1, &VBO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(models.vertices), models.vertices.data(), GL_STATIC_DRAW);
		
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
		glEnableVertexAttribArray(0);
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);

		glDrawArrays(GL_TRIANGLES, 0, 3);




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
