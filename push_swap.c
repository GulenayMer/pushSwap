/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/16 06:06:32 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_input(t_stack **stack, char **argv)
{
	t_stack	*new;
	int		i;

	i = 1;
	while (argv[i])
	{
		new = ft_lst_new(ft_atoi(argv[i]));
		ft_lst_add_back(stack, new);
		i++;
	}
}

int	sort_small_size(t_stack *stack_a, t_stack *stack_b, int argc)
{
	if (argc == 3)
	{
		sort_two(&stack_a);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	else if (argc == 4)
	{
		sort_three(&stack_a);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	else if (argc == 5)
	{
		sort_four(&stack_a, &stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	else if (argc == 6)
	{
		sort_five(&stack_a, &stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}

int	check_input(int argc, char **argv)
{
	if (ft_check_duplicate(argc, argv) || check_numbers(argv))
	{
		ft_putstr_fd("Error\n", 2);
		exit(-1);
	}
	return (0);
}
//  || ft_check_integer(argv)|| ft_check_minmax(argv)
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || argc == 2)
		return (0);
	get_input(&stack_a, argv);
	check_input(argc, argv);
	if (check_if_sorted(&stack_a))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (0);
	}
	if (argc > 2 && argc < 7)
		sort_small_size(stack_a, stack_b, argc);
	else
	{
		indexing(&stack_a);
		radix_sort(&stack_a, &stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
	}
	return (0);
}
