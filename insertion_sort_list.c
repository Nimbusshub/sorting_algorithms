#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	int value;
	
	if (*list == NULL || (*list)->next == NULL)
		return;
		
	temp = temp->next;
	/* {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
	
	while (temp != NULL)
	{
		value = temp->n;
		printf("\n %d \n", value);
		
		while (temp->prev != NULL && temp->prev->n > value)
		{
			printf("\t [%d]\n", temp->prev->n);
			temp =  temp->prev;
			printf("\t %d \n", temp->prev->n);
		}
		temp = temp->next;
	}
}




void nodes_swap(listint_t **list, listint_t *node_1, listint_t *node_2)
{
	listint_t *temp = node_1;
	node_1->next = node_2->next;
	node_1->prev = temp->next;
	node_2->next = node_2->prev;
	node_2->prev = temp->prev;
	if (node_1->next != NULL)
		node_1->next->next = node_2->next;
		
	if (node_2->prev == NULL)
	{
		*list = node_2;
	}
}

