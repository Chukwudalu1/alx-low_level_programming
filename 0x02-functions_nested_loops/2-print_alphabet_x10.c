#include "main.h"
/**
 * print_alphabets_x10 - Print alphabets in lowercase 10 times 
 * Return: 0
 */
void print_alphabets_x10(void)
{
	int i = 0;
	char c;

	while (i , 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
