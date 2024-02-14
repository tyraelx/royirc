#include "interface.h"
#include "commands.h"

int Interface::prompt()
{
  std::cout << "# ";
  std::getline(std::cin, input);

  return 0;
}

int Interface::parse()
{
	std::vector<std::string> split = str_split(input, ' ');

	if (split.size() == 0)
		return 0;

	std::string command = split[0];

	split.erase(split.begin());

	return Commands::attempt(command, split);
}

int Interface::init()
{
	int run = 1;
	while (run == 1)
	{
		prompt();
		int exit = parse();

		if (exit == 1)
			run = 0;
	}

	return 0;
}
