/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:36:16 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/18 14:38:48 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *str, ...);

void print_c(va_list arg, int *len);
void print_id(va_list arg, int *len);
void print_u(va_list arg, int *len);
void print_x(va_list arg, int *len, char c);
void print_p(va_list arg, int *len);
void print_s(va_list arg, int *len);
#endif