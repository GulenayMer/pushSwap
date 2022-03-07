/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:05:36 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/05 18:33:44 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// sa -- swap a
// swap the first 2 elements at the top of stack a 
void	sa(stack_data *stack)
{ 
	int swap;

	swap = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = swap;
	//write(1, "sa\n", 3);
};

// sb  -- swap b
// swap the first 2 elements at the top of stack b
void	sb(stack_data *stack)
{
	int swap;
	
	swap = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = swap;
	//write(1, "sb\n", 3);
};


// ss -- sa + sb
void	ss(stack_data *stack)
{
	sa(stack);
	sb(stack);
	//write(1, "ss\n", 3);
};

//pa -- push a
// take the 1. element at the top of b, put it at the top of a  
void	pa(stack_data *stack)
{
	int i;
	int j;
	int temp;

	temp = stack->b[0];
	i = stack->length_a;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	j = 0;
	while (j < stack->length_b - 1)
	{
		stack->b[j] = stack->b[j + 1];
		j++;
	}
	stack->length_a++;
	stack->length_b--;
	stack->a[0] = temp;

	//write(1, "pa\n", 3);
};

// pb -- push b
// take the 1.element at the top of a, put it at the top of b
void	pb(stack_data *stack)
{
	int i;
	int j;
	int push;

	push = stack->a[0];
	i = stack->length_b;
	while (i > 0)
	{
		stack->b[i + 1] = stack->b[i];
		i--;
	}
	
	j = 0;
	while (j < stack->length_a)
	{
		stack->a[j] = stack->a[j + 1];
		j++;
	}
	stack->length_b++;
	stack->length_a--;
	stack->b[0] = push;
	//write(1, "pb\n", 3);
};


// ra -- rotate a
// shift up all elements of stack a by 1  -- the 1. element becomes the last one
void	ra(stack_data *stack)
{
	int i;
	int length;
	int temp;

	temp = stack->a[0];
	length = stack->length_a;;
	i = 0;
	while (i < length)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->length_a - 1] = temp;
	// write(1, "ra\n", 3);
};

// rb -- rotate b
// shift up all elements of stack b by 1 -- the 1.element becomes the last one
void	rb(stack_data *stack)
{
	int i;
	int length;
	int temp;

	temp = stack->b[0];
	length = stack->length_b;;
	i = 0;
	while (i < length)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->length_b - 1] = temp;
	//write(1, "rb\n", 3);
};

// rr --- ra + rb
void	rr(stack_data *stack)
{
	ra(stack);
	rb(stack);
	//write(1, "rr\n", 3);
};

// rra -- reverse rotate a 
// shift down all elements of stack a by 1 -- the last element becomes the 1.
void	rra(stack_data *stack)
{
	int i;
	int length;
	int temp;

	length = stack->length_a;
	temp = stack->a[length - 1];
	i = length;
	while (i > 0)
	{
		stack->a[i] = stack->a[i- 1];
		i--;
	}
	stack->a[0] = temp;
	//write(1, "rra\n", 4);
};

// rrb -- reverse rotate b
// shift down all elements of stack b by 1 -- the last element becomes the 1.
void	rrb(stack_data *stack)
{
	int i;
	int length;
	int temp;

	length = stack->length_b;
	temp = stack->b[length - 1];
	i = length - 1;
	while (i > 0)
	{
		stack->b[i] = stack->b[i- 1];
		i--;
	}
	stack->a[0] = temp;
	//write(1, "rrb\n", 4);
};

// rrr -- rra + rrb
void	rrr(stack_data *stack)
{
	rra(stack);
	rrb(stack);
	//write(1, "rrr\n", 4);
};
