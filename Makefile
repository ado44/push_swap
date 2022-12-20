# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarna <amarna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 12:21:08 by amarna            #+#    #+#              #
#    Updated: 2022/12/20 18:27:53 by amarna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = instructions/swap.c instructions/reverse_rotate.c  instructions/rotate.c  instructions/push.c push_swap_utils.c push_swap.c radix_sort.c sorting.c push_swap_utils_2.c sorting_utils.c radix_sort_utils.c

OBJ = ${SRC:.c=.o}

${NAME}: ${OBJ}
		@${CC} ${CFLAGS} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: clean fclean all re
