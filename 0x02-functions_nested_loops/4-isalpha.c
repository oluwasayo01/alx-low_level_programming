#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - alphabet code
 * @c: The character to print
 *
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)

{
if (isalpha(c))
	return (1);
return (0);

}
