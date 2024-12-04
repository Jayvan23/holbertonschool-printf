#include "main.h"
#include <stdarg.h>
#include <limits.h>
/**
 * _print_num - prints numbers
 * @args: number/s to print
 * Return: void.
 */
void _print_num(va_list args)
{
	int num = va_arg(args, int);

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		char buffer[10];
		int i = 0;

		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num /= 10;
		}
		while (i-- > 0)
		{
			_putchar(buffer[i]);
		}
	}
}
