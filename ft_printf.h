/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:38:47 by rothomps          #+#    #+#             */
/*   Updated: 2019/06/01 14:38:50 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

/*
** FLags
*/
# define F_N  (1 << 0)
# define F_P  (1 << 1)
# define F_S  (1 << 2)
# define F_H  (1 << 3)
# define F_Z  (1 << 4)

/*
** Width
*/
# define W_N  (1 << 0)
# define W_A  (1 << 1)

/*
** Precision
*/
# define P_N  (1 << 0)
# define P_A  (1 << 1)

/*
** Modifiers
*/
# define M_HH (1 << 0)
# define M_H  (1 << 1)
# define M_I  (1 << 2)
# define M_II (1 << 3)
# define M_L  (1 << 4)

/*
** Specifiers
*/
# define S_C  (1 << 0)
# define S_S  (1 << 1)
# define S_DI (1 << 2)
# define S_P  (1 << 3)
# define S_X  (1 << 4)
# define S_O  (1 << 5)
# define S_U  (1 << 6)
# define S_F  (1 << 7)


typedef struct     s_printf
{
    int     i;
    int     flag;
    int     width;
    int     precision;
    int     modifier;
    int     specifier;
    char    *format;
    size_t  width_val;
    size_t  precision_val;
    size_t  len;
    size_t  tmp;
    va_list va;
}                  t_printf;
int     ft_printf(const char *format, ...);
void    convert(t_printf *q);
void    reset_t_printf(t_printf *q);
int     ft_search_dioux(const char c);
void    check_flags(t_printf *q);
void    width(t_printf *q);
void    width_printer(t_printf *q);
void    precision(t_printf *q);
void    modifiers(t_printf *q);
void    specifiers(t_printf *q);
int     ft_spec_c(t_printf *q);
int     ft_spec_s(t_printf *q);
int     ft_spec_p(t_printf *q);
int     ft_spec_di(t_printf *q);
int     ft_spec_x(t_printf *q);
int     ft_spec_o(t_printf *q);
int     ft_spec_u(t_printf *q);
void    ft_spec_f(t_printf *q);

#endif
