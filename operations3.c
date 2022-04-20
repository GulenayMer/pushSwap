/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:09:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 20:09:29 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
