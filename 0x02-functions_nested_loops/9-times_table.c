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
		_putchar(',');
		_putchar(' ');

		for (col = 0; col <= 9; col++)
		{

			d = (rw * col);

			if ((d / 10) > 0)
			{

				_putchar((d / 10) + '0');
			}

			else
			{

				_putchar(' ');
				_putchar('\n');
			}
		}
	}
}
