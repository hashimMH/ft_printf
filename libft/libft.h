#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c, int *len);
void ft_putstr(char *s, int *len);
void ft_putnbr(int n, int *len);
void ft_putnbr_u(unsigned int n, int *len);
void ft_putnbr_base_u(unsigned int n, char *base, int *len);
void ft_putnbr_base_ulong(unsigned long n, char *base, int *len);
size_t ft_strlen(char *str);

#endif