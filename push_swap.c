/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/18 17:48:41 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int initialize_stack(int argc, char **argv, t_stack **head)
{

	int length;
	int	i;
	int	j;

	length = argc - 1;
	stack->length_a = length;
	stack->length_b = 0;
	stack->a = malloc(length * sizeof(int));
	stack->b = malloc(length * sizeof(int));
	if (!(stack->a) | !(stack->b))
		return (0);
	i = 0;
	j = 1;
	while (i < length)
	{
		stack->a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	return (stack->a);
}

// argc the number of arguments pointed by char argv-- being passed 
// argc --- argument count, argv--- argument vector --
// *argv[] == **argv
void sort(int argc, char **argv)
{
	int length;

	length = argc - 1;
	if (length == 2)
		sort_two();
	else if (length == 3)
	
		sort_three();
	else if (length == 4)
		sort_four(4);
	else if (length == 5)
		sort_five();
	else
		sort_big();	
}



int	main(int argc, char *argv[])
{
	int	*input;
	int	length;
	stack_data	*stack;

	length = argc - 1;

	if (!input)
		return (0);
	if (argc < 2)
		return (0);
	if (check_input(input))
		return (print_Error("Error\n"));
	if (is_sorted(input))
	{
		free_all(input);
		return (0);
	}
	initialize_stack(argc, argv, stack);
	free_all(input);
	return (0);
}
