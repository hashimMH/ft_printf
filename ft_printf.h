/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:01:21 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/18 19:45:21 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
void ft_putchar(char c, int *len);
void ft_putstr(char *s, int *len);
void ft_putnbr(int n, int *len);
void ft_putnbr_u(unsigned int n, int *len);
int check_base(char *base);
void ft_putnbr_base_u(unsigned int n, char *base, int *len);
void ft_putnbr_base_ulong(unsigned long n, char *base, int *len);
size_t ft_strlen(char *str);

#endif