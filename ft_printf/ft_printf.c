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
#include <limits.h>
#include <stdint.h>

int		ft_printf(const char *format, ...) ///has the elpisis as a list
{
	int			i;
	va_list		ap; // va list is a macro that sets a pointer to the begining of a list of data

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == '%') //|| (format[i] == '.' && format[i + 1] == 'c')) //character
				ft_specifier_c(va_arg(ap, void *));
			else if (format[i] == 's') //string
				ft_specifier_s(va_arg(ap, void *));
			else if (format[i] == 'p') //memory address unsigned
				ft_specifier_p(va_arg(ap, void *));
			else if ((format[i] == 'd') || (format[i] == 'i')) //decimal signed interger
				ft_specifier_di(va_arg(ap, void *));
			else if (format[i] == 'x' || format[i] == 'X') //hex unsigned
				ft_specifier_x(va_arg(ap, void *), format[i]);
			else if (format[i] == 'o') //unsigned octal
				ft_specifier_o(va_arg(ap, void *), 'x');
			else if (format[i] == 'u') //unsigned decimal int
				ft_specifier_u(va_arg(ap, void *));
			else if (format[i] ==  '.' || format[i] == 'f') //lont int
				i = ft_specifier_f(va_arg(ap, double), format, i);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}

int main(void)
{
	double	d;
	char	c;
	int		o;

	//char	a = 'k';
	c = 'k';
	o = 4569;
	d = 10.1;
	//printf("%X\n", o);
	//ft_printf("%X\n", o);
	//char w[6] = "Rouan";
	/* printf(".s = %.s\n", w);
	printf(".0 = %.0s\n", w);
	printf(".1 = %.1s\n", w);
	printf(".5 = %.5s\n", w);
	printf(".6 = %.6s\n", w); */

	//printf(".c = %.c\n", c);
	//ft_printf("%%\n");
	//printf("d = %.100000000f\n", d);//must handle whatever the prcision is
	/* printf("d = %.10f\n", d); //@ spcifier 16 there is no more rounding
	ft_printf("d = %.10f\n", d);
	//printf("d = %.2\n", d); // prints "d = " the incorrect format portion is not printed
	//ft_printf("d = %.2\n", d);

	printf("d = %.15f\n", d);
	ft_printf("d = %.15f\n", d);
	printf("d = %.16f\n", d); 
	ft_printf("d = %.16f\n", d);
	printf("d = %.17f\n", d); 
	ft_printf("d = %.17f\n", d);
	printf("d = %.18f\n", d);
	ft_printf("d = %.18f\n", d);
	printf("d = %.19f\n", d); 
	ft_printf("d = %.19f\n", d);
	ft_printf("c = %c\n", a);
	ft_printf("s = %s\n and thats it! \n", s);
	ft_printf("INT_MAX = %d\n", INT_MAX);
	*/
	
	
	 /* char	s[6] = "Hello";
	
	ft_printf("s memmory addres = %p\n", &s);
	ft_printf("s memmory addres in hex (lower) = %x\n", *s);
	ft_printf("s memmory addres in hex (upper) = %X\n", *s);
	ft_printf("s memmory addres in octal = %o\n", *s);
	printf("%u\n", UINT_MAX);
	ft_printf("%u\n", UINT_MAX);

	//using # in %#x, %#X, %#o, prints for base prefixes

	printf("s memmory addres = %p\n", &s);
	printf("s memmory addres in hex (lower) = %-x\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	printf("s memmory addres in hex (upper) = %X\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	printf("s memmory addres in octal = %o\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	*/
	printf("c = %c\n", c);
	printf("c = %-2.c\n", c);
	return (0);
}
