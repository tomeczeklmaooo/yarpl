#include <string.h>
#include <ctype.h>
#include <stdio.h>

#include "include/lexer.h"
#include "include/tokens.h"
#include "include/keywords.h"
#include "include/datatypes.h"

Token get_next_token(const char **input)
{
	// if space: go to next char
	while (isspace(**input))
	{
		(*input)++;
	}

	// return TOKEN_EOL on end of line
	if (**input == '\0') return (Token){TOKEN_EOL, ""};

	// parse identifier
	if (isalpha(**input))
	{
		Token token = {TOKEN_IDENTIFIER, ""};
		int i = 0;
		while (isalpha(**input) || isdigit(**input))
		{
			token.value[i++] = *(*input)++;
		}
		token.value[i] = '\0';

		// check if identifier is a keyword
		if (is_keyword(token.value)) token.type = TOKEN_KEYWORD;
		if (is_datatype(token.value)) token.type = TOKEN_DATATYPE;
		return token;
	}

	// parse number
	if (isdigit(**input))
	{
		Token token = {TOKEN_NUMBER, ""};
		int i = 0;
		while (isdigit(**input))
		{
			token.value[i++] = *(*input)++;
		}
		token.value[i] = '\0';
		return token;
	}

	// parse operators (single char for now)
	if (strchr("+-*/=", **input))
	{
		Token token = {TOKEN_OPERATOR, ""};
		token.value[0] = *(*input)++;
		token.value[1] = '\0';
		return token;
	}

	// skip if unknown token
	(*input)++;
	return get_next_token(input);
}