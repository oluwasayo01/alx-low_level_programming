#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - alphabet code
 * @n: The character to print
 *
 * Return: 1 if true 0 if false
 */

int print_sign(int n)

{
if (n > 0)
{
	_putchar('+');
	return (1);
}
if (n == 0)
{
	_putchar('0');
	return (0);
}

_putchar('-');
return (-1);
}
