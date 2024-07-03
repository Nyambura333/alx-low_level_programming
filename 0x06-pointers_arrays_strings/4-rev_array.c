#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
	}
}
