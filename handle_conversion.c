#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - prints an unsigned int in binary
 * @n: unsigned int to print
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	char buffer[33];
	char *ptr = &buffer [32];
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	*ptr = '\0';
	while (n > 0)
	{
		ptr--;
		*ptr = (n % 2) + '0';
		n /= 2;
		count++;
	}

	while(*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}

	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'b':
					count += print_binary(va_arg(args, unsigned int));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);

	return (count);
}
