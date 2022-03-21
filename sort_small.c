/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:10:18 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/17 15:37:57 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **head)
{ 
		/* 2, 1 */
		sa(head);
}

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
	else if (first_node->data < second_node->data && second_node->data > third_node->data 
			&& first_node->data < third_node->data)
		{
			swap_a(head);
			rotate_a(head);
		}
		/* 3, 2, 1 */
		else if (first_node->data > second_node->data && second_node->data > third_node->data 
			&& first_node->data > third_node->data)
		{
			rotate_a(head);
			swap_a(head);
		}
		/* 3, 1, 2 */
		else if (first_node->data > second_node->data && second_node->data < third_node->data 
			&& first_node->data > third_node->data)
			rotate_a(head);
}


void	sort_four(t_stack **head)
{

	


}
