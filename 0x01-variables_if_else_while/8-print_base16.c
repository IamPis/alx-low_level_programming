#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using main function
 * Return: always successful
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
