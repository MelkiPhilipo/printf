#include "main.h"

#define S_LONG
#define S_SHORT

/**
 * handle_length- calculate length of argument
 * @format: print argument of formatted string
 * @p: pointer to inetrger indicating current position
 * Return: calculated length
 */

int handle_length(const char *format, int *p)
{
	int _length = 0;
	int index = 0;

	if (format[*index + 1] == l)
		size = S_LONG

	else if (format[*index + 1] == 1)
		size = S_SHORT

	else
	{
		return (-1);
	}

	*p = index - 1;

	return (-1);

}



