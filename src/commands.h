#pragma once

#include "stdafx.h"

class Commands {
public:
	static int attempt(std::string command, std::vector<std::string> args);

	int nick(std::vector<std::string> args);

	int exit(std::vector<std::string> args);
};
