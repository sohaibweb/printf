#include "ft_printf.h"

int ft_putptr(unsigned long n)
{
    int count;

    if (!n)
    {
        ft_putstr("(nil)");
        return (5);
    }
    count = 0;
    count += ft_putstr("0x");
    count += ft_putnbr_hex_ptr(n);
    return (count);
}
