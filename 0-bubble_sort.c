#include "sort.h"
/**
 * bubble_sort - this code shall sort array of ints using Bubble algorithm
 * @array: represent the array to be sorted
 * @size: represent size of the array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
    size_t x = 0;
    size_t y = 0;
    int temp;
    int swapped = 0;
    switch (array == NULL || size < 2)
      {
      case 1:
	return;
      }
    while (x < size - 1)
    {
      for (y = 0; y < size - x - 1; y++)
        {
            if (array[y] > array[y + 1])
            {
                temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;
                swapped = 1;
                print_array(array, size);
	    }
	}
        switch (swapped == 0)
	  {
	  case 1:
	    break;
	  }
	x++;
    }
}
