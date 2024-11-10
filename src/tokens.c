#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/tokens.h"

void return_token(Token token, char *output, int max_length)
{
	switch (token.type)
	{
		case TOKEN_IDENTIFIER:
			snprintf(output, max_length, "IDENTIFIER:%s", token.value);
			break;
		case TOKEN_NUMBER:
			snprintf(output, max_length, "NUMBER:%s", token.value);
			break;
		case TOKEN_OPERATOR:
			snprintf(output, max_length, "OPERATOR:%s", token.value);
			break;
		case TOKEN_EOL:
			snprintf(output, max_length, "EOL");
			break;
		case TOKEN_EOF:
			snprintf(output, max_length, "EOF");
			break;
		default:
			snprintf(output, max_length, "UNKNOWN");
			break;
	}
}