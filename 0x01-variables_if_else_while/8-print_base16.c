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
int end = 16;
while (start < end)
{
if (start < 10)
{
putchar(start + '0');
}
else
{
putchar(start + 87);
}
start++;
}
putchar('\n');
return (0);
}
