# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 16:16:11 by ppolozhe          #+#    #+#              #
#    Updated: 2018/10/31 16:58:03 by ppolozhe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./srcs/
HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror
COMPILE = gcc $(CFLAGS) -c -I $(HEADER) 
SRC = $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c $(SOURCE)ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME):wq:wq

$(NAME) :
	$(COMPILE) $(SRC)
	ar rc $(NAME) $(OBJECTS)	

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
