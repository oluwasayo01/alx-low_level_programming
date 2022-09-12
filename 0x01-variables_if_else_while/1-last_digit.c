#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entypoint to function
 *
 * Return: 0 (Always)
 *
 */

int main(void)
{
int n;
int remainder;
srand(time(0));
n = rand() - RAND_MAX / 2;
remainder = abs(n) % 10;
if (n < 0)
	remainder = (-1) * remainder;
if (remainder > 5)
	printf("Last digit of %d is %d and is greater than 5", n, remainder);
if (remainder == 0)
	printf("Last digit of %d is %d and is 0", n, remainder);
if (remainder < 6 && remainder != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0", n, remainder);
putchar('\n');
return (0);
}
