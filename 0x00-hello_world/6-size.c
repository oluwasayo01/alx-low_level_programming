#include <stdio.h>

/**
 * main - print sizes of different data types
 *
 * Return: 0 (Always)
 *
 */


int main(void)
{
int intType;
char charType;
float floatType;
long int longIntType;
long long int longLongIntType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);

}

