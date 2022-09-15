#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - alphabet code
 *
 * Return: void
 */

void print_numbers(void)

{

int start = 0;
int end = 10;
while (start < end)
{
_putchar(start + '0');
start++;
}
putchar('\n');
}
