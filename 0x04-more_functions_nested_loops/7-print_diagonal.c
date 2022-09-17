#include <main.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 * Return: a diagnol
 */
void print_diagonal(int n)
{

	int co, sp;

	if (n <= 0)
	{

		_putchar('\n');
	}
	else
	{

		for (co = 1; co <= n; co++)
		{

			for (sp = 1; sp < n; sp++)
			{

				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
