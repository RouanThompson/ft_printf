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

int     ft_specifier_f(double d, const char *format, int i)
{
    if(format[i] == 'f')
		ft_putfloat(d, 6); //defualt to 6 precision if no '.'
	else if (format[i] ==  '.' && ft_isdigit(format[i + 1])) //if precision and number specified
	{
		i++;
		ft_putfloat(d, ft_atoi(&format[i]));
		while (ft_isdigit(format[i]))// while the next element is alpha-numeric skip. 
			i++;					// will be on alnum still but is iterated after last else
	}
	else
	{
		ft_putfloat(d, 0); //if '.' but no number
		i++;
	}
    return (i);
}
/*
** cant cast void * to double * ...due to alignement?
**
*/