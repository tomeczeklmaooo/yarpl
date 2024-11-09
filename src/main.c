#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/shell.h"
#include "include/lexer.h"
#include "include/tokens.h"

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
			char file_content[32768]; // idk why 32768 bytes
			
			Token token;
			char output[1024] = "";
			char token_string[80];

			if (fptr != NULL)
			{
				printf("yarpl interpreter v0.1\n");
				while (fgets(file_content, 32768, fptr))
				{
					// this just so we can pass the input to get_next_token()
					const char *input_ptr = file_content;
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
			else
			{
				printf("Unable to open file: %s\n", argv[1]);
			}
			fclose(fptr);
			break;
		}
	}

	return 0;
}