#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// define a struct 

typedef struct s_stack
{
	int data;
	struct s_stack *next; // for the single linked list there only one link is allowed.
}		t_stack;

/* 
void to_add_end(int a, t_node **head)
{
	t_node *current = malloc(sizeof(t_node)); // allocate--create a new node
	t_node *lastNode;

	current->data = a; // put in the data
	current->link = NULL;	// the current node points to the null
	if (!*head)          // if head is null-- empty list
		*head = current; //move the head to point to the new/current node --- make the new node as the head
	else
	{
		lastNode = *head;	// if head is not null
		while (lastNode->link != NULL)
		{
			lastNode = lastNode->link;   // find the last node
		}
		lastNode->link = current;	// make the last node as the new one
	}
} */

/* int	main()
{
	t_node *head = NULL; // the pointer to struct node only
	
	add_to_end(45, &head);
	add_to_end(65, &head);

	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->link;
	}
	//printf("%d", head->link->data);
	return (0);	
} */

/* Function to print nodes in a given linked list */
void	printList(t_stack *head)
{
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
}

void push(t_stack **head, int a)
{
	t_stack *temp;
	t_stack *current = malloc(sizeof(t_stack)); // allocate a node -- new node
	
	current->data = a; // put in the data
	current->next= NULL;	// the current node points to the null
	if (!*head)          // if head is null
		*head = current; //move the head to point to the new/current node 
	else
	{
		temp = *head;	// if head is not null, store the head into the temp
		*head = current;  //move the head to point to the new node
		(*head)->next = temp;	// head points to the temp
	}
}

void swap_ab(t_stack **head)
{
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*third_node;

	first_node = *head;
	second_node = first_node->next;
	third_node = second_node->next;
	second_node->next = first_node;
	first_node->next = third_node;
	*head = second_node;
}

void	swap_a(t_stack **head)
{ 
	swap_ab(head);
	write(1, "sa\n", 3);
}

void rev_rotate_ab(t_stack **head)
{
	t_stack	*lastminus_node = NULL;;
	t_stack	*last_node = *head;

	while (last_node->next != NULL)
	{
		lastminus_node = last_node;
		last_node = last_node->next;
	}
	lastminus_node->next = NULL;
	last_node->next = *head;
	*head = last_node;
}

void	rev_rotate_a(t_stack **head)
{
	rev_rotate_ab(head);
	write(1, "rra\n", 4);
}

void rotate_ab(t_stack **head)
{
	t_stack	*temp;
	t_stack	*first_node;
	t_stack	*second_node;
	t_stack	*last_node;

	temp = *head;
	first_node = *head;
	second_node = first_node->next;
	while (temp ->next != NULL)
		temp = temp->next;
	last_node = temp;
	last_node->next = first_node;
	first_node->next = NULL;
	*head = second_node;
}

void	rotate_a(t_stack **head)
{
	rotate_ab(head);
	write(1, "ra\n", 3);
}

// 1 2 3 4
void	sort_three(t_stack **head)
{
	t_stack *first_node;
	t_stack *second_node;
	t_stack *third_node;

	first_node = *head;
	second_node = first_node->next;
	third_node = second_node->next;

	/* 2, 1, 3 */
		if (first_node->data > second_node->data && second_node->data < third_node->data 
			&& first_node->data < third_node->data)
			swap_ab(head);
	/* 2, 3, 1 */
		else if (first_node->data < second_node->data && second_node->data > third_node->data 
			&& first_node->data > third_node->data)
			rev_rotate_a(head);
	/* 1, 3, 2 */
		else if (first_node->data < second_node->data && second_node->data > third_node->data && 
				first_node->data < third_node->data)
		{
			swap_a(head);
			rotate_a(head);
		}
		/* 3, 2, 1 */
		else if (first_node->data > second_node->data && second_node->data > third_node->data && 
				first_node->data > third_node->data)
		{
			rotate_a(head);
			swap_a(head);
		}
		/* 3, 1, 2 */
		else if (first_node->data > second_node->data && second_node->data < third_node->data && 
				first_node->data > third_node->data)
			rotate_a(head);
}






int main()
{
	t_stack *head_a = NULL;

	/* The constructed linked list is:
	1->2->3->4->5 */
	push(&head_a, 3);
	push(&head_a, 1);
	push(&head_a, 2);
	//push(&head_b, 2);
	//push(&head_b, 1);

	printf("Linked list before calling\n ");
	printList(head_a);

	sort_three(&head_a);
	printf("\nLinked list after calling\n ");
	printList(head_a);

	return (0);
}
