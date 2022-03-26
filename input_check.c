/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/17 15:33:26 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 1) with non numeric parameters -- error
   2) with duplicate numeric parameters -- error
   3) with only numeric parameters but greater than maxint --- error


   4) without any parameters -- display nothing
   5) with valid parameters but with nonexisting actions -- error
   6) with valid parameters but with several spaces before/after the action -- error
*/

/* */
int	ft_is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_integer(int argc, char **argv)
{
	int i;
	
	while (--argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			if (ft_is_digit(argv[argc][i]) || argv[argc][i] == '-'
				|| argv[argc][i] == '+')
				i++;
			else
				return (1);
		}
	}
	return (0);
}

// with duplicate numeric parameters -- error
int check_duplicate(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}


// overflow integer range
int	check_overflow(int argc, char **argv)
{
	//int input;
	//input = ft_atoi(argv[argc]);
	while (--argc > 0)
	{
		if (ft_atoi(argv[argc]) < INT_MIN || ft_atoi(argv[argc]) > INT_MAX) 
			return (1);
		//argc--;
	}
	return (0);
}


// check if it is already sorted
int		check_if_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;
		else
			return (1);
	}
	return (0);
}
