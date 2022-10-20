/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ulong.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:33:54 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/20 10:38:18 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_base_ul(char *base)
{
    int i;
    int z;

    i = 0;
    z = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        z = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        if (base[i] < 32 || base[i] > 126)
            return (0);
        while (base[z])
        {
            if (base[i] == base[z])
                return (0);
            z++;
        }
        i++;
    }
    return (1);
}

void ft_putnbr_base_ulong(unsigned long n, char *base, int *len)
{
    unsigned long base_len;

    if (check_base_ul(base))
    {
        base_len = 0;
        while (base[base_len])
            base_len++;
        if (n > base_len - 1)
        {
            ft_putnbr_base_ulong(n / base_len, base, len);
            n %= base_len;
        }
        ft_putchar(base[n], len);
    }
}