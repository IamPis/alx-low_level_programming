#include "main.h"

/**
 * main - prints 10 times the alphabet
 *
 * Description: using main function
 * Return: always successful
 */
 void print_alphabet_x10(void)
{
	int n, co;
	co = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
