

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

t_stack	*get_min(t_stack **head)
{
	t_stack	*current_node;
	t_stack	*min = NULL;
	//int	cnt_min;

	//cnt_min = 0;
	current_node = *head;
	if (head == NULL)
		return (0);
	while (current_node != NULL)
	{
		if (current_node->index == -1 && min->data > current_node->data)
		{
			min->data = current_node->data;
		}
		current_node = current_node->next;
	}
	return (min);
}

void indexing(t_stack **stack_a)
{
	t_stack *head;
	int		index;

	index = 0;
	head = get_min(stack_a);
	while (head)
	{
		head->index = index++;
		head = get_min(stack_a);
	}
	index = 0;
	/* while (index < ft_lstsize(*stack_a))
	{
			printf("%d" , index);
			index++;
	}
	*/
}

/* int	bit_length(int n)
{
	int	bits;

	bits = 0;
	while ((n >> bits) != 0)
		bits++;
	return (bits);
}
*/

 int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}	

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	index_len;
	int size;
	int	bit_iteration;
	int		i;
	size = ft_lstsize(*stack_a); // stack lenght, check the function again
	index_len = get_max_bits(stack_a);

	bit_iteration = 0;
	while (bit_iteration < index_len)
	{
		i = 0;
		while (i < size)
		{
			if ((((*stack_a)->index >> bit_iteration) & 1) == 1)
				rotate_a(stack_a);
			else
				push_to_b(stack_a, stack_b);
		}
		i++;
	}
	while (*stack_b)
	{
		push_to_a(stack_a, stack_b);
	}
	bit_iteration++;
}

