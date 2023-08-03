#include <stdarg.h>
#include <unistd.h>
<<<<<<< HEAD

<<<<<<< HEAD

/**
 * _printf - format data to standard output
 * @format: pointer to format string
 * @...: variable number of arguments passed
 * Return: Printed characters.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0;
	int printed_chars = 0;
	va_list list;
	char buffer[BUFF_SIZE];
int _puts(char *str);
=======
#include <string.h>
#include "main.h"
>>>>>>> 57c91e2040f7858b42cbd6dc883b81ff145fd407

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
<<<<<<< HEAD
	char c;
=======
	char ch;
>>>>>>> 57c91e2040f7858b42cbd6dc883b81ff145fd407

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
<<<<<<< HEAD
			printed_chars++;
		}
		else
		{
			if (printed == -1)
				return (-1);
			printed_chars += printed;
=======
>>>>>>> 57c91e2040f7858b42cbd6dc883b81ff145fd407
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
