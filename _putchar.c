#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - Prints a character
 * @c: Parameter to evaluate
 * Return: A single character.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
