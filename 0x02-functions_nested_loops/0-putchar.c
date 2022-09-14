#include "main.h"

/**
 * main - program that prints
 *
 * Description: using main function
 * Return: always successful
 */

int main(void)
{
	char _putchar[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(_putchar); c++)
	{
		_putchar(_putchar[c]);
	}
	
	_putchar('\n');
	
	return (0);
}
