#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - alphabet code
 * @a: first integer
 *
 * Return: product of a and b
 */

void print_line(int a)
{
if (a > 0)
{
while (a > 0)
{
_putchar('_');
a--;
}
}
_putchar('\n');

}
