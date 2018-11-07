# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 17:41:07 by rodaniel          #+#    #+#              #
#    Updated: 2018/11/06 23:31:59 by rodaniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRC = ./ft_display_file.c

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(SRC) -o $(NAME)
clean: all
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
