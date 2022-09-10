#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Description: using the main function
 * Retuern: always successful
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
	putchar(c);
}
}
putchar('\n');

return (0);
}
