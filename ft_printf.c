/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:10:40 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/21 13:38:52 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_x(unsigned long num, int *len, char c)
{
	if (c == 'X')
		ft_putnbr_base_u(num, "0123456789ABCDEF", len);
	else
		ft_putnbr_base_u(num, "0123456789abcdef", len);
}

static void	print_p(unsigned long add, int *len)
{
	if ((void *)add == NULL)
		ft_putstr("0x0", len);
	else
	{
		ft_putstr("0x", len);
		ft_putnbr_base_ulong(add, "0123456789abcdef", len);
	}
}

static void	check(char const *str, va_list arg, int i, int *len)
{
	char	c;

	if (str[i] == 'c')
	{
		c = va_arg(arg, int);
		*len += write(1, &c, 1);
	}
	if (str[i] == '%')
		*len += write(1, "%", 1);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(arg, int), len);
	if (str[i] == 'u')
		ft_putnbr_u(va_arg(arg, unsigned int), len);
	if (str[i] == 'x' || str[i] == 'X')
		print_x(va_arg(arg, unsigned long), len, str[i]);
	if (str[i] == 'p')
		print_p(va_arg(arg, unsigned long), len);
	if (str[i] == 's')
		ft_putstr(va_arg(arg, char *), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			check(format, arg, i, &len);
		}
		else
		{
			len++;
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(arg);
	return (len);
}
