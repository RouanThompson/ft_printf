/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:54:19 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/31 14:50:03 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

//printf needs to return the number of characters printed
void reset_t_printf(t_printf *q)
{
	q->flag = 0;
    q->width = 0;
    q->precision = 0;
    q->modifier = 0;
    q->specifier = 0;
	q->width_val = 0;
	q->precision_val = 0;
	q->len = 0;
	q->tmp = 0;
}
int		ft_printf(const char *format, ...) ///has the elpisis as a list
{
	t_printf	q;
	
	ft_bzero(&q, sizeof(q));
	q.format = (char *)format;					/*reset the flags*/
	va_start(q.va, format);
	while (q.format[q.i] != '\0')
	{
		if (q.format[q.i] == '%')
		{
			q.i++;
			convert(&q);
			reset_t_printf(&q);
		}
		else
			ft_putchar(q.format[q.i]);
		q.i++;
	}
	va_end(q.va);
	return (0);
}

