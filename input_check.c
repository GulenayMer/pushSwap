/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/09 19:56:29 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Check if it is an integer */
int	ft_check_integer(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		if ((argv[i][0] == '-' && argv[i][1] == '\0')
			|| (argv[i][0] == '+' && argv[i][1] == '\0'))
		{
			ft_putstr_fd("Error\n", 2);
			exit(-1);
			return (1);
		}
		if (argv[i][0] == '+' || argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
				j++;
		}
		i++;
	}
	return (0);
}

/*check if it has duplicate numeric parameters -- error */
int	ft_check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

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

/* check max -- min integer range -- error */
int	ft_check_minmax(char **argv)
{
	int		i;
	long	tmp;

	i = 0;
	while (argv[i])
	{
		tmp = ft_atoi(argv[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

/* check if it is already sorted */
int	check_if_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
