#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - alphabet code
 *
 * Return: void
 */

void more_numbers(void)

{
int i = 0;

while (i < 10)
{
	int a = 0;
	int z = 15;

	while (a < z)
	{
		if (a > 9)
			_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	a++;
	}
_putchar('\n');
i++;
}
}
