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
(
        char *type;
        void (*f)(va_list args);
};
int _printf(const char *format, ...);
void _print_chr(va_list args);
void _print_num(va_list args);
void _print_str(va_list args);
int _putchar(char c);
void _print_hxs(va_list args);
void _print_hxl(va_list args);
void _print_oct(va_list args);
#endif
