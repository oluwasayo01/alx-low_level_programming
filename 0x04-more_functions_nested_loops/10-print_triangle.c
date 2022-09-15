#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - alphabet code
 * @a: first integer
 *
 * Return: product of a and b
 */

void print_triangle(int a)
{
	if (a > 0)
	{
		int n = a;

		while (a)
		{
		int j;

		for (j = 1; j <= n; j++)
		{
			if (j > (a - 1))
			{
				_putchar('#');

			} else
				_putchar(' ');
		}
		a--;
		_putchar('\n');
		}
	} else
		_putchar('\n');
}
