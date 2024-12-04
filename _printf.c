#include "main.h"
#include <stdarg.h>
/**
 * _printf - Prints data to the console
 * @format: first parameter
 * @...: all parameters
 * Return: length of the output.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, len = 0;
	print_type types[] = {
		{"c", _print_chr}, {"s", _print_str}, {"d", _print_num}, {"i", _print_num},
		{"X", _print_hxl}, {"x", _print_hxs}, {"o", _print_oct}, {NULL, NULL} };

	/*printf("%d\n", len);*/
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				len++;
			}
			else
			{
				j = 0;
				while (types[j].type)
				{
					if (format[i + 1] == *types[j].type)
					{
						types[j].f(args);
						i++;
						len++;
						break;
					} j++;
				}
				if (types[j].type == NULL)
				{
					_putchar(format[i]);
					len++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	/*printf("%d\n", len);*/
	return (len);
}
