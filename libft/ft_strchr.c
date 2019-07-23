/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 17:27:37 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/20 15:15:31 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
        char *ptr;

        ptr = (char *)s;
        while (*ptr)
        {
                if (*ptr != c)
                        ptr++;
                if (*ptr == c)
                        return (ptr);
        }
        return (NULL);
}
