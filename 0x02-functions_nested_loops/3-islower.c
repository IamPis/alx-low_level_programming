#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: always successful
 * @c: single letter input
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);
}
