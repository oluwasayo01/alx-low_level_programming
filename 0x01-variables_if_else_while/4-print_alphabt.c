#include <stdio.h>

/**
 * main - ENtrypoint
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
{
char letter = (char) start;
if (letter != 'e' && letter != 'q')
	putchar(start);
}
putchar('\n');
return (0);
}
