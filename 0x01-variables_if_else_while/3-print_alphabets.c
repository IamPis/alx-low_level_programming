#include <stdio.h>

/**
 * main - lowercase, and then in uppercase
 *
 * Description: using the main function
 * Return: Always when successful
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
