/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:02:57 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 14:02:58 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    char_width(t_printf *q)
{
    while (q->width_val-- > 1)
        write(1, " ", 1);
}

int     ft_spec_c(t_printf *q)
{
    int d;

    d = va_arg(q->va, int);
    if (q->format[q->i] == '%')
        d = 37;
    else if (q->width & W_N)
        char_width(q);
    ft_putchar(d);
    return (0);
}
