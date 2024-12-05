#include "main.h"
#include <stdarg.h>
#include <limits.h>
/**
 * _print_oct - converts and prints from dec to octal
 * @args: number to convert
 * Return: length of output.
 */
int _print_oct(va_list args)
{
	unsigned int num = va_arg(args, int);
	char str[32];
	int i = 0, j;
	int len = 0;

	if (num == 0)
	{
		_putchar('0');
		len = 1;
		return (len);
	}
	while (num > 0)
	{
		int remainder = num % 8;

		if (remainder < 10)
		{
			str[i++] = remainder + '0';
		}
		num /= 8;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	len = 1;
	return (len);
}
