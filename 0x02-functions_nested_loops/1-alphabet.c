#include <main.h>

/**
 * main -  prints the alphabet, in lowercase
 *
 * Description: using main function
 * Return: always successful
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
