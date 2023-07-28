#include "main.h"

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);

//PRINT CHARARACTER //

/**
 * _print_char - Prints a character
 * @lists: List of arguments passed
 * Return: Number of characters printed
 */

int _print_char(va_list lists)
{
	char c = va_arg(lists, int);
	char c = (char)ch;

	return (write(1, &c, 1));
}

/** PRINT STRING **/
/**
 * _printstring - Prints a string
 * @list: List of arguments to be passed
 * Return: Number of chars printed
 */

int print_string(va_list list)
{
	int length = 0;
	char *str = va_arg(lists, char *);

	if (str == NULL)
	{
		str = "(null)";

		if (precision >= 6)
		str = " ";
	}

	while (str[length] != '\0')
		length++;

	return (write(1, str, length));
}
/** PRINT PERCENT SIGN **/
/**
 * _printpercent - Prints a percent sign
 * @list: List a of arguments to be passed
 * Return: Number of characters printed
 */

int _printpercent(va_list lists)
{

	return (write(1, "%%", 1));
}

// PRINT INTEGER //
/**
 * _printint - Print int
 * @list: List a of arguments
 * Return: Number of chars printed
 */
int _printint(va_list list)
{
	int n = va_arg(list, int);
	int i = 0;
	char buffer[20];

	if (n == 0)
	{
		buffer[i++] = '0';
	}
         } else {
        if (n < 0) {
            buffer[length++] = '-';
            n = -n;
        }

        while (n > 0) {
            buffer[length++] = '0' + (n % 10);
            n /= 10;
      }
	 buffer[length] = '\0';
        }
    
	return (write(1, buffer,length));
}

/** PRINT BINARY **/
/**
 * _print_binary - Prints an unsigned number
 * @list:list of arguments to be passed
 * Return: Number of characters  printed
 */
int _print_binary(va_list lists)
{
	unsigned int num = va_arg(list, unsigned int);
	char buffer[87];
	int length = 0;
        do {
        buffer[length++] = '0' + (num & 1);
        num >>= 1;
	}
	while (num > 0);

	 buffer[length] = '\0';
	
	return (write(1, buffer, length)
}  

/*by nancykibara and melkiphilipo*/
