#ifndef TOKENS_H
#define TOKENS_H

typedef enum
{
	TOKEN_KEYWORD,
	TOKEN_IDENTIFIER,
	TOKEN_DATATYPE,
	TOKEN_NUMBER,
	TOKEN_OPERATOR,
	TOKEN_EOL,
	TOKEN_EOF
} TokenType;

typedef struct
{
	TokenType type;
	char value[64];
} Token;

void return_token(Token token, char *output, int max_length);

#endif