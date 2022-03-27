
#include "push_swap.h"

/* 1) copy_stack  */
/* 2) apply bubble sort on values  */
/* 3) map the indexes in the copy to the indexes in the stack_a */
/* 4) appply binary index sort on the indexes of stack_a */
/* 5)   */
/* 6)   */


t_stack	*copy_a(t_stack *head_a)
{
	t_stack *new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	if (head_a == NULL)
		return (0);
	else
	{
		new_node->data = head_a->data;
		// recursively set the next pointer of the new Node by recurring for the remaining nodes
		new_node->next = copy_a(head_a->next); 
		return (new_node);
	}
}

/*  Function to swap the nodes 
int	swap_nodes(int node1, int node2)
{
	int temp;

	temp = node1;
	node1 = node2;
	node2 = temp;
	return (node2);
}

*/

/*  Function to sort the list 
void	bubble_sort(t_stack **cpy_a)
{
	int	i;
	int	j;
	int	counter;
	int	swapped;
	t_stack	*current_node;

	current_node = cpy_a;
	
	//counter = 0;

	i = 0;
	while(i <= counter)
	{
		current_node = *cpy_a;
		swapped = 0;
		j = 0;
		while (j < counter - i - 1)
		{
			if (current_node->data > current_node->next->data)
			{
				*cpy_a = swap_nodes(current_node->data, current_node->next->data); 
			}
			j++;
		}
		i++;
	}
}
*/

int	bubble_sort(int	num_nodes, t_stack **head)
{
	int	node_counter;
	int	counter;
	int	node_data_cpy;

	t_stack	*current_node;
	t_stack *next_node;

	node_counter = num_nodes - 2;
	while (node_counter >= 0)
	{
		current_node = *head;
		next_node = current_node->next;
		node_counter--;

	// loop until the smallest value rises to the top
		counter = 0;
		while (counter <= node_counter)
		{
			// switch the data if current node is larger than the nextnode
			if (current_node->data > next_node->data)
			{
				node_data_cpy = current_node->data;
				current_node->data = next_node->data;
				next_node->data = node_data_cpy;
			}

			// traverse to the next nodes
			current_node = next_node;
			next_node = next_node->next;
			counter++;
		}
	}
	return (node_data_cpy);
}
