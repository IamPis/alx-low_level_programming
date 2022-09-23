#include "main.h"
#include "stdio.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, dest_len = 0;

	while (dest[i])
	{

		dest_len++;
	}
	for (i = 0; src[i] != 0; i++)
	{

		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
