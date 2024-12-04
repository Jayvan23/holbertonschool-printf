#include "main.h"
#include <stdarg.h>
/**
 * _print_str - prints a string of characters
 * @args: arguments to print
 * Return: void.
 */
void _print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	va_end(args);
}
