#include "main.h"
#include <stdarg.h>
#include <limits.h>
/**
 * _print_hxl - converts and prints from dec to hex
 * @args: number to convert
 * Return: void.
 */
void _print_hxl(va_list args)
{
	unsigned int num = va_arg(args, int);
	char str[32];
	int i = 0, j;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			str[i++] = remainder + '0';
		}
		else
		{
			str[i++] = (remainder - 10) + 'A';
		}
		num /= 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
}
