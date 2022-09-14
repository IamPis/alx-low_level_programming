#include <main.c>

/**
 * main -  prints the alphabet, in lowercase
 *
 * Description: using main function
 * Return: always successful
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
