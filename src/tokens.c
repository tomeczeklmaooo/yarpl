#include <stdio.h>
#include <stdlib.h>

#include "include/tokens.h"

char* tokens[] = {
	"INT",
	"FLOAT",
	"PLUS",
	"MINUS",
	"MUL",
	"DIV",
	"LPAREN",
	"RPAREN"
};

char* return_token(char* type, char* value)
{
	char* token = (char*)malloc(255 * sizeof(char));
	if (value == NULL) sprintf(token, "%s", type);
	else sprintf(token, "%s:%s", type, value);
	return token;
}