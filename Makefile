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

B_FILES =	

OBJ		= $(FILES:.c=.o)

B_OBJ	= $(B_FILES:.c=.o)

%.o: %.c
	@ cc $(FLAGS) -c $< -o $@

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

main: fclean all
	cc main.c -fsanitize=address -g3 $(FLAGS) $(NAME)
	@ ./a.out
#	@ -rm -f a.out

.PHONY: all re bonus clean fclean
