#include "main.h"
#include <stdarg.h>

void print_unsigned(unsigned int n);
void print_octal(unsigned int n);
void print_hex(unsigned int n, int uppercase);

/**
 * print_formatted - prints formatted output
 * @format: format string
 */
void print_formatted(char *format, ...)
{
	va_list args;
	char *p;

	va_start(args, format);

	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			continue;
		}

		switch (*++p)
		{
			case 'u':
				print_unsigned(va_arg(args, unsigned int));
				break;
			case 'o':
				print_octal(va_arg(args, unsigned int));
				break;
			case 'x':
				print_hex(va_arg(args, unsigned int), 0);
				break;
			case 'X':
				print_hex(va_arg(args, unsigned int), 1);
				break;
			default:
				_putchar(*p);
				break;
		}
	}

	va_end(args);
}

/**
 * print_unsigned - prints an unsigned integer
 * @n: number to print
 */
void print_unsigned(unsigned int n)
{
	if (n / 10)
		print_unsigned(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_octal - prints an unsigned integer in octal
 * @n: number to print
 */
void print_octal(unsigned int n)
{
	if (n / 8)
		print_octal(n / 8);
	_putchar(n % 8 + '0');
}

/**
 * print_hex - prints an unsigned integer in hexadecimal
 * @n: number to print
 * @uppercase: whether to use uppercase letters
 */
void print_hex(unsigned int n, int uppercase)
{
	if (n / 16)
		print_hex(n / 16, uppercase);
	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else if (uppercase)
		_putchar(n % 16 - 10 + 'A');
	else
		_putchar(n % 16 - 10 + 'a');
}
