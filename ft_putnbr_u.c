/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:34:04 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/21 13:33:35 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	char	a;

	if (n < 0)
		ft_putnbr_u(n / (-1), len);
	else
	{
		if (n >= 10)
			ft_putnbr_u(n / 10, len);
		a = n % 10 + '0';
		ft_putchar(a, len);
	}
}
