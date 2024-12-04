#include "main.h"
#include <stdarg.h>
/**
 * _print_chr - prints a character
 * @args: argument to print
 * Return: void.
 */
void _print_chr(va_list args)
{
	int chr;

	chr = va_arg(args, int);
	if (chr)
	{
		_putchar(chr);
	}
}
