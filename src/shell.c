#include <stdio.h>
#include <string.h>

#include "include/shell.h"
#include "include/lexer.h"
#include "include/tokens.h"
#include "include/constants.h"

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

		while ((token = get_next_token(&input_ptr)).type != TOKEN_EOL)
		{
			return_token(token, token_string, MAX_TOKEN_STRING);
			strncat(output, token_string, MAX_OUTPUT_LENGTH - strlen(output) - 1);
			strncat(output, " ", MAX_OUTPUT_LENGTH - strlen(output) - 1);
		}

		return_token((Token){TOKEN_EOL, ""}, token_string, MAX_TOKEN_STRING);
		strncat(output, token_string, MAX_OUTPUT_LENGTH - strlen(output) - 1);
		printf("%s ", output);

		return_token((Token){TOKEN_EOF, ""}, output, MAX_OUTPUT_LENGTH);
		printf("%s\n", output);
	}
}