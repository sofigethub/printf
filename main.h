#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct ar - Struct ar
 *
 * @ar: The operator
 * @f: The function associated
 */
typedef struct ar
{
	char *ar;
	int (*f)(va_list);
}
ar_t;

int _putchar(char a);
int _printf(const char *format, ...);
int ar_c(va_list ar_l);
int ar_s(va_list ar_l);
int ar_mod(va_list ar_l);
int ar_d(va_list ar_l);
#endif
