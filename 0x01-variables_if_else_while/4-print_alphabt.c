#include <stdio.h>
/**
 * main - This is the main function
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		if (m == 101 || m == 113)
		{
			m++;
			continue;
		}
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);

}
