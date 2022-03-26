/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/24 22:44:36 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
#include <stdio.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647


typedef struct s_stack
{
	int				data;
	struct s_stack *next;

}	t_stack;


/*  */
t_stack	*create_stack(t_stack **stack_a, int argc, char **argv);
void	sort_small_size(t_stack *stack_a, t_stack *stack_b, int argc);

/* Check Input -- Detect Errors */
int 	check_integer(int argc, char **arg);
int		check_duplicate(int argc, char **argv);
int		check_overflow(int argc, char **argv);
int		check_if_sorted(t_stack **stack);
int		ft_is_digit(int c);

/* Helper Functions */
int		ft_atoi(const char *nptr);
size_t	ft_length(int *n);
int		print_error(char *str);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *s);

/* Linked list utilities */
void	push_to_top(t_stack **head, int new_data);
void 	add_to_end(t_stack **head, int new_data);
void 	printList(t_stack *head);
t_stack	*ft_lstnew(int new_data);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_free(t_stack **stack_a);

/* all in one */
void	swap_ab(t_stack **head);
void	rotate_ab(t_stack **head);
void	rev_rotate_ab(t_stack **head);

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
void	push_to_a(t_stack **head_a, t_stack  **head_b);
void	push_to_b(t_stack **head_a, t_stack  **head_b);

/* sort input up to 5 integers */
void	sort_two(t_stack **head);
void	sort_three(t_stack **head);
void	sort_four(t_stack **head_a, t_stack **head_b);
void	sort_five(t_stack **head, t_stack **head_b);
int		get_minimum(t_stack **head);

/* sort input integers > 5 */



#endif
