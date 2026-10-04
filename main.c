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

	ret1 = printf("%s\n", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("%s\n", NULL);
	printf("%d", ret2);
	return (0);
}
