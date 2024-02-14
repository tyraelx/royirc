#pragma once

#include <string>

class Client {
private:
	std::string nickname;
	std::string realname;
	std::string serverIp;
	std::string serverPort;

public:
	int connect();
};
