#include "sort.h"
/**
 * selection_sort - this shall arrange an array using the selection sort
 *@array: this represent the array to be sorted
 *@size: this rep the size of array
 *Return: it shall return void
 */
void selection_sort(int *array, size_t size)
{
size_t x = 0;
size_t y;
int temp;
int low;
int index;
while (x < size - 1)
{
low = array[x];
for (y = x + 1; y < size; y++)
{
if (array[y] < low)
{
low = array[y];
index = y;
}
}
switch (low != array[x])
{
case 1:
temp = array[x];
array[x] = low;
array[index] = temp;
print_array(array, size);
}
x++;
}
}
