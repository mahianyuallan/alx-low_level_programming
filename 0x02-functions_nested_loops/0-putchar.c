#include "main.h"
/**
 * main - Entry Block
  *Description: prints _putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		/* Use the _putchar function to print each character */
		_putchar(message[i]);
	}

	return (0);
}
