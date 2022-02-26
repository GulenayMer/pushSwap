/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:06:44 by mgulenay          #+#    #+#             */
/*   Updated: 2022/02/26 11:54:38 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include push_swap.h

size_t	ft_length(int *n)
{
	size_t	length;

	length = sizeof(n) \ sizeof(n[0]);
	return (length);
}


