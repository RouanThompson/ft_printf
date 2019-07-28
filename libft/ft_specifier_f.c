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

#include "libft.h"

void     ft_specifier_f(toolshed *list)
{
	double d;

	d = va_arg(list->va, double);
    if(list->format[list->i] == 'f')
		ft_putfloat(d, 6); //defualt to 6 precision if no '.'
	else if (list->format[list->i] ==  '.' && ft_isdigit(list->format[list->i + 1])) //if dot && if next ele is digit
	{
		list->i++;
		ft_putfloat(d, ft_atoi(&list->format[list->i]));
		while (ft_isdigit(list->format[list->i]))// while the next element is alpha-numeric skip. 
			list->i++;					// will be on alnum still but is iterated after last else
	}
	else
	{
		ft_putfloat(d, 0); //if '.' but no number
		list->i++;
	}
}
/*
** cant cast void * to double * ...due to alignement?
**
*/