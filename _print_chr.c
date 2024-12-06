#include "main.h"
#include <stdarg.h>
/**
 * _print_chr - prints a character
 * @args: argument to print
 * Return: length of output.
 */
int _print_chr(va_list args)
{
	int chr;
	int len = 0;

	chr = va_arg(args, int);
	if (chr == '\0')
	{
		return (0);
	}
	if (chr)
	{
		_putchar(chr);
		len++;
	}
	return (len);
}
