class Commands {
public:
	static int attempt(string command, vector<string> args)
	{
		const int length = 2;

		string names[length] = {
			"nick",
			"exit"
		};

		int (Commands::*cmds[length])(vector<string>) = {
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
			cout << "Command not found: " + command << "\n\n";

		return exit;
	}

	int nick(vector<string> args)
	{
		cout << "Setting nickname..\n";

		for (int i = 0; i < args.size(); i++)
		{
			/*cout << "argument: " << args[i] << "\n";*/
		}

		return 0;
	}

	int exit(vector<string> args)
	{
		return 1;
	}
};