/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/04/16 06:08:42 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Check if it is an integer */
/*int	ft_check_integer(int argc, char **argv)
{
	int	i;

	while (--argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			if (ft_isdigit(argv[argc][i]) || argv[argc][i] == '-'
				|| argv[argc][i] == '+')
				i++;
			else if (ft_isalpha(argv[argc][i]) == 1 || argv[argc][i] == '.'
			|| (argv[argc][i] == '-' && (argv[argc][i]) == '\0')
			|| (argv[argc][i] == '+' && (argv[argc][i]) == '\0'))
				return (1);
		}
	}
	return (0);
}*/

int	check_numbers(char **av)
{
	int		i;
	int		j;

	i = -1;
	if (!av[0])
	{
		ft_putstr_fd("Error\n", 2);
		exit(-1);
	}
	while (av[++i])
	{
		j = -1;
		if (ft_check_minmax(&av[i]) == 0)
		{
			ft_putstr_fd("Error\n", 2);
			exit(-1);
		}
		while (av[i][++j])
		{
			if (ft_isalpha(av[i][j]) == 1 || av[i][j] == '.'
			|| ((av[i][j]) == '-' && (av[i][j +1]) == '\0')
			|| ((av[i][j]) == '+' && (av[i][j +1]) == '\0'))
			{
				ft_putstr_fd("Error\n", 2);
				exit(-1);
			}		
		}
	}
		return (1);
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
