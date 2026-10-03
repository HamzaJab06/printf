#include "ft_printf.h"
#include <stdio.h>

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		n;
	void	*p;
	int		ret1;
	int		ret2;

	n = 42;
	p = &n;

	printf("----- NORMAL POINTER -----\n");

	ret1 = printf("printf    : %p\n", p);
	ret2 = ft_printf("ft_printf : %p\n", p);

	printf("printf return    : %d\n", ret1);
	printf("ft_printf return : %d\n", ret2);

	printf("\n----- NULL POINTER -----\n");

	ret1 = printf("printf    : %p\n", (void *)0);
	ret2 = ft_printf("ft_printf : %p\n", (void *)0);

	printf("printf return    : %d\n", ret1);
	printf("ft_printf return : %d\n", ret2);

	printf("\n----- STRING POINTER -----\n");

	ret1 = printf("printf    : %p\n", (void *)"hello");
	ret2 = ft_printf("ft_printf : %p\n", (void *)"hello");

	printf("printf return    : %d\n", ret1);
	printf("ft_printf return : %d\n", ret2);

	return (0);
}
