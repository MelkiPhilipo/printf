#include "main.h"

#define S_LONG 2
#define S_SHORT 1

/**
 * handle_length- calculate length of argument
 * @format: print argument of formatted string
 * @p: pointer to inetrger indicating current position
 * Return: calculated length
 */

int handle_length(const char *format, int *p)
{
	int size = 0;

	if (format[*p + 1] == 'l')
		size = S_LONG;
	else if (format[*p + 1] == 'h')
		size = S_SHORT;
	else
		return (-1);

	*p += 1;

	return (size);

}
