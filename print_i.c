#include <stdarg.h>
#include "printf.h"

/**
 * print_d - a function that prints an integer
 * @d: the integer to print
 *
 * Return: the number of digits printed
 */

int print_i(va_list i)
{
	int l = 100000000;
	int n;
	int count = 0;

	n = va_arg(i, int);
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}
	while (l)
	{
		if (n / l != 0)
		{
			_putchar((n / l) % 10 + '0');
			count++;
		}
		l /= 10;
	}
	return (count);
}
