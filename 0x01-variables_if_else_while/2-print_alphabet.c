#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Description: using the main function
 * Return: always when successful
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);

putchar('\n');
return (0);
}
