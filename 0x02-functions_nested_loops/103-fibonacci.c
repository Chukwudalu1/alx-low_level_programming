#include <stdio.h>
 /**
  * main - main block
  * Description: Print the um of even Fibonacci numbers up to a fib value 
  * not exceeding 4,000,000.
  * Return: 0
  */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if ( % 2 == 0)
			total +=j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n" , total);
	return (0);
}

