/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:05:36 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/17 15:36:10 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// sa -- swap a
// swap the first 2 elements at the top of stack a 
// sb  -- swap b
// swap the first 2 elements at the top of stack b
void	swap_ab(t_stack **head)
{ 

	//write(1, "sa\n", 3);
}



// ss -- sa + sb
void	swap_both(t_stack **head);

//pa -- push a
// take the 1. element at the top of b, put it at the top of a  
// pb -- push b
// take the 1.element at the top of a, put it at the top of b
void	push_ab(t_stack **head);


// ra -- rotate a
// shift up all elements of stack a by 1  -- the 1. element becomes the last one
// rb -- rotate b
// shift up all elements of stack b by 1 -- the 1.element becomes the last one
void	rotate_ab(t_stack **head);

// rr --- ra + rb
void	rotate_both(t_stack **head);

// rra -- reverse rotate a 
// shift down all elements of stack a by 1 -- the last element becomes the 1.
// rrb -- reverse rotate b
// shift down all elements of stack b by 1 -- the last element becomes the 1.
void	rev_rotate_ab(t_stack **head);

// rrr -- rra + rrb
void	rev_rotate_both(t_stack **head);
