#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

/**
 * handle_char_specifier - handles %c format specifiers
 * @args: variable argument list
 * @buffer: buffer to store characters
 * @buffer_index: index of next available position in buffer
 *
 * Return: new value of buffer_index
 */
int handle_char_specifier(va_list args, char *buffer, int
		buffer_index)
{
	buffer[buffer_index++] = (char)va_arg(args, int);
	return (buffer_index);
}

/**
 * handle_string_specifier - handles %s format specifier
 * @args: variable argument list
 * @buffer: buffer to store characters
 * @buffer_index: index of next available position in buffer
 *
 * Return: new value of buffer_index
 */
int handle_string_specifier(va_list args, char *buffer, int buffer_index)
{
	char *str;
	int j;

	str = va_arg(args, char *);
	for (j = 0; str[j] != '\0'; j++)
	{
		buffer[buffer_index++] = str[j];
	}
	return (buffer_index);
}

/**
 * handle_S_specifier - handles %S format specifier
 * @args: variable argument list
 * @buffer: buffer to store characters
 * @buffer_index: index of next available position in buffer
 *
 * Return: new value of buffer_index
 */
int handle_S_specifier(va_list args, char *buffer, int buffer_index)
{
	char *str;
	int j;

	str = va_arg(args, char *);
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] > 0 && str[j] < 32)
		{
			buffer[buffer_index++] = '\\';
			buffer[buffer_index++] = 'x';
			buffer[buffer_index++] = "0123456789ABCDEF"[str[j] / 16];
			buffer[buffer_index++] = "0123456789ABCDEF"[str[j] % 16];
		}
		else
		{
			buffer[buffer_index++] = str[j];
		}
	}
	return (buffer_index);
}

/**
 * handle_format_specifier - handles %s format specifiers
 * @format: format character string
 * @i: index for current character in format string
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
			buffer_index = handle_char_specifier(args, buffer, buffer_index);
			break;
		case 's':
			buffer_index = handle_char_specifier(args, buffer, buffer_index);
			break;
		case 'S':
			buffer_index = handle_char_specifier(args, buffer, buffer_index);
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
 * arguments, and produces output according to the format. The format string
 * can contain format specifiers, which are introduced by the '%' character.
 * This implementation currently supports the '%c' format specifier for
 * characters, and has placeholders for handling the '%s' and '%d' or '%i'
 * format specifiers for strings and integers, respectively.
 *
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
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
