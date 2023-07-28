#include <stdarg.h>
#include <unistd.h>

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
=======
int _puts(char *str);

/**
 * _printf - produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed (excluding the null byte used to)
 * end putput to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;
>>>>>>> fff3543885ce8b0b73f5fad012c0855c45d26a33

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
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					write(1, &c, 1);
					count++;
					break;
				case 's':
					count += _puts(va_arg(args, char *));
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
>>>>>>> fff3543885ce8b0b73f5fad012c0855c45d26a33
		}
		format++;
	}
<<<<<<< HEAD

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer- Prints the contents of the buffer.
 * @buffer: Array of characters
 * @buff_index: Index at which to add next character
 */

void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
		write(1, &buffer[0], *buff_index);

	*buff_index = 0;
}

/*By nancykibara and melkiphilipo */
=======
	va_end(args);
	return (count);
}

/**
 * _puts - writes a string to the standard output
 * @str: string to write
 *
 * Return: the number of characters written
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		write(1, str++, 1);
		count++;
	}
	return (count);
}
>>>>>>> fff3543885ce8b0b73f5fad012c0855c45d26a33
