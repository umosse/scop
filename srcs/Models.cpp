#include "../includes/Models.hpp"
#include <cstddef>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>

Models::Models(): vertices(), vertices_index()
{
}

void	Models::triangulate(std::vector<std::string>&tmpvec)
{
	for (unsigned int i = 1; i < tmpvec.size() - 1; i++)
	{
		std::string	triangleVertices[] = {tmpvec[0], tmpvec[i], tmpvec[i + 1]};
		vertices_index.push_back(std::stoul(tmpvec[0]) - 1);
		vertices_index.push_back(std::stoul(tmpvec[i]) - 1);
		vertices_index.push_back(std::stoul(tmpvec[i + 1]) - 1);
	}
}

void	Models::parsing_obj(const std::string &filename)
{
	std::ifstream	FileName(filename);
	if (!FileName.is_open())
	{
		std::cerr << "no\n";
		return ;
	}
	std::string	str, type;
	std::size_t	pos, offset;
	while (std::getline(FileName, str))
	{
		pos = str.find(" ");
		type = str.substr(0, pos);
		float	tmp;
		if (type == "v")
		{
			std::istringstream	iss(str.substr(pos + 1));
			while (iss >> tmp)
				vertices.push_back(tmp);
		}
		if (type == "f")
		{
			std::vector<std::string>tmpvec;
			std::istringstream	iss_f(str.substr(pos + 1));
			std::string	tmpstr;
			while (iss_f >> tmpstr)
				tmpvec.push_back(tmpstr);
			if (tmpvec.size() > 3)
				triangulate(tmpvec);
			else
			{
				std::istringstream	iss(str.substr(pos + 1));
				while (iss >> tmp)
					vertices_index.push_back(tmp - 1);
			}
			tmpvec.clear();
		}
	}
	for (int i = 0; i < vertices.size(); i++)
	{
		std::cout << i << " -> " << vertices[i] << "\n";
	}
	for (int i = 0; i < vertices_index.size(); i++)
	{
		std::cout << vertices_index[i] << "\n";
	}
	std::cout << "this > " << vertices_index.size() << "\n";
}



Models::~Models()
{
}