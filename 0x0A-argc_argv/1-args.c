#include "stdio.h"

/**
 * main - prints number of arguements
 * @argc : number of the argument
 * @argv : an array of pointer
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{

	printf("%d\n", argc - 1);

	return(0);
}
