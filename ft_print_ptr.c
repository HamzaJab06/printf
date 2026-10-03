/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjabarin <hjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:26:06 by hjabarin          #+#    #+#             */
/*   Updated: 2026/10/03 17:47:02 by hjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	writenum(unsigned long long n, int *count, char *base)
{
	if (n >= 16)
		writenum((n / 16), count, base);
	(*count)++;
	ft_print_char(base[n % 16]);
}

static int	ft_print_ull_hex(unsigned long long n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	writenum(n, &count, base);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	count += ft_print_str("0x");
	count += ft_print_ull_hex((unsigned long long)ptr);
	return (count);
}
