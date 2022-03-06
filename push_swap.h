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

# define INT_MIN -2147483648
# define INT_MAX 2147483647


typedef struct stack_all
{
	int *a;
	int *b;
	int length_a;
	int length_b;
	int length;

}    stack_data;


int	main(int argc, char *argv[]);


/* Check Input -- Detect Errors */
int 	check_integer(int argc, char *arg[]);
int		check_dublicate(int argc, char *argv[]);
int		check_overflow(int argc, char *argv[]);
int		check_if_sorted(stack_data *stack);

/* Helper Functions */
int		ft_atoi(const char *nptr);
size_t	ft_length(int *n);
int		print_error(char *str);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *s);



/* OPERATIONS */
void	sa(stack_data *stack);
void	sb(stack_data *stack);
void	ss(stack_data *stack);
void	pa(stack_data *stack);
void	pb(stack_data *stack);
void	ra(stack_data*stack);
void	rb(stack_data *stack);
void	rr(stack_data *stack);
void	rra(stack_data *stack);
void	rrb(stack_data *stack);
void	rrr(stack_data *stack);


/* sort input up to 5 integers */
void	sort_two(stack_data *stack);
void	sort_three(stack_data *stack);
void	sort_four(stack_data *stack);
void	sort_five(stack_data *stack);

#endif