#include "sort.h"

/**
 * swap - switch position of the elements passed
 *
 * @x: pointer the first element
 * @y: pointer the second element
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}


/**
 * bubble_sort - sorts the algo by moving the largest number in the array
 * to the end of the array
 * 
 * @array: the array to sort 
 * @size: size of the array
 * Return: return void 
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int flag;

    if (size < 2)
    {
        return;
    }
    
    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
                flag = 1;
            }
        }
        
        if (flag == 0)
        {
            break;
        }
    }
}