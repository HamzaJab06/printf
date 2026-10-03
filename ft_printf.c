#include "ft_printf.h"

int   ft_format(char c, va_list args)
{
            if (c == 'c')
                  return (ft_print_char(va_arg(args, int)));
            if (c == 's')
                  return (ft_print_str(va_arg(args, char *)));
            // else if (c == 'p')
            //       return (ft_print_ptr(va_arg(*args, void *)));
            if (c == 'd' || c == 'i')
                  return (ft_print_nbr(va_arg(args, int)));
            if (c == 'u')
                  return (ft_print_unsigned(va_arg(args, unsigned int)));
            if (c == 'x')
                  return (ft_print_hex(va_arg(args, int), 0));
            if (c == 'X')
                  return (ft_print_hex(va_arg(args, int), 1));
            if (c == '%')
                  return (ft_print_char('%'));
            return (0);
}

int   ft_printf(const char *str, ...)
{
      va_list     args;
      size_t      count;
      size_t      i;

      va_start(args, str);
      i = 0;
      count = 0;
      while (str[i])
      {
            if (str[i] != '%')
                  count += ft_print_char(str[i]);
            else
            {
                  i++;
                  count += ft_format(str[i], &args);
            }
            i++;
      }
      va_end(args);
      return (count);
}