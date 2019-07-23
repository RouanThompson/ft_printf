/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:24:37 by rothomps          #+#    #+#             */
/*   Updated: 2019/06/25 16:24:39 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putfloat(double num, int precision) //Does not handle 0s that are before nums > 0
{
    double round;
    int    given_precision;

    given_precision = precision;
    round = .01;
    if (given_precision >= 14)
        round = 0.2;
    while (given_precision > 0)
    {
        round = round / 10;
        given_precision--;
    }
    ft_putstr(ft_ltoa_base(10, (long)num));//prints only whole number
    num = num + round;// make this a variable that extends based on the precision length
    num = num - (long)num;// .xx = xx.xx - x
    if (precision >= 1)
    {
        write(1, ".", 1);
        while (precision--)
        {
            num = num * 10; // x.x = .xx * 10
            ft_putlong((long)num); //prints one character at a time
            num = num - (long)num; 
        }
    }
}