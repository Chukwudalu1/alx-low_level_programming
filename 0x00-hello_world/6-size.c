#include <stdio.h>

/**
 * main - proints the string in the put function
 *
 * Description: using the main function
 * this programme prints and returns 0
 * Return: 0
 */
int main (void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf ("Size of a char: %ld bytes(s)\n" , sizeof (c));
	printf ("Size of an int: %ld bytes(s) \n" , sizeof(i));
	printf ("Size of a long int: %ld byte(s) \n" , sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n" , sizeof(lli));
	printf("Size of a float: %ld byte(s)\n" , sizeof(f));
	return (0);
}
