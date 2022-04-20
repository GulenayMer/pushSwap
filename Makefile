# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:14:11 by mgulenay          #+#    #+#              #
#    Updated: 2022/04/09 20:10:13 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 	= 	push_swap

CC 		= 	gcc

CFLAGS 	= 	-Wall -Wextra -Werror

SRCS 	=	push_swap.c \
			sort_small.c \
			big_sort.c \
			operations.c \
			operations2.c \
			operations3.c \
			linkedlist_op.c \
			input_check.c \
			linkedlist.c \

LIBFT		= libft/libft.a

SRC_OBJS	=	$(SRCS:%.c=%.o)

RM          =	rm -f

$(NAME): $(SRC_OBJS)
	make -C libft/
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_OBJS) $(LIBFT)

all : $(NAME)

clean:
		$(RM) $(SRC_OBJS)
		make clean -C libft/
		
fclean:		clean
				$(RM) $(NAME)
			make fclean -C libft/

re: 		fclean all

.PHONY: all clean fclean re
