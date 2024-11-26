#include "main.h"
#include <stdarg.h>
/**
 * _printf - Prints data to the console
 * @mod: first parameter
 * @...: all parameters
 * Return: length of the output.
 */
int _printf(char *mod, ...)
{
	va_list args;
	int i = 0, j = 0;
	int len = 0;
	print_type types[] = {
		{"c", _print_chr},
		{"s", _print_str},
		{"d", _print_num},
		{"i", _print_num},
		{NULL, NULL}
	};

	va_start(args, mod);
	while (mod[i])
	{
		if (mod[i] == '%' && mod[i + 1] != '\0')
		{
			j = 0;
			while (types[j].type)
			{
				if (mod[i + 1] == *types[j].type)
				{
					types[j].f(args);
					i++;
					len++;
					break;
				}
				j++;
			}
			if (types[j].type == NULL)
			{
				_putchar(mod[i]);
				len++;
			}
		}
		else
		{
			_putchar(mod[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
