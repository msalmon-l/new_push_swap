# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 20:46:03 by msalmon-          #+#    #+#              #
#    Updated: 2023/03/10 18:25:36 by msalmon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra 

.c.o:
			${CC} -c $< -o $@

SRCS	= ft_atoi.c ft_error.c ft_swap.c ft_check_input.c main.c ft_go_to_order.c \
		  ft_movement_operations.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstsize.c \
		  ft_free.c ft_lstprint.c ft_putnbr_fd.c ft_lstadd_front.c

OBJS	= ${SRCS:.c=.o}

NAME	= push_swap

all:	${NAME}
${NAME}:	${OBJS}
				${CC} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	clean fclean re bonus all
