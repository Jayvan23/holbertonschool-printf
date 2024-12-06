#include "main.h"
#include <stdarg.h>
/**
 * _print_str - prints a string of characters
 * @args: arguments to print
 * Return: length of output.
 */
int _print_str(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		_putchar((char)*str);
		str++;
		len++;
	}
	return (len);
}
