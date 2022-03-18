# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 21:14:11 by mgulenay          #+#    #+#              #
#    Updated: 2022/02/24 21:20:25 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 	= 	push_swap.a

CC 		= 	gcc

CFLAGS 	= 	-Wall -Wextra -Werror

SRCS 	=	push_swap.c \
			input_check.c \
			helper.c \
			sort_small.c \
			sort_big.c \
			actions.c \
			
SRC_OBJS	=	$(SRCS:.c=.o)

RM          =	rm -f

all : $(NAME)

$(NAME): $(SRC_OBJS)
	ar rcs $(NAME) $(SRC_OBJS)

clean:
		$(RM) $(SRC_OBJS)

fclean:		clean
				$(RM) $(NAME)
	
re: 		fclean all

.PHONY: all clean fclean re
