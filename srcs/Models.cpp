#include "../includes/Models.hpp"
#include <cstddef>
#include <string>
#include <sstream>

Models::Models(): vertices(), vertices_index()
{
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
		if (type == "v")
		{
			std::istringstream	iss(str.substr(pos + 1));
		}
		if (type == "f")
		{
			
		}
	}
}

Models::~Models()
{
}