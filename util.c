/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:24:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/02/26 11:58:18 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include push_swap.h

// check the input 
int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}


// check duplicate


// with non numeric parameters -- error
// with duplicate numeric parameters -- error
// with only numeric parameters but greater than maxint --- error

// without any parameters -- display nothing
// with valid parameters but with nonexisting actions -- error
// with valid parameters but with several spaces before/after the action -- error



// with duplicate numeric parameters -- error
void	ft_check_dublicate(int *src)
{
	int i;
	int j;
	int length;

	length = ft_length(src);
	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (src[i] == src[j])
			{
				write(2, "Error\n", 6);
				free(src);
				exit(1);
			}
		j++;
		}
	i++;
	}
}





