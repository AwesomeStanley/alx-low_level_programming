#include "main.h"
/**
 * print_to_98 - this program prints every minute
 *
 * @n: integer value
 *
 * Return: minutes
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		printf("\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}

