#include "variadic_function.h"

/**
 * sum_them_all - prinyts sum of all variable to stdout
 * @n: variable
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
