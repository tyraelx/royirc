#include "util.h"

std::vector<std::string> str_split(std::string str, char delimiter)
{
	std::vector<std::string> gather;

  std::stringstream ss(str);
	std::string token;

	while (getline(ss, token, delimiter))
	{
		gather.push_back(token);
	}

	return gather;
}
