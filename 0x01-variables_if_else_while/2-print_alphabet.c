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
int start = 97;
int end = start + 26;
for (; start < end; start++)
	putchar(start);
putchar('\n');
return (0);
}
