/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:10:40 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/16 20:35:55 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (s)
	{
		while (s[a] != '\0')
		{
			write (fd, &s[a], 1);
			a++;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &"8", 1);
	}
	else if (n < 0)
	{
		write(fd, &"-", 1);
		ft_putnbr_fd(n / (-1), fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		a = n % 10 + '0';
		write(fd, &a, 1);
	}
}


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}



int	ft_printf(const char *format, ...)
{
	va_list	arg;	
	int		i;

	i = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		// if (format[i] == '\\')
		// 	write()
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
				ft_putstr_fd(va_arg(arg, char *), 1);
			else if (format[i + 1] == 'c')
				ft_putchar_fd(va_arg(arg, int), 1);
			else if (format[i + 1] == 'i'
				|| format[i + 1] == 'd' || format[i + 1] == 'u')
				ft_putnbr_fd(va_arg(arg, int), 1);
			i += 2;
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (0);
}

#include <stdio.h>

int	main()
{
	char	*d = NULL;
	char	*f = "hash";
	char	c = 'h';
	int		i = -145;

	ft_printf("mean is :%s char %c and str %s \n and \\integer %u", d , c , f , i);
	return (0);
}
