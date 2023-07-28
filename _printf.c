#include "main.h"


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

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printed_chars++;
		}
		else
		{
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

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
