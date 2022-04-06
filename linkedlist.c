/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:53:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/06 20:11:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* creates a new node, returns the pointer of the new node / we get the list */
t_stack	*ft_lst_new(int new_data)
{
	t_stack	*new_element;

	new_element = (t_stack *)malloc(sizeof(t_stack));
	if (!new_element)
		return (NULL);
	new_element->data = new_data;
	new_element->index = -1;
	new_element->next = NULL;
	return (new_element);
}

/* returns the last node of the list */
t_stack	*ft_lst_last(t_stack *head)
{
	t_stack	*last_element;

	if (!head)
		return (NULL);
	while (head->next != NULL)
		head = head->next;
	last_element = head;
	return (last_element);
}

/* add the node to the stack_a*/
void	ft_lst_add_back(t_stack **head, t_stack *new)
{
	t_stack	*last;

	if (head)
	{
		if (*head == NULL)
			*head = new;
		else
		{
			last = ft_lst_last(*(head));
			last->next = new;
		}
	}
}

/* Function to print nodes in a given linked list */
void	printList(t_stack *head)
{
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
}


/* frees the node */
void	ft_free(t_stack **stack)
{
	t_stack *temp;

	if (stack)
	{
		while (*stack)
		{
			temp = *stack;
			*stack = (*stack)->next;
			free(temp);
		}
	}
}
