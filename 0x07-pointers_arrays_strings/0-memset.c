#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to be filled
 * @n: bytes of memory area to fill
 * Return: the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a;

	for (a = 0; a < n; a++)
	{

		s[a] = b;
	}
	return (s);
}
