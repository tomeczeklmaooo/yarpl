#include <stdio.h>
#include <string.h>

#include "include/shell.h"
#include "include/lexer.h"
#include "include/tokens.h"

void shell()
{
	printf("yarpl interpreter v0.1\n");
	Token token;
	char shinput[128] = "";
	char output[1024] = "";
	char token_string[80];

	while (strcmp(shinput, "exit") != 0)
	{
		printf("yarpl>> ");
		scanf("%s", (char*)&shinput);
		// this just so we can pass the input to get_next_token()
		const char *input_ptr = (char*)&shinput;
		while ((token = get_next_token(&input_ptr)).type != TOKEN_END)
		{
			return_token(token, token_string);
			strcat(output, token_string);
		}

		return_token(token, token_string);
		strcat(output, token_string);

		printf("%s\n", output);
	}
}