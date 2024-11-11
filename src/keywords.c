#include <string.h>
#include <stdbool.h>

#include "include/keywords.h"

const char *keywords[16] = {
	"print",
	"decl",
	"set",
	"scan",
	"inc",
	"for",
	"if",
	"elif",
	"else",
	"swap",
	"conv",
	"ret",
	"continue",
	"func",
	"end",
	"break"
};

bool is_keyword(const char *str)
{
	for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++)
	{
		if (strcmp(str, keywords[i]) == 0)
		{
			return true;
		}
	}
	return false;
}