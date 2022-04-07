# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:14:11 by mgulenay          #+#    #+#              #
#    Updated: 2022/04/07 17:45:25 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 	= 	push_swap

CC 		= 	gcc

CFLAGS 	= 	-Wall -Wextra -Werror

SRCS 	=	push_swap.c \
			sort_small.c \
			big_sort.c \
			operations.c \
			linkedlist_op.c \
			input_check.c \
			linkedlist.c \
			helper.c \
			
SRC_OBJS	=	$(SRCS:%.c=%.o)

RM          =	rm -f

all : $(NAME)

$(%.o): $(%.c)
	$(CC) -o $@ -c $^

$(NAME): $(SRC_OBJS) 
	$(CC) $(CFLAGS) -o $@ $(SRC_OBJS) $(LIBFT)

clean:
		$(RM) $(SRC_OBJS)
		
fclean:		clean
				$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
