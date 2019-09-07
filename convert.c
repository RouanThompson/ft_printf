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
** check flags(no conversion yet must code it) then specifiers(converts)
*/

void    convert(t_printf *q)
{
	check_flags(q);
	if (q->specifier & S_C) //char
		ft_spec_c(q);
	else if (q->specifier & S_S) //string
		ft_spec_s(q);
	else if (q->specifier & S_P) //memory address unsigned
		ft_spec_p(q);
	else if (q->specifier & S_DI) //decimal signed interger
		ft_spec_di(q);
	else if (q->specifier & S_X) //hex unsigned
		ft_spec_x(q);
	else if (q->specifier & S_O) //unsigned octal
		ft_spec_o(q);
	else if (q->specifier & S_U) //unsigned decimal int
	    ft_spec_u(q);
	else if (q->specifier & S_F) //lont int
		ft_spec_f(q);
}
/*
** will have to rework the function to take a list
*/