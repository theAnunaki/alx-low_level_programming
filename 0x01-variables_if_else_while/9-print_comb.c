#include <stdio.h>
/**
 * main - using the printf functionto print a line
 * Return: 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
		if (k == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
