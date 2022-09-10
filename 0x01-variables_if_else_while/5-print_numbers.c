#include <stdio.h>

/**
 * main -  prints all single digit numbers
 *
 * Description: using main function
 * Return: always successful
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
