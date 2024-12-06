#include "main.h"
#include <stdarg.h>
/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", _print_chr},
		{"s", _print_str},
		{"x", _print_hxs},
		{"X", _print_hxl},
		{"o", _print_oct},
		{"d", _print_num},
		{"i", _print_num},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
