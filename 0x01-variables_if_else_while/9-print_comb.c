#include <stdio.h>

/**
 * main - Entrypoint
 *
 *
 * Return: 0 (Always)
 *
 */

int main(void)
{
int start = 0;
int end = 10;
while (start < end)
{
putchar(start + '0');
if (start < 9)
{
putchar(',');
putchar(' ');
}
start++;
}
putchar('\n');
return (0);
}
