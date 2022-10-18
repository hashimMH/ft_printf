/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:34:04 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/18 15:05:34 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_unsigned(unsigned int n, int *len)
{
	char a;

	if (n < 0)
		ft_putnbr_unsigned(n / (-1), len);
	else
	{
		if (n >= 10)
			ft_putnbr_unsigned(n / 10, len);
		a = n % 10 + '0';
		ft_putchar(a, len);
	}
}