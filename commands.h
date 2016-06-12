class Commands {
public:
	static int attempt(string command, vector<string> args)
	{
		cout << command << "\n\n";

		for (int i = 0; i < args.size(); i++)
		{
			cout << "argument: " << args[i] << "\n";
		}

		return 0;
	}

private:
	void newUser(string username, string password)
	{
		cout << "Creating new user..\n";
	}
};