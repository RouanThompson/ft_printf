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



int      ft_printf(const char *format, ...);
void     convert(toolshed *list);


#endif
