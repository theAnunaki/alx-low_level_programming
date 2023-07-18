#include <stdio.h>
/**
 * main - question 10
 * Return: 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit++)
	{
		for(digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if(digit1 == 0 && digit2 == 0)
				continue;

			putchar(',');
			putchar(' ');
		}
		putchat('\n');
	}
	return (0);

}
