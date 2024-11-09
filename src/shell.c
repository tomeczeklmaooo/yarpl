#include <stdio.h>
#include <string.h>

#include "include/shell.h"
#include "include/lexer.h"
#include "include/tokens.h"

void shell()
{
	printf("yarpl interpreter v0.1\n");
	char input[256];
	char output[1024];
	char token_string[80];

	while (1)
	{
		printf("yarpl>> ");
		fgets(input, sizeof(input), stdin);

		// exit
		if (strncmp(input, "exit", 4) == 0) break;

		const char *input_ptr = input;
		Token token;
		output[0] = '\0'; // resetting the output

		while ((token = get_next_token(&input_ptr)).type != TOKEN_END)
		{
			return_token(token, token_string);
			strcat(output, token_string);
			strcat(output, " ");
		}

		// return_token(token, token_string);
		// strcat(output, token_string);
		printf("%s\n", output);
	}
}