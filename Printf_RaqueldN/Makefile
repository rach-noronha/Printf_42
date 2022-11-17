# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 21:33:11 by rde-noro          #+#    #+#              #
#    Updated: 2022/11/08 21:33:20 by rde-noro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c printf_numeric.c printf_alpha.c
OBJS	= $(SRCS:.c=.o)
CC			= gcc -c
CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	ar -rcs ${NAME} ${OBJS}
	ar -t ${NAME}

${OBJS}:
	${CC} ${CFLAGS} ${@:.o=.c}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
