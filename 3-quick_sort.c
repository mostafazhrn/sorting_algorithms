#include "sort.h"
/**
 * swapped - this code shall swap two elem of array
 *@array: this rep the array to be swapped
 *@item0: this rep the 1st item
 *@item1: this rep the 2nd item
 *Return: it shall return void
 */
void swapped(int *array, ssize_t item0, ssize_t item1)
{
int temp;
temp = array[item0];
array[item0] = array[item1];
array[item1] = temp;
}
/**
 * partition - this shall divide array
 * @array: array to div
 * @low: this shall represent begining index
 * @high: this shall rep end of index
 * @size: this rep size of array
 * Return: index of array
 */
int partition(int *array, ssize_t low, ssize_t high, size_t size)
{
int pivot = array[high];
ssize_t x = low - 1;
ssize_t y = low;
while (y < high)
{
if (array[y] <= pivot)
{
x++;
if (x != y)
{
swapped(array, x, y);
print_array(array, size);
}
}
y++;
}
if (x + 1 != high)
{
swapped(array, x + 1, high);
print_array(array, size);
}
return (x + 1);
}
/**
 * quicksort - this shall sort an array of integers in ascending order
 * @array: this rep array to sort
 * @low: this shall rep beginnig of index
 * @high: this rep end of index
 * @size: this shall rep size of array
 * Return: void
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
ssize_t part;
if (low < high)
{
part = partition(array, low, high, size);
quicksort(array, low, part - 1, size);
quicksort(array, part + 1, high, size);
}
}

/**
 * quick_sort - this shall sort an array of integers in ascending order
 * @array: this shall rep array to sort
 * @size: this shall rep size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
switch (array == NULL || size < 2)
{
case 1:
return;
}
quicksort(array, 0, size - 1, size);
}
