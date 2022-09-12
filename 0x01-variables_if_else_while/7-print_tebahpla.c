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
int start = 96;
int interval = 26;
int end = start + interval;
for (; start < end; end--)
	putchar(end);
putchar('\n');
return (0);
}
