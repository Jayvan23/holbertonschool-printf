#ifndef Main_H
#define Main_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - prints anything
 * @type: type specifier
 * @f: function to execute
 */
struct print
{
	char *valid;
	int (*f)(va_list args);
};
int _printf(const char *format, ...);
int _print_chr(va_list args);
int _print_num(va_list args);
int _print_str(va_list args);
int _putchar(char c);
int _print_hxs(va_list args);
int _print_hxl(va_list args);
int _print_oct(va_list args);
int (*get_func(char x))(va_list);
typedef struct print spec;
#endif
