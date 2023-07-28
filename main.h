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






/* Functions handle other specifiers */
int handle_flags(const char *format, int *p);
int handle_width(const char *format, int *p, va_list list);
int handle_precision(const char *format, int *p, va_list list);
int handle_length(const char *format, int *p);



#endif /* MAIN_H */
