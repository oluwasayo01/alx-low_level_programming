#include <stdlib.h>
#include <string.h>

/**
 * string_toupper - string compare function
 * @str: destination string
 *
 * Return: void
 *
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
i++;
}
return (str);
}
