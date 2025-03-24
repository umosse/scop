#include "../includes/Models.hpp"
#include <cstddef>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>

Models::Models(): vertices(), vertices_index()
{
}

void	Models::triangulate(std::string	str, int idx)
{
	if (idx == 4)
	{
		std::vector<unsigned int> tmpvec;
		std::string	tmp;
		std::istringstream	iss(str);
		while (iss >> tmp)
			tmpvec.push_back(tmp);
		std::string	triangleVertices[] = {tmpvec[0], }
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
			const char *tmpstr = str.c_str();
			int	idx = 0;
			for (int i = 0; str[i]; i++)
			{
				if (strcmp(&str[i], " ") == 0)
					idx++;
			}
			if (idx > 3)
			{

			}
			else
			{
				std::istringstream	iss(str.substr(pos + 1));
				while (iss >> tmp)
					vertices_index.push_back(tmp);
			}
		}
	}
}



Models::~Models()
{
}