# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 12:56:36 by jgo               #+#    #+#              #
#    Updated: 2022/10/03 11:43:13 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_itoa_base.c \
		ft_itoa.c \
		ft_putstr.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_putchar.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	ar -rcs $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
