#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);

#endif /* MAIN_H */
