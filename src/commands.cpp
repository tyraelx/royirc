#include "commands.h"

int Commands::attempt(std::string command, std::vector<std::string> args)
{
	const int length = 2;

	std::string names[length] = {
		"nick",
		"exit"
	};

	int (Commands::*cmds[length])(std::vector<std::string>) = {
		&Commands::nick,
		&Commands::exit
	};

	Commands tmp;		

	int exit = 0;
	int match = 0;

	for (int i = 0; i < length; i++)
	{
		if (command == names[i])
		{
			int test = (tmp.*cmds[i])(args);

			match = 1;

			if (test == 1)
				exit = 1;

			break;
		}
	}

	if (match == 0)
		std::cout << "Command not found: " + command << "\n\n";

	return exit;
}

int Commands::nick(std::vector<std::string> args)
{
  std::cout << "Setting nickname..\n";

	for (int i = 0; i < args.size(); i++)
	{
		/*std::cout << "argument: " << args[i] << "\n";*/
	}

	return 0;
}

int Commands::exit(std::vector<std::string> args)
{
	return 1;
}
