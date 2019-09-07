/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 04:24:26 by rothomps          #+#    #+#             */
/*   Updated: 2019/09/02 04:24:28 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    width_printer(t_printf *q)
{
    q->tmp = q->precision_val;
    if (q->precision_val < q->len)
        q->precision_val = q->len;
    if (q->width_val > q->precision_val)
        q->width_val = q->width_val - q->precision_val;
    else
        q->width_val = 0;
    while (q->width_val--)
        write(1, " ", 1);
    q->precision_val = q->tmp;
}