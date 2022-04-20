/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:42:55 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:01:25 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_maximum(t_stack **stack)
{
	t_stack	*head;
	int		max_number;

	head = *stack;
	max_number = head->index;
	while (head)
	{
		if (head->index > max_number)
			max_number = head->index;
		head = head->next;
	}
	return (max_number);
}

/* get the max number and shift to the right until the end, 
	 count the max_bits */
int	count_max_bits(int max_number, int max_bits)
{
	max_bits = 0;
	while ((max_number >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

int	get_max_bits(t_stack **stack)
{
	int		max_number;
	int		max_bits;

	max_bits = 0;
	max_number = get_maximum(stack);
	return (count_max_bits(max_number, max_bits));
}

/* sorting */
void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		index_bits;
	int		index_num;
	int		max_bits;
	int		length;

	tmp = *stack_a;
	max_bits = get_max_bits(stack_a);
	length = ft_lst_size(tmp);
	index_bits = 0;
	while (index_bits < max_bits)
	{
		index_num = 0;
		while (index_num++ < length)
		{
			tmp = *stack_a;
			if (((tmp->index >> index_bits) & 1) == 1)
				rotate_a(stack_a);
			else
				push_to_b(stack_a, stack_b);
		}
		while (*stack_b != 0)
			push_to_a(stack_a, stack_b);
		index_bits++;
	}
}
