/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:10:18 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 21:26:52 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_add(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *head;
	second = first->next;
	third = second->next;
	if (first->data > second->data && second->data > third->data
		&& first->data > third->data)
	{
		rotate_a(head);
		swap_a(head);
	}
	else if (first->data < second->data && second->data > third->data
		&& first->data < third->data)
	{
		swap_a(head);
		rotate_a(head);
	}
}

void	sort_three(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *head;
	second = first->next;
	third = second->next;
	if (first->data > second->data && second->data < third->data
		&& first->data < third->data)
		swap_a(head);
	else if (first->data < second->data && second->data > third->data
		&& first->data > third->data)
		rev_rotate_a(head);
	else if (first->data > second->data && second->data < third->data
		&& first->data > third->data)
		rotate_a(head);
	else
		sort_three_add(head);
}

int	get_minimum(t_stack **head)
{
	t_stack	*current_node;
	int		min;

	current_node = *head;
	if (head == NULL)
		return (0);
	min = (*head)->data;
	while (current_node != NULL)
	{
		if (min > current_node->data)
		{
			min = current_node->data;
		}
		current_node = current_node->next;
	}
	return (min);
}

void	sort_four(t_stack **head_a, t_stack **head_b)
{
	int	min;

	min = get_minimum(head_a);
	while ((*head_a)->data != min)
		rotate_a(head_a);
	push_to_b(head_a, head_b);
	sort_three(head_a);
	push_to_a(head_a, head_b);
}

void	sort_five(t_stack **head_a, t_stack **head_b)
{
	int		min;
	int		next_min;
	t_stack	*last_node;

	last_node = ft_lst_last(*head_a);
	last_node->next = NULL;
	min = get_minimum(head_a);
	while ((*head_a)->data != min)
		rotate_a(head_a);
	push_to_b(head_a, head_b);
	next_min = get_minimum(head_a);
	last_node = ft_lst_last(*head_a);
	if (last_node->data == next_min)
		rev_rotate_a(head_a);
	else if (last_node->data != next_min)
	{
		while ((*head_a)->data != next_min)
			rotate_a(head_a);
	}
	push_to_b(head_a, head_b);
	sort_three(head_a);
	push_to_a(head_a, head_b);
	push_to_a(head_a, head_b);
}
