#include "ft_printf.h"

static void	writenum(unsigned int n, int *count)
{
	if (n >= 10)
		writenum((n / 10), count);
        (*count)++;
	ft_print_char((n % 10) + '0');
}
int     ft_print_unsigned(unsigned int n)
{
        int     count;

        count = 0;
        writenum(n, &count);
        return (count);
}