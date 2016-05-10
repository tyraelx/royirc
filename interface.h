class Interface {
public:
	string input;

	int prompt()
	{
		cout << "# ";
		getline(cin, input);

		return 0;
	}

	int parse()
	{
		vector<string> split = str_split(input, ' ');

		string command = split[0];

		split.erase(split.begin());

		Commands::attempt(command, split);

		return 0;
	}
};