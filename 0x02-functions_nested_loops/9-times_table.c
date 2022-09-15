#include "main.h"

/**
 * times_table - prints the 9 times table
 * rw = row, col = column, d = digits
 * Return: always successful
 */
void times_table(void)
{

	int rw, col, d;

	for (rw = 0; rw <= 9; rw++)
	{

		_putchar('0');

		for (col = 1; col <= 9; col++)
		{

			_putchar(',');
			_putchar(' ');

			d = (rw * col);

			if ((d / 10) > 0)
			{

				_putchar((d / 10) + '0');
			}

			else
			{

				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
