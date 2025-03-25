#pragma once

#include <vector>
#include <iostream>
#include <fstream>

class Models
{
private:
	
public:
	Models();
	~Models();
	std::vector<float> vertices;
	std::vector<unsigned int> vertices_index;
	void	triangulate(std::vector<std::string>&tmpvec);
	void	parsing_obj(const std::string &filename);
};
