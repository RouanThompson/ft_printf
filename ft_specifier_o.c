/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_o.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:19:07 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:19:09 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    octal_precision(t_printf *q, unsigned int d)
{
    q->len = ft_get_nbrlen(10, d);
    if (q->len < q->precision_val)
    {
        q->precision_val = q->precision_val - q->len;
        while (q->precision_val != 0)//if .and number && u
        {
            write(1, "0",1);
            q->precision_val--; 
        }
    }
    ft_putstr(ft_ultoa_base(8, d, 'x'));
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}

void    octal_width(t_printf *q, size_t d)
{
    q->len = ft_get_nbrlen(10, d); //same as unsigned_width
    if (!(q->precision & P_N))
    {
        if (q->width_val > q->len)
            q->width_val = q->width_val - q->len;
        else
            q->width_val = 0;
        while (q->width_val--)
            write(1, " ", 1);
        ft_putstr(ft_ultoa_base(8, d, 'x'));
    }
    else if ((q->precision & P_N))
    {
        width_printer(q);
        octal_precision(q, d);
    }
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}
int     ft_spec_o(t_printf *q)
{
    size_t  d;

    d = va_arg(q->va, size_t);
    if (q->flag & F_H)
        write(1, "0", 2);
    if (q->precision == 0 && q->width == 0)
        ft_putstr(ft_ultoa_base(8, d, 'x'));
    else if (q->width & W_N)
        octal_precision(q, d);
    else if (q->precision & P_N)
        octal_precision(q, d);
    else
    {
        ft_putstr(ft_ultoa_base(8, d, 'x'));//if . but no number && u
        q->i++;
    }
    return (0);
}

