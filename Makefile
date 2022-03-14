# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 14:57:11 by tfockede          #+#    #+#              #
#    Updated: 2022/02/17 14:57:11 by tfockede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
FLAGS	= -Wall -Wextra -Werror
FILES	=	SRCS/ft_printf.c \
			SRCS/ft_putunbr_base.c \
			SRCS/ft_spec_char.c \
			SRCS/ft_spec_decimal.c \
			SRCS/ft_spec_hexalower.c \
			SRCS/ft_spec_hexaupper.c \
			SRCS/ft_spec_pointer.c \
			SRCS/ft_spec_string.c \
			SRCS/ft_spec_unsigned.c

B_FILES =	

OBJ		= $(FILES:.c=.o)

B_OBJ	= $(B_FILES:.c=.o)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

re: fclean all

all: $(NAME)

$(NAME): libft $(OBJ)
	@ ar -rc $(NAME) $(OBJ)
	@ echo create all

bonus: $(B_OBJ)
	@ ar -rc $(NAME) $(B_OBJ)
	@ echo create bonus

libft: 
	@ $(MAKE) -C LIBS

clean:
	@ rm -f $(OBJ) $(B_OBJ)
	@ echo delete .o

fclean: clean
	@ rm -f $(NAME)
	@ echo delete $(NAME)

main: all
	cc main.c -fsanitize=address -g3 $(FLAGS) $(NAME) LIBS/libft.a
	@ ./a.out
#	@ -rm -f a.out

.PHONY: all re bonus clean fclean
