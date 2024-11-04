#ifndef TOKENS_H
#define TOKENS_H

// a table of all tokens (obviously)
extern char* tokens[];

/*
	@param type: token type, char *tokens
	@param value: token value, idk, return none if no value
*/
char* return_token(char* type, char* value);

#endif