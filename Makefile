# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 23:13:11 by juanherr          #+#    #+#              #
#    Updated: 2024/09/29 23:13:15 by juanherr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = ft_printf.c ft_putchar.c ft_put_hex_low.c ft_put_hex_upp.c ft_putnbr.c \
	   ft_putptr.c ft_putstr.c ft_put_unsigned.c ft_put_perc.c len_num.c

NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
