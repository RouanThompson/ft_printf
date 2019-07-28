# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 12:36:55 by rothomps          #+#    #+#              #
#    Updated: 2019/06/24 19:46:12 by rothomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf

HEAD = ft_printf.h

GCC = gcc

FLAGS = -g -Wall -Wextra -Werror

LIBFLAGS = -L./libft -lft

LIBFT = libft

LIB = libft.a

SRC = ft_printf.c convert.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft
	$(GCC) $(FLAGS) $(SRC) -I. -I./libft $(LIBFLAGS) -g -fsanitize=address -o libftprintf

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: exe all clean fclean re norm
