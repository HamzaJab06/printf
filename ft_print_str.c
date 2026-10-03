#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int     ft_print_str(char *str)
{
        size_t  len;

        len = ft_strlen(str);
        write(1, str, len);
        return (len);
}