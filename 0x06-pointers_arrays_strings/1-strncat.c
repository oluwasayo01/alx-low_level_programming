#include <stdlib.h>
#include <string.h>

/**
 * _strncat - string concatenation function
 * @dest: destination string
 * @src: source string
 * @n: integer for characters
 *
 * Return: void
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
