/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:10:18 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/01 22:33:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack)
{
		sa(stack);
}


void	sort_three(t_stack *stack)
{
	/* 2, 1, 3 */
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] &&
		stack->a[0] < stack->a[2])
		sa(stack);
	/* 2, 3, 1 */
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] &&
		 stack->a[2] < stack->a[0])
	{
		rra(stack);
		pa(stack);
		sa(stack);
		pb(stack);
	}
	
	/* 1, 3, 2 */
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] && 
		stack->a[0] < stack->a[2])
	{
		pb(stack);
		sa(stack);
		pa(stack);
	}
	/* 3, 2, 1 */
	if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2] && 
		stack->a[0] > stack->a[2])
	ra(stack);
}


void	sort_four(t_stack *stack)
{
	/* 1, 2, 4, 3 */
	// use sort_three(stack);
}


void	sort_five(t_stack *stack)
{

	// use sort_three(stack);
}