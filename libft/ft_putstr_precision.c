/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:54:52 by rothomps          #+#    #+#             */
/*   Updated: 2019/08/25 17:54:54 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_precision(char const *s, int precision)
{
	int i;

	i = 0;
	while (s[i] != '\0' && precision)
	{
		ft_putchar(s[i]);
		i++;
		precision--;
	}
}