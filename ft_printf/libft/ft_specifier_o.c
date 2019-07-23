/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_o.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:19:07 by rothomps          #+#    #+#             */
/*   Updated: 2019/07/04 16:19:09 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_specifier_o(void *d, char format)
{
    write(1, "0", 2);
    ft_putstr(ft_ultoa_base(8, (size_t)d, format));
    return (0);
}

