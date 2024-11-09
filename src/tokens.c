#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/tokens.h"

void return_token(Token token, char *output)
{
	switch (token.type)
	{
		case TOKEN_IDENTIFIER:
			sprintf(output, "IDENTIFIER:%s", token.value);
			break;
		case TOKEN_NUMBER:
			sprintf(output, "NUMBER:%s", token.value);
			break;
		case TOKEN_OPERATOR:
			sprintf(output, "OPERATOR:%s", token.value);
			break;
		case TOKEN_END:
			sprintf(output, "END_OF_INPUT");
			break;
		default:
			sprintf(output, "UNKNOWN");
			break;
	}
}