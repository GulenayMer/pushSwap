/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:10:18 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/07 00:10:19 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **head)
{
		swap_a(head);
}

void	sort_three(t_stack **head)
{
	t_stack *first_node;
	t_stack *second_node;
	t_stack *third_node;

	first_node = *head;
	second_node = first_node->next;
	third_node = second_node->next;

	/* 2 1 3  */
	if (first_node->data > second_node->data && second_node->data < third_node->data 
			&& first_node->data < third_node->data)
	{
			swap_a(head);
			//printList(*head);
	}
	/* 2 3 1 */
	else if (first_node->data < second_node->data && second_node->data > third_node->data 
			&& first_node->data > third_node->data)
	{
		rev_rotate_a(head);
		//printList(*head);
	}
	
	/* 1 3 2  */
	else if (first_node->data < second_node->data && second_node->data > third_node->data 
			&& first_node->data < third_node->data)
	{
		swap_a(head);
		rotate_a(head);
		//printList(*head);  
	}
	/* 3 2 1  */
	 else if (first_node->data > second_node->data && second_node->data > third_node->data 
			&& first_node->data > third_node->data)
	{
		//printList(*head);
		rotate_a(head);
		swap_a(head); 
		//printList(*head);    
	} 
	/* 3 1 2  */
	else if (first_node->data > second_node->data && second_node->data < third_node->data 
			&& first_node->data > third_node->data)
	{
		rotate_a(head);
		//printList(*head);
	}
} 

int 	get_minimum(t_stack **head)
{
	t_stack	*current_node;
	int	min;

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
	int min;

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

	last_node = (t_stack *)malloc(sizeof(t_stack));
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
