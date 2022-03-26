/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:05:36 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/24 22:39:03 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **head)
{ 
	swap_ab(head);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **head)
{ 
	swap_ab(head);
	write(1, "sb\n", 3);
}

void	swap_both(t_stack **head)
{
	swap_a(head);
	swap_b(head);
	write(1, "ss\n", 3);
}

void	rotate_a(t_stack **head)
{
	rotate_ab(head);
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **head)
{
	rotate_ab(head);
	write(1, "rb\n", 3);
}

void	rotate_both(t_stack **head)
{
	rotate_a(head);
	rotate_b(head);
	write(1, "rr\n", 3);
}

void	rev_rotate_a(t_stack **head)
{
	rev_rotate_ab(head);
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack **head)
{
	rev_rotate_ab(head);
	write(1, "rrb\n", 4);
}

void	rev_rotate_both(t_stack **head)
{
	rev_rotate_a(head);
	rev_rotate_b(head);
	write(1, "rrr\n", 4);
}

void	push_to_a(t_stack **head_a, t_stack **head_b)
{
	t_stack *first_node;
	t_stack *second_node;

	if (*head_b == NULL)
		return ;
	first_node = *head_b;
	second_node = first_node->next;
	*head_b = second_node;
	first_node->next = *head_a;
	*head_a =  first_node;
	write(1, "pa\n", 3);
}

void	push_to_b(t_stack **head_a, t_stack  **head_b)
{
	t_stack *first_node;
	t_stack  *second_node;

	if (*head_a == NULL)
		return ;
	first_node = *head_a;
	second_node = first_node->next;
	*head_a = second_node;
	first_node->next = *head_b;
	*head_b = first_node;
	write(1, "pb\n", 3);
}
