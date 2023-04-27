# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 14:14:17 by tafocked          #+#    #+#              #
#    Updated: 2023/04/27 14:14:17 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

FILES	=	src/ft_printf.c \
			src/ft_putunbr_base.c \
			src/ft_spec_char.c \
			src/ft_spec_decimal.c \
			src/ft_spec_hexalower.c \
			src/ft_spec_hexaupper.c \
			src/ft_spec_pointer.c \
			src/ft_spec_string.c \
			src/ft_spec_unsigned.c

cc		= cc
FLAGS	= -Wall -Wextra -Werror
OBJ		= $(FILES:.c=.o)

re: fclean all

all: $(NAME)

$(NAME):  $(OBJ)
	ar -rcu $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
