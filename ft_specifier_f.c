/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_f.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:45:12 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:45:14 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** make it prettier
*/
void     ft_spec_f(t_printf *q) //does not support negative numbers
{
	double d;

	d = va_arg(q->va, double);
    if (q->format[q->i] == 'f') ///need to check the actual position instead of if flag is present
		ft_putfloat(d, 6); //defualt to 6 precision if no '.'
	else if ((q->precision & P_N) || (q->precision & P_A) || (q->flag & F_H)) //if dot && if next ele is digit
	{
		//q->i++;
		//if PN
		ft_putfloat(d, ft_atoi(&q->format[q->i]));
		if (q->flag & F_H && (q->format[q->i] == '0' || q->format[q->i] == '.'))
		{
			write(1, ".", 1);
			q->i++;
		}
		while (ft_isdigit(q->format[q->i]))// while the next element is alpha-numeric skip. 
			q->i++;					// will be on alnum still but is iterated after last else
		//if PA
	}
	else //if '.' but no number
	{
		ft_putfloat(d, 0);
		q->i++;
	}
}
/*
** cant cast void * to double * ...due to alignement?
*/