#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - alphabet code
 *
 * Return: None
 */

void print_alphabet_x10(void)

{
int i = 0;

while (i < 10)
{
	int a = 97;
	int z = a + 26;

	while (a < z)
	{
	_putchar(a);
	a++;
	}
_putchar('\n');
i++;
}

}
