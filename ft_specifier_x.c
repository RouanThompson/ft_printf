/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:00:57 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:00:58 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_spec_x(t_printf *q)
{
    int precision;
    size_t  d;
    
    precision = 0;
    d = va_arg(q->va, size_t);
    if (q->flag == F_H)
    {
        if (q->format[q->i] == 'x')
            write(1, "0x", 2);
        else
            write(1, "0X", 2);
    }
	if (q->format[q->i] == 'x' || q->format[q->i] == 'X')
        ft_putstr(ft_ultoa_base(16, d, q->format[q->i]));
    else if (q->precision & P_N)
    {
        //q->i++;
        if ((int)ft_get_nbrlen(10, d) < (precision = ft_atoi(&q->format[q->i])))//if .and number && d
        {
            precision = precision - (int)ft_get_nbrlen(10, d);
            while (precision != 0)
            {
                write(1, "0",1);
                precision--; 
            }
        }
        ft_putstr(ft_ultoa_base(16, d, q->format[q->i]));
        while (ft_isdigit(q->format[q->i]))
            q->i++;
    }
    else
    {
        ft_putstr(ft_ultoa_base(16, d, q->format[q->i]));//if . but no number after
        q->i++;
    }
    return (0);
}
