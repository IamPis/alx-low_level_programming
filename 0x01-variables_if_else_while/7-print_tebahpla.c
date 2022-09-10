#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: using main function
 * Return: always successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
