class Interface {
private:
	string input;
	Client client;

	int prompt()
	{
		cout << "# ";
		getline(cin, input);

		return 0;
	}

	int parse()
	{
		vector<string> split = str_split(input, ' ');

		if (split.size() == 0)
			return 0;

		string command = split[0];

		split.erase(split.begin());

		return Commands::attempt(command, split);
	}

public:
	int init()
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
};