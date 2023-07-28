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

	index++;
	if (format[index] == '*')
	{
		index++;
		precision = va_arg(list, int);
	}
	else
	{
		for (; format[index] != '\0'; index++)
		{
			if (format[index] >= '0' && format[index] <= '9')
			{
				precision = precision == -1 ? 0 : precision;
				precision = precision * 10 + (format[index] - '0');
			}
			else
				break;
		}
	}

	*p = index - 1;
	return (precision);
}
