/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:27:18 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/21 13:34:01 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	int	a;

	a = 0;
	if (s == NULL)
		s = "(null)";
	if (s)
	{
		while (s[a] != '\0')
		{
			ft_putchar(s[a], len);
			a++;
		}
	}
}
