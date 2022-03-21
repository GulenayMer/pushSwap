#include "push_swap.h"

/* Function to print nodes in a given linked list */
void	printList(t_stack *head)
{
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
}

/*  inserting a new node at the front of the list  */
void push_to_top(t_stack **head, int new_data)
{
	t_stack  *temp;
	t_stack  *current = malloc(sizeof(t_stack)); // allocate a node -- new node
	
	current->data = new_data; // put in the data
	current->next = NULL;	// the current node points to the null
	if (!*head)          // if head is null
		*head = current; //move the head to point to the new/current node 
	else
	{
		temp = *head;	// if head is not null, store the head into the temp
		*head = current;  //move the head to point to the new node
		(*head)->next = temp;	// head points to the temp
	}
}

/*  inserting a new node at the end of the list  */

void to_add_end(t_stack  **head, int new_data)
{
	t_stack  *current = malloc(sizeof(t_stack)); // allocate--create a new node
	t_stack	*lastNode;

	current->data = new_data; // put in the data
	current->next = NULL;	// the current node points to the null
	if (!*head)          // if head is null-- empty list
		*head = current; //move the head to point to the new/current node --- make the new node as the head
	else
	{
		lastNode = *head;	// if head is not null
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;   // find the last node
		}
		lastNode->next = current;	// make the last node as the new one
	}
}
