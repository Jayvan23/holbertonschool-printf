#include "main.h"
#include <stdarg.h>
#include <limits.h>
/**
 * _print_num - prints numbers
 * @args: number/s to print
 * Return: length of output.
 */
int _print_num(va_list args)
{
	int num = va_arg(args, int);
	int len = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		len = 1;
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		len = 1;
	}
	if (num == 0)
	{
		_putchar('0');
		len = 1;
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
		len = 1;
	}
	return (len);
}
