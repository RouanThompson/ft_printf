/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:04:28 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/22 23:04:30 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** prints specifiers
*/

void    convert(toolshed *list)
{
	// call sub_spec
	if (list->format[list->i] == 'c' || list->format[list->i] == '%') //|| (format[i] == '.' && format[i + 1] == 'c')) //character
		ft_specifier_c(va_arg(list->va, void *));
	else if (list->format[list->i] == 's') //string
		ft_specifier_s(va_arg(list->va, void *));
	else if (list->format[list->i] == 'p') //memory address unsigned
		ft_specifier_p(va_arg(list->va, void *));
	else if ((list->format[list->i] == 'd') || (list->format[list->i] == 'i')) //decimal signed interger
		ft_specifier_di(va_arg(list->va, void *));
	else if (list->format[list->i] == 'x' || list->format[list->i] == 'X') //hex unsigned
		ft_specifier_x(va_arg(list->va, void *), list->format[list->i]);
	else if (list->format[list->i] == 'o') //unsigned octal
		ft_specifier_o(va_arg(list->va, void *), 'x');
	else if (list->format[list->i] == 'u') //unsigned decimal int
	    ft_specifier_u(va_arg(list->va, void *));
	else if (list->format[list->i] ==  '.' || list->format[list->i] == 'f') //lont int
		ft_specifier_f(list);
}
/*
** will have to rework the function to take a list
*/