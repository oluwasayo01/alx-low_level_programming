#include <stdio.h>
#include "main.h"
/**
 * main - Entrypoint
 *
 * Return: 0 (Always)
 *
 */

int main(void)
{
char *source = "_putchar";
int i = 0;
while (source[i] != '\0')
{
_putchar(source[i]);
i++;
}
_putchar('\n');
return (0);
}
