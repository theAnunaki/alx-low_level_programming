#include <stdio.h>
/**
 * main - using the printf functionto print a line
 * Return: 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		putchar(k + 48);
	}
	putchar('\n');
	return (0);
}
