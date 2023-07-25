#include "main.h"

/**
 * handle_precision- calculates the number of digits after the decimal.
 * @format: prints argument of formatted string
 * @p: pointer to interger indicates current position
 * @list: list of arguments passed.
 * Return: calculates precisions
 */

int handle_precision(const char *format, int *p, va_list list)
{
	int index = *p + 1;
	int precision = -1;

	if (format[index] != '.')
	return (precision);

	for (index += 1; format[index] != '\0'; index++)
	{
		if (_isdigit(format[index]))
		{
			precision = precision * 10 + (format[index] - '0');
		}
		else if (format[index] == (*))
		{
			index++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			return (-1);
		}

		if (precision < -1)
			return (-1);
		*p = index - 1;
		return
			(width);
	}
}
