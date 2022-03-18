/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/17 15:39:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	int				data;
	struct s_stack *next;

}	t_stack;

/*  */
int initialize_stack(int argc, char **argv, t_stack **head);
void sort(int argc, char **argv);


/* Check Input -- Detect Errors */
int 	check_integer(int argc, char **arg);
int		check_dublicates(int argc, char **argv);
int		check_overflow(int argc, char **argv);
int		check_if_sorted(int argc, char **argv);

/* Helper Functions */
int		ft_atoi(const char *nptr);
size_t	ft_length(int *n);
int		print_error(char *str);
void	ft_putstr_fd(char *str, int fd);
size_t	ft_strlen(const char *s);

/* nodes */
void	push(t_stack **head, int data);


/* OPERATIONS */
void	swap_ab(t_stack **head);
void	swap_both(t_stack **head);
void	push_ab(t_stack **head);
void	rotate_ab(t_stack **head);
void	rotate_both(t_stack **head);
void	rev_rotate_ab(t_stack **head);
void	rev_rotate_both(t_stack **head);


/* sort input up to 5 integers */
void	sort_two(t_stack **head);
void	sort_three(t_stack **head);
void	sort_four(t_stack **head);
void	sort_five(t_stack **head);
void	get_minimum(t_stack **head);

/* sort input integers > 5 */




#endif
