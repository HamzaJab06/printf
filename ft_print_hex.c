#include "ft_printf.h"

static void	writenum(unsigned int n, int *count, char *base)
{
	if (n >= 16)
		writenum((n / 16), count, base);
        (*count)++;
	ft_print_char(base[n % 16]);
}

int     ft_print_hex(unsigned int n, int u)
{
        int     count;
        char    *base;

        if (u)
                base = "0123456789ABCDEF";
        else
                base = "0123456789abcdef";
        
        count = 0;
        writenum(n, &count, base);
        return (count);
}
