/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:52:47 by rothomps          #+#    #+#             */
/*   Updated: 2019/06/17 14:10:49 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				g_ascii_k[16] = {'0', '1', '2', '3', '4', '5', '6',\
	'7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

char			*ft_itoa_base(int base, long int n)
{
	size_t				len;
	char				*str;
	unsigned long		n_cpy;

	len = ft_get_nbrlen(base, n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	str[--len] = g_ascii_k[n_cpy % base];
	while ((n_cpy = (n_cpy / base)))
		str[--len] = g_ascii_k[(n_cpy % base)];
	if (n < 0)
		str[0] = '-';
	return (str);
}
