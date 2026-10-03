#include "ft_printf.h"
#include <stdio.h>

int     main()
{
        int     count;
        
        count = 0;
        count = ft_printf("% %", 11u);
        printf("\n%d\n", count);
        count = printf("%   %d   % p", 10u);
        printf("\n%d", count);    
        return (0);
}