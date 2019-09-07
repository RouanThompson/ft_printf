/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:56:31 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/23 16:56:33 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
** functions check for respective flags associated with its category
*/

void    check_flags(t_printf *q) //just pass in the list makes me feel better
{ //if any statment is true must move the index
    if (q->format[q->i] == '-' && q->i++)
        q->flag |= F_N;
    else if (q->format[q->i] == '+' && q->i++)
        q->flag |= F_P;
    else if (q->format[q->i] == ' ' && q->i++)
        q->flag |= F_S;
    else if (q->format[q->i] == '#' && q->i++)
        q->flag |= F_H;
    else if (q->format[q->i] == '0' && q->i++)
        q->flag |= F_Z;
    width(q);
}

void    width(t_printf *q)
{
    if (ft_isdigit(q->format[q->i]))
    {
        q->width_val = ft_atoi(&q->format[q->i]);
        q->width |= W_N;
        while (ft_isdigit(q->format[q->i]))
            q->i++;
    }
    else if (q->format[q->i] == '*' && q->i++)
        q->width |= W_A;
    precision(q);
}

void    precision(t_printf *q)
{
    if (q->format[q->i] == '.' && ft_isdigit(q->format[(q->i + 1)]) && q->i++)
    {
        q->precision_val = ft_atoi(&q->format[q->i]);
        q->precision |= P_N;
        // while (ft_isdigit(q->format[q->i]))
        //     q->i++;
    }
    else if ((q->format[q->i] == '.' && q->format[(q->i + 1)] == '*') && q->i++)
        q->precision |= P_A;
    else if ((q->format[q->i] == '.' && !ft_isdigit(q->format[(q->i + 1)])) && q->i++)
        q->precision = -1;
    modifiers(q);
}

void    modifiers(t_printf *q)
{
    if (q->format[q->i] == 'h' && q->format[q->i + 1] == 'h' && q->i++)
        q->modifier |= M_HH;    
    else if (q->format[q->i] == 'h' && q->i++) 
        q->modifier |= M_H;
    else if (q->format[q->i] == 'l' && q->i++)
        q->modifier |= M_I;
    else if (q->format[q->i] == 'l' && q->format[(q->i + 1)] == 'l' && q->i++)
        q->modifier |= M_II;
    else if (q->format[q->i] == 'L' && q->i++)
        q->modifier |= M_L;
    specifiers(q);
}

void     specifiers(t_printf *q)
{
    int j;

    j = q->i;
    while (!ft_isalpha(q->format[j])) //will skip modulo handle it! (modulo check added into is_alpha)
        j++;
    if (0 == ft_search_dioux(q->format[j]))//maybe check much early on?
    {
        if (q->format[j] == 'c' || q->format[j] == '%')
            q->specifier |= S_C;    
        else if (q->format[j] == 's')
            q->specifier |= S_S;
        else if (q->format[j] == 'd' || q->format[j] == 'i')
            q->specifier |= S_DI;
        else if (q->format[j] == 'p')
            q->specifier |= S_P;
        else if (q->format[j] == 'x'|| q->format[j] == 'X')//is case sensitive...rework later
            q->specifier |= S_X;
        else if (q->format[j] == 'o')
            q->specifier |= S_O;
        else if (q->format[j] == 'u')
            q->specifier |= S_U;
        else if (q->format[j] == 'f')
            q->specifier |= S_F;
    }
    else
    {
        ft_putstr("Error triggered @ specifiers in sub_spec.c\n");
        EXIT_FAILURE; ///may need to move this to top
    }
//ends goes to convert...do i even need *specifirs function? since i have convert?
}