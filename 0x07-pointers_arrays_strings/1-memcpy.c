#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: dest of memory area
 * @src: src of memory area
 * @n: bytes from memory area to copy
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	insigned int a = 0;

	for (; a < n; a++)
	{

		dest[a] = src[a];
	}
	return (dest);
	return ('\0');
}
