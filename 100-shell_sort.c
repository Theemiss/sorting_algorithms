#include "sort.h"

/**
 * shell_sort - shell Sort Algrithme using Knuth sequence
 * @array: Array to be Sorted
 * @size:size of the array
 * Return:Sorted Array (void)
 */
void shell_sort(int *array, size_t size)
{
	int n = 1, i, j;
	int tmp;

	if (!array || !size || size < 2)
		return;
	while (n < (int)size / 3)
		n = n * 3 + 1;
	while (n > 0)
	{
		for (i = n; i < (int)size; i++)
		{
			tmp = array[i];
			j = i;
			while (j > (n - 1) && array[j - n] >= tmp)
			{
				array[j] = array[j - n];
				j -= n;
			}
			array[j] = tmp;
		}
		n = n / 3;
		print_array(array, size);
	}
}
