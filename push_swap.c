/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:14:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/03/03 21:42:13 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



// argc the number of arguments pointed by char argv-- being passed 
// argc --- argument count, argv--- argument vector --
// *argv[] == **argv
int	main(int argc, char *argv[])
{
	int	*input;
	int	length;

	length = argc - 1;

	input = (int *)malloc((length) * sizeof(int));
	if (!input)
		return (0);
	if (argc < 2)
		return (0);

	free_mem();
	return (0);
}
