#include <stdio.h>
/**
 * main - This is the main function
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 97;
	int n  = 65;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);

}
