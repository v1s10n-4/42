# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 17:41:07 by rodaniel          #+#    #+#              #
#    Updated: 2018/11/05 18:42:29 by rodaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
	  $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)
			ar rc $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
