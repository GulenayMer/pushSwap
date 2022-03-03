/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/03 21:57:25 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* with non numeric parameters -- error
   with duplicate numeric parameters -- error
   with only numeric parameters but greater than maxint --- error
   without any parameters -- display nothing
   with valid parameters but with nonexisting actions -- error
   with valid parameters but with several spaces before/after the action -- error
*/

/* */
int	check_integer(int argc, char *argv[])
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		ft_atoi(argv[i]);
		i++;
	}
return (1);	
}

// overflow integer range
int	check_overflow(int argc, char *argv[])
{
	int input;

	input = ft_atoi(argv[argc]);
	while (argc > 0)
	{
		if (input < -2147483649 || input > 2147483648) 
		{
			write(2, "Error\n", 6);
			exit(1);
		}
	argc--;
	}
}


// with duplicate numeric parameters -- error
void	check_dublicate(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(2, "Error\n", 6);
				exit(1);
			}
		j++;
		}
	i++;
	}
}


// check if it is already sorted
int		check_if_sorted(t_stack *stack)
{
	int i;

	i = 0;
	while (stack->a[i] < stack->a[i + 1])
	i++;
	return (1);
}

