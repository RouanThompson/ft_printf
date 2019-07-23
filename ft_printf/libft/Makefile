# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rothomps <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 16:10:23 by rothomps          #+#    #+#              #
#    Updated: 2019/02/08 14:30:58 by rothomps         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = libft.h

SRC =	ft_bzero.c ft_isdigit.c ft_itoa_base.c ft_putchar.c ft_putlong.c\
		ft_strcpy.c ft_strnew.c ft_ultoa_base.c ft_atoi.c ft_get_nbrlen.c\
		ft_itoa.c ft_memset.c ft_putfloat.c ft_putstr.c ft_strdel.c\
		ft_uitoa.c ft_ltoa_base.c ft_specifier_c.c ft_specifier_s.c\
		ft_specifier_p.c ft_specifier_di.c ft_specifier_x.c ft_specifier_o.c\
		ft_specifier_u.c ft_specifier_f.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re norm
