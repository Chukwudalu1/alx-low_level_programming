#include <stdio.h>
/**
 * mai - entery point
 *
 * function main - prints  a to z without q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch!= 'e' &&  ch  !=  'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
