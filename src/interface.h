#pragma once

#include "stdafx.h"
#include "client.h"

class Interface {
private:
  std::string input;
	Client client;

	int prompt();

	int parse();

public:
	int init();
};
