#include <stdio.h>

/**
  * main - Prints the numbers form 0 to 9
  *
  * Return: Success
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
