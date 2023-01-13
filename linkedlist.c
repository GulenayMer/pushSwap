/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:53:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:06:12 by mgulenay         ###   ########.fr       */
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

int	ft_lst_size(t_stack *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* frees the stack */
void	free_stack(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *stack;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		if (tmp1)
		{
			free(tmp1);
			tmp1 = tmp2;
		}
	}
}
