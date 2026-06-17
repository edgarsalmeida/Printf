# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edgda-si <edgda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/15 15:48:20 by edgda-si          #+#    #+#              #
#    Updated: 2026/06/16 18:12:08 by edgda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Remova o main.c daqui para a entrega oficial
SRCS = ft_printf.c \
        ft_putchar.c \
        ft_strchar.c \
		ft_putstr.c \
		ft_putptr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
        
OBJS = $(SRCS:.c=.o)

all: $(NAME)

# Aqui usamos o 'ar rcs' para empacotar os .o em uma biblioteca estática
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
