#include "main.h"

/**
 * prints 10 times the numbers
 * _putchar only thrice
 * Return: 0 to 14, followed by a new line
 */
void more_numbers(void)
{

	int i, ro;

	for (ro = 0; ro < 10; r++)
	{

		for (i = 0; i <= 14; i++)
		{

			if (i >= 10)
			{

				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
