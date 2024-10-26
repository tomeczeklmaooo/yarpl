#include <stdio.h>
#include <string.h>

#include "include/shell.h"

void yarplshell()
{
	printf("yarpl interpreter v0.1\n");
	char shinput[128] = "";
	while (strcmp(shinput, "exit") != 0)
	{
		printf("yarpl>> ");
		scanf("%s", (char*)&shinput);
	}
}