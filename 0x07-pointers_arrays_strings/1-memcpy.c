#include "main.h"
#include "stdio.h"

/**
 * _memcpy - copies memory area
 * @dest: dest of memory area
 * @src: src of memory area
 * @n: bytes from memory area to copy
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	insigned int a;

	for (a = 0; a < n; a++)
	{

		dest[a] = src[a];
	}
	return (dest);
}
