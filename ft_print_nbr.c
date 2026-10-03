#include "ft_printf.h"

static void	writenum(int n, int *count)
{
	if (n >= 10)
		writenum((n / 10), count);
        (*count)++;
	ft_print_char((n % 10) + '0');
}

int     ft_print_nbr(int n)
{
        int     count;

        count = 0;
        if (n == -2147483648)
                return (ft_print_str("-2147483648"));
        if (n < 0)
	{
		count += ft_print_char('-');
		n *= -1;
        }
        writenum(n, &count);
        return (count);
}