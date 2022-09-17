#include <stdlib.h>
#include <string.h>

/**
 * _strncpy - string cpy function
 * @dest: destination string
 * @src: source string
 * @n: character to copy to
 *
 * Return: void
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
