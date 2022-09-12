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
int interval = 26;
int end = start + interval;
for (; start < end; start++)
	putchar(start);
start = 65;
end = start + interval;
for (; start < end; start++)
	putchar(start);
putchar('\n');
return (0);
}
