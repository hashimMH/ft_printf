/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:34:20 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/18 15:23:35 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n, int *len)
{
	char a;

	if (n == -2147483648)
	{
		ft_putnbr(n / 10, len);
		ft_putchar('8', len);
	}
	else if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(n / (-1), len);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10, len);
		a = n % 10 + '0';
		ft_putchar(a, len);
	}
}
