#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

/**
 * handle_format_specifier - handle format specifiers
 * @format: format character string
 * @i: index of current character in format string
 * @args: variable argument list
 * @buffer: buffer to store characters
 * @buffer_index: index of next available position in buffer
 *
 * Return: new value of buffer_index
 */
int handle_format_specifier(const char *format, int i, va_list args,
		char *buffer, int buffer_index)
{
	switch (format[i])
	{
		case 'c':
			buffer[buffer_index++] = (char)va_arg(args, int);
			break;
		case 's':
			/* nandle string format specifier */
			break;
		case 'd':
		case 'i':
			/* handle integer format specifier */
			break;
		default:
			buffer[buffer_index++] = format[i];
			break;
	}
	return (buffer_index);
}


/**
 * _printf - produces output according to a format
 * @format: format character string
 *
 * Description: This function takes a format string and a variable number of
 * argument, and produces output according to the format. The format string
 * can cotain format specifiers, which are introduced by the '%' character.
 * This implementation currently supports the '%c' format specifier for
 * character, and has placeholders for handling the '%s' and '%d' or '%i'
 * format specifier for strings and integers, respectively.
 *
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */
int _printf(const char *format, ...)
{
	char buffer[BUFFER_SIZE];
	int i, buffer_index = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (buffer_index == BUFFER_SIZE - 1)
		{
			write(1, buffer, buffer_index);
			buffer_index = 0;
		}
		if (format[i] == '%')
		{
			i++;
			buffer_index = handle_format_specifier(format, i, args,
					buffer, buffer_index);
		}
		else
		{
			buffer[buffer_index++] = format[i];
		}
	}
	write(1, buffer, buffer_index);
	va_end(args);
	return (0);
}
