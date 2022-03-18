#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: complex number c
 */

void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%.9g", c.re);
		if (c.im > 0)
		{
			printf(" + ");
		}
		if (c.im == 0)
		{
			printf("\n");
		}
	}
	if (c.im > 1)
	{
		printf("%.9g", c.im);
	}
	if (c.im < 0)
	{
		printf(" - %.9g", -(c.im));
	}
	if (c.im != 0)
	{
		printf("i\n");
	}
	if (c.re == 0 && c.im == 0)
	{
		printf("0\n");
	}
}
