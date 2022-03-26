/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:06:44 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/24 22:41:02 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* size_t	ft_length(int *n)
{
	size_t	length;

	length = sizeof(n) \ sizeof(n[0]);
	return (length);
}
*/

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


	/* print error  */
size_t	ft_strlen(const char *s)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

void	ft_putstr_fd(char *str, int fd)
{
	size_t length;

	if (!str)
		return ;
	length = ft_strlen(str);
	write(fd, str, length);
}


int	print_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (0);
}
