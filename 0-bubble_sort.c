#include "sort.h"

/**
 *bubble_sort - sorting method to sort in assending order
 *@array: the array of ints to use
 *@size: the size of the array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, temp1, temp2;

	if (!size)
		return;
	for (i = 0; i < size; i++)
	{
		if (i + 1 != size)
		{
			temp1 = array[i];
			temp2 = array[i + 1];
			if (temp1 > temp2)
			{
				array[i] = temp2;
				array[i + 1] = temp1;
				print_array(array, size);
			}
		}
	}
}
