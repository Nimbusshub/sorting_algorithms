#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	int value, *current_value;
	
	if (*list == NULL || (*list)->next == NULL)
		return;
		
	temp = temp->next;
	
	while (temp)
	{
		value = temp->n;
		
		while (temp->prev != NULL && temp->prev->n > value)
		{
			current_value = temp->n;
			*current_value = temp->prev->n;
			temp = temp->prev;
		}
		*current_value = value;
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
}