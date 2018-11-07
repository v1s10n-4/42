# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 17:41:07 by rodaniel          #+#    #+#              #
#    Updated: 2018/11/07 19:11:22 by rodaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./*.c
HEADER = ./libft.h
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
OBJ = ./*.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)
			ar rc $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
