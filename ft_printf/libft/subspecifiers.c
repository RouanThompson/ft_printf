/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subspecifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 00:15:11 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/20 00:15:12 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    check_subspecifiers(char *format, int i)
{
    char    flags[5] = {'-', '+', '#', '0'};
    char    width[3] = "hh";
    char    precision = '.';
    char    length[6][2] = {"hh", 'h', 'l', "ll", 'L'};
    int     j;
    //just do  direct comparison instead of iterating through
    j = 0;
    while (flags[j] != '\0')
    {
        if (ft_strchr(format, flags[j]) != NULL)
            
        else
            j++;
        i++;
    }
}