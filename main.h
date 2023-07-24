#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>


#define S_LONG
#define S_SHORT


int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);


/* other specifiers */
int handle_width(const char *format, int *p, va_list list);
int handle_precision(const char *format, int *p, va_list list);

#endif /* MAIN_H */

