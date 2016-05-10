// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Interface interface;

	int run = 1;
	while(run == 1)
	{
		interface.prompt();
		interface.parse();
	}

	return 0;
}