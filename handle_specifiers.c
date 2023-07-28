#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_int - prints an integer
 * @n: integer to print
 */
void print_int(int n)
{
	printf("%d", n);
}

/**
 * handle_specifiers - handles conversion specifiers
 * @format: format string
 * @args: variable argument list
 */
void handle_specifiers(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
				case 'i':
					print_int(va_arg(args, int));
					break;
				default:
					break;
			}
		}
		else
		{
			putchar(format[i]);
		}
	}

	va_end(args);

}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int x = 5;

	handle_specifiers("x = %d\n", x);
	return (0);
}
