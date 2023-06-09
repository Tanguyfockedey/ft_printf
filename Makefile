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
FILES	=	src/ft_printf.c \
			src/ft_putunbr_base.c \
			src/ft_spec_char.c \
			src/ft_spec_decimal.c \
			src/ft_spec_hexalower.c \
			src/ft_spec_hexaupper.c \
			src/ft_spec_pointer.c \
			src/ft_spec_string.c \
			src/ft_spec_unsigned.c

OBJ		= $(FILES:.c=.o)

%.o: %.c
	@ cc $(FLAGS) -c $< -o $@
	@ printf "."


re: fclean all

all: $(NAME)

$(NAME): libft $(OBJ)
	@ printf "\n"
	@ ar -r $(NAME) $(OBJ)
	@ echo create libftprintf.a

libft: 
	@ $(MAKE) -C libft
	@ mv libft/libft.a libftprintf.a

clean:
	@ rm -f $(OBJ)
	@ $(MAKE) clean -C libft
	@ echo delete .o

fclean: clean
	@ rm -f $(NAME)
	@ echo delete $(NAME)

main: all
	cc main.c -fsanitize=address -g3 $(NAME)
	@ ./a.out
	@ -rm -f a.out

.PHONY: all re libft clean fclean
