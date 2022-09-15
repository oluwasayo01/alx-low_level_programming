#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - alphabet code
 * @a: first integer
 *
 * Return: product of a and b
 */

void print_square(int a)
{
	if (a > 0)
	{
		int n = a;

		while (a)
		{
		int j;

		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		a--;
		_putchar('\n');
		}
	} else
		_putchar('\n');
}
