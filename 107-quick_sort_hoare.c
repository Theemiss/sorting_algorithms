#include "sort.h"

/**
 * swap - swap two int
 * @a: int
 * @b: int
 * Return: (void) Swaped int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - Partition an array and using pivot
 * @array: Array
 * @low: int
 * @high: int
 * @size: size of array (size_t)
 * Return: index of pivote (int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

		for (j = low; j <= high - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		swap(&array[i + 1], &array[high]);
		return (i + 1);
}
/**
 * hoare_qsort - Sorting Recursively an Array
 * @array: Array to be sorted
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: Size of The Array
 * Return: void
 */
void hoare_qsort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		hoare_qsort(array, low, pivot - 1, size);
		hoare_qsort(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort_hoare - Quick Sort Algorithme using hoare partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Sorted Array (void)
 */
void quick_sort_hoare(int *array, size_t size)
{
	hoare_qsort(array, 0, size - 1, size);

}
