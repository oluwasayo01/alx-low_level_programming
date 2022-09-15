#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - alphabet code
 * @a: first integer
 *
 * Return: product of a and b
 */

void print_diagonal(int a)
{
	if (a > 0)
	{
		int n = a;

		while (a)
		{
		int i, j;

		i = n - a;
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');

			} else
				_putchar(' ');
		}
		a--;
		_putchar('\n');
		}
	} else
		_putchar('\n');
}
