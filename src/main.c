#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/shell.h"
#include "include/lexer.h"
#include "include/tokens.h"
#include "include/constants.h"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		shell();
	}
	else
	{
		for (int i = 0; i < argc; i++)
		{
			// reading from file
			FILE *fptr;
			fptr = fopen(argv[1], "r");
			char line[1024];
			
			char output[MAX_OUTPUT_LENGTH] = "";
			char token_string[MAX_TOKEN_STRING];

			if (fptr != NULL)
			{
				while (fgets(line, sizeof(line), fptr))
				{
					// this just so we can pass the input to get_next_token()
					const char *line_ptr = line;
					Token token;
					output[0] = '\0';
					while ((token = get_next_token(&line_ptr)).type != TOKEN_EOL)
					{
						return_token(token, token_string, MAX_TOKEN_STRING);
						strncat(output, token_string, MAX_OUTPUT_LENGTH - strlen(output) - 1);
						strncat(output, " ", MAX_OUTPUT_LENGTH - strlen(output) - 1);
					}

					return_token((Token){TOKEN_EOL, ""}, token_string, MAX_TOKEN_STRING);
					strncat(output, token_string, MAX_OUTPUT_LENGTH - strlen(output) - 1);

					printf("%s\n", output);
				}
				
				return_token((Token){TOKEN_EOF, ""}, output, MAX_OUTPUT_LENGTH);
				printf("%s\n", output);

				fclose(fptr);
			}
			else
			{
				printf("Unable to open file: %s\n", argv[1]);
			}
			break;
		}
	}

	return 0;
}