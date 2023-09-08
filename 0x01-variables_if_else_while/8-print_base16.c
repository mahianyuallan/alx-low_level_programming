#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char x;

for (i = 0; i < 10; i++)
putchar(i + '0');
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
