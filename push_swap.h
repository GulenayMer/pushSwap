/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 21:19:17 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/* Struct Definition */
typedef struct s_stack
{
	int						data;
	int						index;
	struct s_stack			*next;

}							t_stack;

/* Check Input -- Detect Errors */
int		ft_check_integer(int argc, char **argv);
int		ft_check_duplicate(int argc, char **argv);
int		ft_check_minmax(char **argv);
int		check_if_sorted(t_stack **stack);
int		ft_is_valid(int argc, char **argv);
int		check_input(int argc, char **argv);

/* Linked List Utilities */
t_stack	*ft_lst_new(int new_data);
t_stack	*ft_lst_last(t_stack *head);
void	ft_lst_add_back(t_stack **head, t_stack *new);
int		ft_lst_size(t_stack *lst);
void	free_stack(t_stack **stack);

/* OPERATIONS */
void	swap_a(t_stack **head);
void	swap_b(t_stack **head);
void	swap_both(t_stack **head);
void	rotate_a(t_stack **head);
void	rotate_b(t_stack **head);
void	rotate_both(t_stack **head);
void	rev_rotate_a(t_stack **head);
void	rev_rotate_b(t_stack **head);
void	rev_rotate_both(t_stack **head);
void	push_to_a(t_stack **head_a, t_stack **head_b);
void	push_to_b(t_stack **head_a, t_stack **head_b);
void	swap_ab(t_stack **head);
void	rotate_ab(t_stack **head);
void	rev_rotate_ab(t_stack **head);

/* sort input up to 5 integers */
void	sort_two(t_stack **head);
void	sort_three(t_stack **head);
void	sort_three_add(t_stack **head);
void	sort_four(t_stack **head_a, t_stack **head_b);
void	sort_five(t_stack **head, t_stack **head_b);
int		get_minimum(t_stack **head);

/* sort input integers > 5 */
int		get_max_bits(t_stack **stack);
int		count_max_bits(int max_number, int max_bits);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*get_min(t_stack **stack);
void	indexing(t_stack **stack_a);
int		get_maximum(t_stack **stack);

/*  */
void	get_input(t_stack **stack, char **argv);
int		sort_small_size(t_stack *stack_a, t_stack *stack_b, int argc);
#endif
