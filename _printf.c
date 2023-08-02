#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char ch;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ch = (char)va_arg(args, int);
					write(1, &ch, 1), count++;
					break;
				case 's':
					count += write(1, va_arg(args, char *), strlen(va_arg(args, char *)));
					break;
				case '%':
					write(1, "%", 1), count++;
					break;
			}
		}
		else
			write(1, format, 1), count++;
				format++;
	}
	va_end(args);
	return (count);
}
