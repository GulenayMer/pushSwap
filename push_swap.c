/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/24 22:43:41 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack	*create_stack(t_stack **stack_a, int argc, char **argv)
{
	int	i;
	
	*stack_a = ft_lstnew(ft_atoi(argv[1]));
	i = 2;
	while (i < argc)
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return(*stack_a);
}

void	sort_small_size(t_stack *stack_a, t_stack *stack_b, int argc)
{
	if (argc == 3)
		sort_two(&stack_a);
	else if (argc == 4)
		sort_three(&stack_a);
	else if (argc == 5)
		sort_four(&stack_a, &stack_b);
	else if (argc == 6)
		sort_five(&stack_a, &stack_b);
	return ;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	create_stack(&stack_a, argc, argv);
	stack_b = (t_stack *)malloc(sizeof(t_stack));

	if (argc == 1 || argc == 2)
		return (0);
	if (check_duplicate(argc, argv) || check_integer(argc, argv) || check_overflow(argc, argv))
	{
		print_error("Error\n");
		exit (-1);
	}
	if (argc > 2 && argc < 7)
		sort_small_size(stack_a, stack_b, argc);
	ft_free(&stack_a);
	return (0);
}




//printList(stack_a);
	/* int a; 
	a = get_minimum(&stack_a);
	printf("%d", a); */

	//printf("\nNumber Of Arguments Passed: %d\n",argc);
	//sort_two(&stack_a);
	//sort_three(&stack_a);
	//stack_b = (t_stack *)malloc(sizeof(t_stack));

		/* if (check_integer(argc, argv) || check_overflow(argc, argv) || check_dublicates(argc, argv)
		|| check_if_sorted(argc, argv))
		return (0); */