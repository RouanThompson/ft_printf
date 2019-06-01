/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:54:19 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/31 14:50:03 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	int			num_arg;
	char		c;
	char		*s;
	int			i;
	va_list		ap;

	i = 0;
	num_arg = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c') //character
		{
			c = va_arg(ap, int);
			ft_putchar(c);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(ap, char *);
			ft_putstr(s);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	return (0);
}
int main(void)
{
	char c;
	char *s;

	c = 'k';
	s = "String";
	//if (c == 2)
	//{
	ft_printf("this is a string: %s\nthis is a char: %c", s, c); /// need an effectway toprint out strings up till the specifier
	write(1, "\n", 1);
	printf("this is a string: %s\nthis is a char: %c", s, c);
	//}
	return (0);
}
/*if (format == '%' && format + 1 == c)// looks at the next character
		ft_putchar();*/
