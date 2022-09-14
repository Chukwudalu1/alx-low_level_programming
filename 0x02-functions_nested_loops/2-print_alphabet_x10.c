#include "main.h"
/**
 * print_alphabets_x10 - Print alphabets in lowercase 10 times
 * Description: Print_alphabet_x10 in lowercase, followed by a newline
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
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
