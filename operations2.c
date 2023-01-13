/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:08:03 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:11:54 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **head)
{
	swap_a(head);
}

void	push_to_a(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first_node;
	t_stack	*second_node;

	if (*head_b == NULL)
		return ;
	first_node = *head_b;
	second_node = first_node->next;
	*head_b = second_node;
	first_node->next = *head_a;
	*head_a = first_node;
	write(1, "pa\n", 3);
}

void	push_to_b(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first_node;
	t_stack	*second_node;

	if (*head_a == NULL)
		return ;
	first_node = *head_a;
	second_node = first_node->next;
	*head_a = second_node;
	first_node->next = *head_b;
	*head_b = first_node;
	write(1, "pb\n", 3);
}

t_stack	*get_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		has_min;

	head = *stack;
	min = NULL;
	has_min = 0;
	if (head)
	{
		while (head != NULL)
		{
			if (head->index == -1 && (!has_min || min->data > head->data))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	indexing(t_stack **stack_a)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = get_min(stack_a);
	while (head != 0)
	{
		head->index = index++;
		head = get_min(stack_a);
	}
}
