#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printf(const char *str, ...);
int     ft_print_char(int c);
int     ft_print_str(char *str);
int     ft_print_nbr(int n);
int     ft_print_unsigned(unsigned int n);
int     ft_print_hex(unsigned int n, int u);

#endif