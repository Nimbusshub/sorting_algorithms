# Sorting Algorithm and Big O

 _By Shukrah and Ni'mah Ogunbanjo
##### A project done by a group of two students. 
---
### Data Structure and Functions

* For this project we were given the following print_array, and print_list functions:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
---
##### We use the following data structure for Doubly linked list
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
##### Test.
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random](https://www.random.org/integer-sets/)

# Tasks.
#### Bubble sorts.
* Function that sorts an array of integers in ascending order using the Bubble sort algorithm
	* Prototype: void bubble_sort(int *array, size_t size);
	* Youre expected to print the array after each time you swap two elements
#### Insertion sorts
* Function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
	* Prototype: ```void insertion_sort_list(listint_t **list);``` 
	* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	* Youre expected to print the list after each time you swap two elements
#### Selection sorts
* Function that sorts an array of integers in ascending order using the [Selection sort](https://en.m.wikipedia.org/wiki/Selection_sort) algorithm
	* Prototype: ```void selection_sort(int *array, size_t size);```
	* Youre expected to print the array after each time you swap two elements  
