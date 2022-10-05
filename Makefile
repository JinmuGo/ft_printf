# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 06:21:39 by jgo               #+#    #+#              #
#    Updated: 2022/10/03 11:43:11 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_printf_c.c \
		ft_printf_d.c \
		ft_printf_p.c \
		ft_printf_s.c \
		ft_printf_u.c \
		ft_printf_x.c \

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBDIR = ./libft

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(LIBDIR)

$(NAME): $(OBJS)
	make all -C $(LIBDIR)
	cp $(LIBDIR)/libft.a ./$@
	ar -rcs $@ $^

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBDIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBDIR)

re: fclean all

.PHONY: all clean fclean re
