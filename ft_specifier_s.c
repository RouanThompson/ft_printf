/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:37:13 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 15:37:14 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void    str_precision(t_printf *q, char *d)
{
    ft_putstr_precision(d, q->precision_val);
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}

void    str_width(t_printf *q, char *d)
{
    q->len = ft_strlen(d); //
    if (!(q->precision & P_N))
    {
        if (q->width_val > q->len)
            q->width_val = q->width_val - q->len;
        else
            q->width_val = 0;
        while (q->width_val--)
            write(1, " ", 1);
        ft_putstr(d);
    }
    else if ((q->precision & P_N))
    {
        if (q->precision_val > q->len)
            q->precision_val = q->len;
        q->width_val = q->width_val - q->precision_val;
        while (q->width_val--)
            write(1, " ", 1);
        str_precision(q, d);
    }
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}

int     ft_spec_s(t_printf *q)
{
    char *d;
    
    d = va_arg(q->va, char *);
    if (d)
    {
        if (q->precision == 0 && q->width == 0)   //if s
            ft_putstr(d);
        else if (q->width & W_N)
            str_width(q, d);
        else if (q->precision & P_N) //if . and number
            str_precision(q, d);
        else //if . no number
            q->i++;
    }
    else
        ft_putstr("(null)");
    return (0);   
}