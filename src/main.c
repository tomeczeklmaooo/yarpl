#include <stdio.h>
#include <stdlib.h>

#include "include/shell.h"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		yarplshell();
	}
	else
	{
		for (int i = 0; i < argc; i++)
		{
			// this loop will be called when a file name is appended after the 'yarp' command
			printf("argv@pos %d: %s\n", i, argv[i]);
		}
	}

	return 0;
}