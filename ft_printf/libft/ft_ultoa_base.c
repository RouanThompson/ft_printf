/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 22:46:39 by rothomps          #+#    #+#             */
/*   Updated: 2019/06/22 22:46:41 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	ft_get_ul_nbrlen(int base, unsigned long int n)
{
	size_t i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

char			*ft_ultoa_base(int base, unsigned long int n, char cap)
{
	size_t				len;
	char				*str;
	char				*tmp;
	unsigned long int	n_cpy;

	if (base < 2 || base > 16)
		return (0);
	len = ft_get_ul_nbrlen(base, n);
	n_cpy = n;
	str = ft_strnew(len);
	tmp = ft_strnew(16);
	(cap == 'X') ? (ft_strcpy(tmp, "0123456789ABCDEF")) : (ft_strcpy(tmp, "0123456789abcdef"));
	str[--len] = tmp[n_cpy % base];
	while ((n_cpy = (n_cpy / base)))
		str[--len] = tmp[(n_cpy % base)];
	ft_strdel(&tmp);
	return (str);
}
