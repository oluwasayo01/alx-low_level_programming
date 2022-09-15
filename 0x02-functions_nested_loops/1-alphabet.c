#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - alphabet code
 *
 * Return: None
 */
void print_alphabet(void)
{
int a = 97;
int z = a + 26;
while (a < z)
{
_putchar(a);
a++;
}
_putchar('\n');
}
