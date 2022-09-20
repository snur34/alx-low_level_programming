#include <stdio.h>
#include "main.h"
/**
 *print_array - Print an array up to n.
 *@a: the array of elements
 *@n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
		int j;

		for (j = 0; j < n; j++)
		{
			printf("%d", a[j]);

			if (j != (n - 1))
			{
				printf(", ");
			}
		}

		printf("\n");
}
