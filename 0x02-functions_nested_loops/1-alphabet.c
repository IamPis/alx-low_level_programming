#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: always successful
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
