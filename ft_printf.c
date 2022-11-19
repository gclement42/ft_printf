#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void print_char(const int c)
{
    write(1, &c, 1);
}

int	ft_putnbr_base(int nbr, char *base)
{
	long	int lnbr;
	int base_l = 16;

	lnbr = nbr;
	if(base_l != 0)
	{
		if(lnbr < 0)
			lnbr = lnbr * -1;
		if(lnbr > 0)
		{
			ft_putnbr_base(lnbr / base_l, base);
			return (base[lnbr % base_l]);
		}
	}
	return (0);
}

int switch_type(const char c, va_list arg)
{

    switch (c)
    {
        case 'c':
        {
            print_char(va_arg(arg, int));
            break;
        }
        case '%':
        {
            print_char('%');
            break;
        }
        case 'd':
        {
            ft_putstr_fd(ft_itoa(va_arg(arg, int)), 1);
            break;
        }
        case 'x':
        {
            ft_putnbr_fd(ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF"), 1);
            break;
        }
    }
}
int ft_printf( const char *format, ... )
{
    int     i;
    va_list parameters;

    va_start( parameters, format);
    i = 0;
    while (format[i])
    {
        if (format[i] != '%')
            write(1, &format[i], 1);
        else
        {
            i++;
            switch_type(format[i], parameters);
        }
        i++;
    }
    return (i);
}

int main()
{
    printf("Yo : %x\n", 456);
    ft_printf("salut mon pote %x", 456);
}