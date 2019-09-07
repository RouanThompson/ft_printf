/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:26:28 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:26:30 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    unsigned_precision(t_printf *q, unsigned int d)
{
    q->len = ft_get_nbrlen(10, d);
    if (q->len < q->precision_val)//if .and number && u
    {
        q->precision_val = q->precision_val - q->len;
        while (q->precision_val != 0)
        {
            write(1, "0",1);
            q->precision_val--;
        }
    }
    ft_putstr(ft_uitoa(d));
    while (ft_isdigit(q->format[q->i]))
        q->i++;    
}

void    unsigned_width(t_printf *q, unsigned int d)
{
    q->len = ft_get_nbrlen(10, d); //
    if (!(q->precision & P_N))
    {
        if (q->width_val > q->len)
            q->width_val = q->width_val - q->len;
        else
            q->width_val = 0;
        while (q->width_val--)
            write(1, " ", 1);
        ft_putstr(ft_itoa(d));
    }
    else if ((q->precision & P_N))
    {
        width_printer(q);
        unsigned_precision(q, d);
    }
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}

int     ft_spec_u(t_printf *q)
{
    unsigned int d;

    d = va_arg(q->va, unsigned int);
    if (q->precision == 0 && q->width == 0) //if .u
        ft_putstr(ft_uitoa(d));
    else if (q->width & W_N) //if width
        unsigned_width(q, d);
    else if (q->precision & P_N)
        unsigned_precision(q, d);
    else
    {
        ft_putstr(ft_uitoa(d));//if . but no number && u
        q->i++;
    }
    return (0);
}