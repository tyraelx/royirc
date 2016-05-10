static vector<string> str_split(string str, char delimiter)
{
	vector<string> gather;

	stringstream ss(str);
	string token;

	while (getline(ss, token, delimiter))
	{
		gather.push_back(token);
	}

	return gather;
}