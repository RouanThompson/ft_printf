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

NAME = libftprintf.a

HEAD = ft_printf.h

GCC = gcc

FLAGS = -g -Wall -Wextra -Werror

LIBFLAGS = -L./libft -lft

LIBFT = libft

LIB = libft.a

SRC = convert.c ft_printf.c check_flags.c ft_specifier_c.c ft_specifier_di.c\
		ft_specifier_f.c ft_specifier_o.c ft_specifier_p.c ft_specifier_s.c\
		ft_specifier_u.c ft_specifier_x.c ft_search_dioux.c width_printer.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

exe:
	make -C libft
	$(GCC) $(FLAGS) $(SRC) main.c -I. -I./libft $(LIBFLAGS) -g -fsanitize=address -o libftprintf

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

burn:
	rm -rf libftprintf libftprintf.dSYM

.PHONY: exe all clean fclean re norm
