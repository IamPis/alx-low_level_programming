#include "main.h"
#include "stdio.h"

int _sqrt(int i, int n);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates the natural square root of a number
 * @n: number to find natural square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{

	int _sqrt = i * i;

	if (sqrt > n)
	{

		return (-1);
	}
	if (sqrt == n)
	{

		return (i);
	}
	return (_sqrt(n, i + 1));
}
