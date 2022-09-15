#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - alphabet code
 *
 * Return: void
 */

void print_most_numbers(void)

{

int start = 0;
int end = 10;
while (start < end)
{
if (start != 2 && start != 4)
_putchar(start + '0');
start++;
}
putchar('\n');
}
