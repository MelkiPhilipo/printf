#include "main.h"

/**
 * handle_width- calculate the width
 * @format: a pointer to formatted string to print argument
 * @p: pointer to represent current position in the format string
 * list: list of arguments passed
 * Return: calculated width
 */

int handle_width(const char *format, int *p, va_list list)
{
	int index;
	int width = 0;

	for (index *p + 1; format[index] != '\0'; index ++)
	{

	if (_digit(format[index]))
	{
		width = width * 10 + (format[index] - '0')
	}
	else if (format[index] = (*))
	{
		index ++;
		width = va_arg(list, int);
		break;
	}
	else
	{
		return (-1);
	}
	if (width < 0)
	{
		return (-1);
	}
	

	*p = index - 1;

	return (-1);
	}
}




