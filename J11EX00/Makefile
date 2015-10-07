# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schiad <schiad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/23 15:16:43 by schiad            #+#    #+#              #
#    Updated: 2015/07/23 16:10:53 by schiad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

HEADERS = ./includes

SRC = ./srcs/ft_display_file.c\
	  ./srcs/ft_putstr_fd.c\
	  ./srcs/ft_strlen.c\

OBJ = ./ft_display_file.o\
	  ./ft_putstr_fd.o\
	  ./ft_strlen.o\

MAIN = ./main

FLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) $(FLAGS) -I $(HEADERS)

clear:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
