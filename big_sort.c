/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:42:55 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/07 18:07:40 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min(t_stack **stack)
{
	t_stack	*head = NULL;
	t_stack	*min = NULL;
	int	has_min;

	head = *stack;
	if (head == NULL)
		return (0);
	has_min = 0;
	while (head != NULL)
	{
		if (head->index == -1 && (!has_min || min->data > head->data))
		{
			min = head;
			has_min = 1;
		}
		head = head->next;
	}
	return (min);
}

void	indexing(t_stack **stack_a)
{
	t_stack *head = NULL;
	int		index;

	index = 0;
	head = get_min(stack_a);
	while (head != 0)
	{
		head->index = index++;
		head = get_min(stack_a);
	}
}

/* get the max number and shift to the right until the end, 
	 count the max_bits*/ 
int	count_max_bits(int max_number, int max_bits)
{
	while ((max_number >> max_bits) != 0) 
		max_bits++;
	return (max_bits);
}

int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max_number;
	int		max_bits;

	head = *stack;
	max_bits = 0;
	max_number = head->index;
	while (head)
	{
		if (head->index > max_number)
			max_number = head->index;
		head = head->next;
	}
	return (count_max_bits(max_number, max_bits));
}

/* sorting */
void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	index_bits;
	int	index_num;
	int	max_bits;
	int	length;
	t_stack	*tmp;

	tmp = *stack_a;
	length = ft_lst_size(tmp);
	max_bits = get_max_bits(stack_a);
	index_bits = 0;
	while (index_bits < max_bits)
	{
		index_num = 0;
		while (index_num < length)
		{
			tmp = *stack_a;
			if (((tmp->index >> index_bits) & 1) == 1)
				rotate_a(stack_a);
			else
				push_to_b(stack_a, stack_b);
			index_num++;
		}
		while (*stack_b != 0)
		{
			push_to_a(stack_a, stack_b);
		}
		index_bits++;
	}
}
