#include "sort.h"
/**
 *bubble_sort - sorts an array of integers in ascending orde
 *@array: the array to be sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
unsigned int n, stop, j;
while (1)
{
stop = 0;
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
n = array[j];
array[j] = array[j + 1];
array[j + 1] = n;
stop += 1;
}
}
if (stop == 0)
break;
}
}
