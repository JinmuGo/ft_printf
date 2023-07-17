# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 13:49:09 by jgo               #+#    #+#              #
#    Updated: 2023/07/17 12:10:10 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef TOPDIR
		TOPDIR := $(abspath ../)
endif

include $(TOPDIR)/make_config/com/Color.mk
include $(TOPDIR)/make_config/com/Flags.mk
include $(TOPDIR)/make_config/com/Funcs.mk
include $(TOPDIR)/make_config/lib/Rules.mk

CPPFLAGS := -I$(TOPDIR)/includes

NAME := libftprintf.a

HEAD := ft_printf.h
SRCS := ft_printf.c \
		ft_printf_c.c \
		ft_printf_d.c \
		ft_printf_p.c \
		ft_printf_s.c \
		ft_printf_u.c \
		ft_printf_x.c \
		ft_putchar.c \
		ft_putstr.c \
		utils.c

OBJS := $(SRCS:.c=.o)
DEPS := $(SRCS:.c=.d)
-include $(DEPS)

include $(TOPDIR)/make_config/lib/SubLibsRecipes.mk