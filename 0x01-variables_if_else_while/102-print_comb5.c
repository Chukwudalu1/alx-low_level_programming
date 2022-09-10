#include <stdio.h>
/**
 * main - entry point
 *
 * function main - a program that prints possible combination of two digit 
 *
 * Return: 0
 */
int main(void)
{
	int digit1, digit2;
	
	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = 0; digit2 < 100; digit2++)
		{
			putchar((digit1 / 10) + 48);
			putchar((digit1 % 10) + 48);
			putchar(' ');
			putchar((digit2  / 10) + 48);
			putchar((digit2 % 10) + 48);
			if (digit1 == 98 && digit2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
