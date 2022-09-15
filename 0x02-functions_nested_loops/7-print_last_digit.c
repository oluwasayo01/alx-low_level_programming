#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - alphabet code
 * @n: The character to print
 *
 * Return: 1 if true 0 if false
 */

int print_last_digit(int n)

{
long int a = abs(n);
long int b = a % 10;

_putchar('0' + b);
return (b);
}
