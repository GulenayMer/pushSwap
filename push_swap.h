/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/01 22:33:37 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int *a;
	int *b;

}    t_stack;


int	main(int argc, char *argv[]);


/* Check Input -- Detect Errors */
int 	check_integer(int argc, char *arg[]);
void	check_dublicate(int argc, char *argv[]);
int		check_overflow(int argc, char *argv[]);
int		check_if_sorted(t_stack *stack);

/* Helper Functions */
int	ft_atoi(const char *nptr);
size_t	ft_length(int *n);


/* OPERATIONS */
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);


/* sort input up to 5 integers */
void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *stack);
void	sort_five(t_stack *stack);

#endif
