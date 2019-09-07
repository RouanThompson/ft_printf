/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_dioux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:59:55 by rothomps          #+#    #+#             */
/*   Updated: 2019/08/12 15:59:56 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** search for spcifier rtn 1 if not found
*/

int    ft_search_dioux(const char c)
{
    char *s;

    s = "c%sdipxXouf";
    while (*s)
    {
        if (c != *s)
            s++;
        else
            return (0);
    }
    return (1);
}