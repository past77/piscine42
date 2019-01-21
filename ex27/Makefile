# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 16:16:11 by ppolozhe          #+#    #+#              #
#    Updated: 2018/10/31 18:21:37 by ppolozhe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror
SOURCE = display_file.c
HEADER = -I str.h
COMPILE = gcc $(CFLAGS) -c -I $(HEADER) 
OBJECTS = display_file.o

all: $(NAME)

$(NAME) :
	$(COMPILE) $(SOURCE) $(HEADER)
	gcc $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
