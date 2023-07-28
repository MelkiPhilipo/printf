#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 
#define F_PL


<<<<<<< HEAD




/* Functions handle other specifiers */
int handle_flags(const char *format, int *p);
int handle_width(const char *format, int *p, va_list list);
int handle_precision(const char *format, int *p, va_list list);
int handle_length(const char *format, int *p);


=======
/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
typedef struct fmt fmt_t;

/**
 * handle_print - handles printing of different types according to format
 * @fmt: the format string
 * @i: pointer to the current position in the format string
 * @list: list of arguments passed to _printf
 * @buffer: buffer to store the output
 * @flags: flags to modify the output
 * @width: minimum number of characters to print
 * @precision: maximum number of characters to print for some types
 * @size: length modifier for some types
 * Return: number of characters printed or -1 on error
 */
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
		va_list list, char buffer[], int flags, int width, int precision, int size);
/****************** FUNCTIONS ******************/

/* Functions to print chars and strings */
int _puts(char *str);
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Functions to print numbers */
void print_int(int n);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int handle_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
void print_int(int n);
void handle_specifiers(const char *format, ...);

/*Function to print string in reverse */
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print a string in rot 13 */
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
		int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
		int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
>>>>>>> fff3543885ce8b0b73f5fad012c0855c45d26a33

#endif /* MAIN_H */
