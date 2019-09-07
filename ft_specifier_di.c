/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_di.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:54:26 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 15:54:29 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


void    di_precision(t_printf *q, int d)
{
    q->len = ft_get_nbrlen(10, d);
    if (q->len < q->precision_val)//if .and number && d
    {
        q->precision_val = q->precision_val - q->len;
        if(d < 0)
        {
            write(1, "-",1);
            d = d * -1;
        }
        while (q->precision_val != 0)
        {
            write(1, "0",1);
            q->precision_val--; 
        }
    }
    ft_putstr(ft_itoa((int)d));
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}

void    di_width(t_printf *q, int d)
{
    if (d < 0 && q->width_val > 0)
        q->width_val--;
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
        di_precision(q, d);
    }
    while (ft_isdigit(q->format[q->i]))
        q->i++;
}
int     ft_spec_di(t_printf *q) //does not support negative numbers
{
    int d;

    d = va_arg(q->va, int);
    if (q->precision == 0 && q->width == 0)   //if d
        ft_putstr(ft_itoa(d));
    else if (q->width & W_N) //if width
        di_width(q, d);
    else if (q->precision & P_N) // if . and number
        di_precision(q, d);
    else
    {
        ft_putstr(ft_itoa(d));//if . but no number after
        q->i++;
    }
    return (0);
}
