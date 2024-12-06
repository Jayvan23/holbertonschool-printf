#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - Prints data to the console
 * @format: first parameter
 * @...: all parameters
 * Return: length of the output.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, len = 0, find;
	print_type types[] = {
		{"c", _print_chr}, {"s", _print_str}, {"d", _print_num}, {"i", _print_num},
		{"X", _print_hxl}, {"x", _print_hxs}, {"o", _print_oct}, {NULL, NULL} };

	if (format == NULL)
		return (-1);

	va_start(args, format);

	len = 0;

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
				continue;
			find = 0;

			for (j = 0; j < 6; j++)
			{
				if (format[i + 1] == *types[j].type)
				{
					len += types[j].f(args);
					find = 1;
					format++;
					break;
				}
			}

			if (find != 1)
			{
				if (*(format + i + 1) == '%')
				{
					len += write(1, "%", 1);
					format++;
				}
				else
					len += write(1, (format + i), 1);
			}

		}
		else
		{
			len += write(1, (format + i), 1);
		}
	}
	va_end(args);
	return (len);
}
