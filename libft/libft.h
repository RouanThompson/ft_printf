/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:36:52 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/03 18:36:38 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

void            ft_putchar(char c);
void            ft_putstr(char const *s);
void            ft_putstr_precision(char const *s, int precision);
size_t          ft_strlen(const char *s);
void            *ft_memset(void *b, int c, size_t len);
void            ft_bzero(void *s, size_t n);
char            *ft_strcpy(char *dst, const char *src);
int             ft_isdigit(int c);
int             ft_isalpha(int c);
int             ft_atoi(const char *str);
char            *ft_strnew(size_t size);
char            *ft_itoa(int n);
void            ft_strdel(char **as);
size_t          ft_get_nbrlen(int base, long int n);
char            *ft_itoa_base(int base, long int n);
char            *ft_ultoa_base(int base, unsigned long int n, char cap);
char            *ft_uitoa(unsigned int n);
char            *ft_ltoa_base(int base, long int n);
void            ft_putfloat(double num, int precision);
void            ft_putlong(long n);
char            *ft_strchr(const char *s, int c);
void            ft_print_bits(unsigned char octet);

#endif
