#ifndef TOKENS_H
#define TOKENS_H

// a table of all tokens (obviously)
char *tokens[] = {
	"INT",
	"FLOAT",
	"PLUS",
	"MINUS",
	"MUL",
	"DIV",
	"LPAREN",
	"RPAREN"
};

/*
	@param type: token type, char *tokens
	@param value: token value, idk, return none if no value
*/
char* return_token(char type, char value);

#endif