#include <stdlib.h>
#include <string.h>

/**
 * leet - string compare function
 * @str: destination string
 *
 * Return: void
 *
 */
char *leet(char *str)
{
int i = 0;
int j;
char encodings[8] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};

while (str[i])
{
j = 0;
while (j <= 7)
{
if (str[i] == encodings[j] || str[i] - 32 == encodings[j])
	str[i] = j + '0';
j++;
}
i++;
}
return (str);
}
