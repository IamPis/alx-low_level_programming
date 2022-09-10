#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints number if positive, negative or zero
 *
 * Description: using the main function
 * Return: Always when successful
 */
int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* code */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
