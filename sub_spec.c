/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:56:31 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/23 16:56:33 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** 
*/

void    sub_spec_conversion(const char *format, int i) //just pass in the list make me feel better
{
    if (format[i] == '-')
        l.flag = F_N;    
    else if (format[i] == '+')
        l.flag = F_P;
    else if (format[i] == ' ')
        l.flag = F_S;
    else if (format[i] == '#')
        l.flag = F_H;
    else if (format[i] == '0')
        l.flag = F_Z;
    else
        width(format);
}

void    width(const char *format, int i)
{
    if (format[i] == ft_isdigit(*format))
        l.width = W_N;
    else if (format[i] == '+')
        l.width = W_A;
    else
        precision(format);
}

void    precision(const char *format, int i)
{
    if (format[i] == ft_isdigit(*format))
        l.precision = P_N;
    else if (format[i] == '+')
        l.precision = P_A;
    else
        modifiers(format);
}

void    modifiers(const char *format, int i)
{
    if (format[i] == '-')
        l.modifiers = M_HH;    
    else if (format[i] == '+')
        l.modifiers = M_H;
    else if (format[i] == ' ')
        l.modifiers = M_I;
    else if (format[i] == '#')
        l.modifiers = M_II;
    else if (format[i] == '0')
        l.modifiers = M_L;
    else
        specifiers(format);
}

void    specifiers(const char *format, int i)
{
    if (format[i] == '-')
        l.modifiers = S_C;    
    else if (format[i] == '+')
        l.modifiers = S_S;
    else if (format[i] == ' ')
        l.modifiers = S_DI;
    else if (format[i] == '#')
        l.modifiers = S_P;
    else if (format[i] == '0')
        l.modifiers = S_X;
    else if (format[i] == ' ')
        l.modifiers = S_O;
    else if (format[i] == '#')
        l.modifiers = S_U;
    else if (format[i] == '0')
        l.modifiers = S_F;
//ends goes to convert...do i even need *specifirs function? since i have convert?
}