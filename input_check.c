/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/05 21:40:20 by mgulenay         ###   ########.fr       */
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
	
	i = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]))
			write(2, "Error\n", 6);
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
		if (input < INT_MIN || input > INT_MAX) 
		{
			write(2, "Error\n", 6);
			return (1);
		}
	argc--;
	}
	return (0);
}


// with duplicate numeric parameters -- error
int check_dublicate(int argc, char *argv[])
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
			{	
				write(2, "Error\n", 6);
				return (1);
			}
		j++;
		}
	i++;
	}
return (0);
}


// check if it is already sorted
int		check_if_sorted(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i])> ft_atoi(argv[i + 1]))
		return (0);
		i++;
	}
	return (1);
}

