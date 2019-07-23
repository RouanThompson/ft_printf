/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:00:57 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:00:58 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_specifier_x(void *d, char format)
{
    write(1, "0x", 2);
	ft_putstr(ft_ultoa_base(16, (size_t)d, format));
    return (0);
}
