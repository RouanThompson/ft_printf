#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	// double	d;
	char	c;
	//int		di;
	//char	s[1] = "";
	c = 'a';
	//di = -12345;
	//d = -10.1;

	// ft_printf("%.14f\n", d);
	// // printf("%.14f\n", d);
	// ft_printf("%.7f\n", d);
	// printf("%10.3f\n", d);
	// ft_printf("%#.f\n", d);
	// printf("%#.f\n", d);
	// ft_printf("%#.1f\n", d);
	// printf("%#.1f\n", d);
	// ft_printf("%#.0f\n", d);
	// printf("%#.0f\n", d);
	// ft_printf("%f\n", d);
	// printf("%f\n", d);
	// printf("%X\n", di);
	// ft_printf("%X\n", di);
	/* printf(".s = %.s\n", w);
	printf(".0 = %.0s\n", w);
	printf(".1 = %.1s\n", w);
	printf(".5 = %.5s\n", w);
	printf(".6 = %.6s\n", w); */

	//printf(".c = %.c\n", c);
	//ft_printf("%%\n");
	//printf("d = %.100000000f\n", d);//must handle whatever the prcision is
	/*printf("d = %.10f\n", d); //@ spcifier 16 there is no more rounding
	//ft_printf("d = %.10f\n", d);
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
	ft_printf("d = %.19f\n", d);*/
	//////////////////////////////// di
	//ft_printf("%8d\n%8.d\n%8.0d\n%8.3d\n%8.5d\n%8.6d\n%8.7d\n%8.8d\n%8.9d\n%8.10d\n", di, di, di, di, di, di, di, di, di, di);
	//printf("%8d\n%8.d\n%8.0d\n%8.3d\n%8.5d\n%8.6d\n%8.7d\n%8.8d\n%8.9d\n%8.10d\n", di, di, di, di, di, di, di, di, di, di);
	// ft_printf("%8d\n", di);
	// printf("%8d\n", di);
	// ft_printf("%8.d\n", di);
	// printf("%8.d\n", di);
	// ft_printf("%8.0d\n", di);
	// printf("%8.0d\n", di);
	// ft_printf("%8.3d\n", di);
	// printf("%8.3d\n", di);
	// ft_printf("%8.5d\n", di);
	// printf("%8.5d\n", di);
	// ft_printf("%8.6d\n", di);
	// printf("%8.6d\n", di);
	// ft_printf("%8.7d\n", di);
	// printf("%8.7d\n", di);
	// ft_printf("%8.8d\n", di);
	// printf("%8.8d\n", di);
	// ft_printf("%8.9d\n", di);
	// printf("%8.9d\n", di);
	// ft_printf("%8.10d\n", di);
	// printf("%8.10d\n", di);
	////////////////////////////// string
	// ft_printf("c = %c\n", c);
	// ft_printf("s = %s\n", s);
	// printf("s = %s\n", s);
	// ft_printf("s = %.s\n", s);
	// printf("s = %.s\n", s);
	//ft_printf("s = %.1s\n", s);
	//ft_printf("%s\n%.s\n%.0s\n%.3s\n%.8s\n%3s\n%5s\n%8s\n%8.s\n%8.0s\n%8.4s\n%8.8s\n%8.20s\n", s, s, s, s, s, s, s, s, s, s, s, s, s);
 	//printf("%s\n%.s\n%.0s\n%.3s\n%.8s\n%3s\n%5s\n%8s\n%8.s\n%8.0s\n%8.4s\n%8.8s\n%8.20s\n", s, s, s, s, s, s, s, s, s, s, s, s, s);
	ft_printf("%1c\n", c);
	printf("%1c\n", c);
	//ft_printf("%5c\n", c);
	// ft_printf("%s\n", s);
	// printf("%s\n", s);
	// ft_printf("%.s\n", s);
	// printf("%.s\n", s);
	// ft_printf("%8s\n", s);
	// printf("%8s\n", s);
	// ft_printf("%8.s\n", s);
	// printf("%8.s\n", s);
	// ft_printf("%8.4s\n", s);
	// printf("%8.4s\n", s);
	// ft_printf("%8.20s\n", s);
	// printf("%8.20s\n", s);
	////////////////////////////// c
	//ft_printf("%c\n%.c\n%.0c\n%.3c\n%.8c\n%3c\n%5c\n%8c\n%8.c\n%8.0c\n%8.4c\n%8.8c\n%8.20c\n", c, c, c, c, c, c, c, c, c, c, c, c, c);
	// printf("%c\n", c);
	// //printf("%0c", c); UD
	// printf("%1c\n", c);
	// printf("%2c\n", c);
	// ft_printf("INT_MAX = %d\n", INT_MAX);

	// ft_printf("s memmory address = %p\ns memmory address in hex (lower) = %#.1x\ns memmory address in hex (upper) = %#.30X\ns memmory address in octal = %.1o\nu = %.10u\nINT_MAX = %d\ndi = %.3d\n", &s, *s, *s, *s, UINT_MAX, INT_MAX, di);
	// // ft_printf("s memmory address = %p\n", &s);
	// // ft_printf("s memmory address in hex (lower) = %x\n", *s);
	// // ft_printf("s memmory address in hex (upper) = %X\n", *s);
	// // ft_printf("s memmory address in octal = %o\n", *s);
	// // ft_printf("u = %u\n", UINT_MAX);
	
	// //using # in %#x, %#X, %#o, prints for base prefixes

	// printf("INT_MAX = %d\n", INT_MAX);
	// printf("s memmory address = %p\n", &s);
	// printf("s memmory address in hex (lower) = %#.1x\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	// printf("s memmory address in hex (upper) = %#.30X\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	// printf("s memmory address in octal = %.1o\n", *s); //cant pass in the entire array, i can however pass in a element of the array
	// printf("u = %.10u\n", UINT_MAX);
	

	// // printf("c = %c\n", c);
	// // printf("c = %-2.c\n", c);
	// printf("%%");
	return (0);
}