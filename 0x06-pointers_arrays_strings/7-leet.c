#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;

	char src[] = "aeotLAEOTL";
	char dest[] = "4307143071";


	for (i = 0; *(s + i); I++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[j] == *(s + i))
				*(s + i) = dest[j];
		}
	}
	return (s);
}
