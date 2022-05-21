#ifndef MAIN_H

#define MAIN_H

#include <unistd.h>

#include <stdarg.h>

#include <stdlib.h>

/**
 * struct sp - special characters
 * @sc: special character
 * @f: function
 */

typedef struct sp

{

	char sc;

	int (*f)(va_list *);

} sp;

int _printf(const char *format, ...);

int print_c(va_list *);

int print_s(va_list *);

int (*get_f(char))(va_list *);
int print_i(va_list i);
int print_d(va_list d);

#endif
