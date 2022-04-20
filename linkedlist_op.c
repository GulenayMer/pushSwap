/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:02:46 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:59:00 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ab(t_stack **head)
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

void	rotate_ab(t_stack **head)
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

void	rev_rotate_ab(t_stack **head)
{
	t_stack	*lastminus_node;
	t_stack	*last_node;

	last_node = *head;
	while (last_node->next != NULL)
	{
		lastminus_node = last_node;
		last_node = last_node->next;
	}
	lastminus_node->next = NULL;
	last_node->next = *head;
	*head = last_node;
}

void	push_ab(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first_node;
	t_stack	*second_node;

	first_node = *head_a;
	second_node = first_node->next;
	*head_a = second_node;
	first_node->next = *head_b;
	*head_b = first_node;
}
