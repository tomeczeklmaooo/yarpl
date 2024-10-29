#include <stdio.h>
#include <string.h>

#include "include/shell.h"

void shell()
{
	printf("yarpl interpreter v0.1\n");
	char shinput[128] = "";
	while (strcmp(shinput, "exit") != 0)
	{
		printf("yarpl>> ");
		scanf("%s", (char*)&shinput);
		// here call the function that will parse the input and the display it
		// like: parse(shinput, true);
		// where the first parameter is the string to parse, and the second one is whether to print or not
		// that's the general idea for this
	}
}