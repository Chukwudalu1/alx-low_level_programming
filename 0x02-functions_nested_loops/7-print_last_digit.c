#include "main.h"
/**
 * prints_last_digit - printthe last digit of a number 
 * @n: int type number
 * Return: return the value of last digit 
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		returb (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
