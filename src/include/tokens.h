#ifndef TOKENS_H
#define TOKENS_H

enum token_type {
	// single character tokens
	LPAREN, RPAREN, LBRACE, RBRACE,
	COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

	// one or two character tokens
	AND, OR,
	NOT, NOT_EQUAL,
	EQUAL, EQUAL_EQUAL,
	GREATER, GREATER_EQUAL,
	LESS, LESS_EQUAL,

	// literals
	IDENTIFIER, STRING, NUMBER,

	// keywords
	PRINT, DECL, SET, SCAN, INC, FOR, IF, ELIF,
	ELSE, SWAP, CONV, RET, CONTINUE, FUNC, END, BREAK,

	EOF
};

#endif