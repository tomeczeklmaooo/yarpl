#include <string.h>
#include <stdbool.h>

#include "include/datatypes.h"

const char *datatypes[5] = {
	"int",
	"float",
	"bool",
	"string",
	"char"
};

bool is_datatype(const char *str)
{
	for (int i = 0; i < sizeof(datatypes) / sizeof(datatypes[0]); i++)
	{
		if (strcmp(str, datatypes[i]) == 0)
		{
			return true;
		}
	}
	return false;
}