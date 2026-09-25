#include "ft_printf.h"

int ft_putnbr_base(unsigned long n, const char *base)
{
	unsigned long base_length;
	int			 count;

	base_length = 0;
	while (base[base_length])
		base_length++;
	if (n >= base_length)
		count = ft_putnbr_base(n / base_length, base);
	else
		count = 0;
	count += ft_putchar(base[n % base_length]);
	return (count);
}

int ft_putnbr_hex(unsigned int n, char format)
{
	if (format == 'X')
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
	return (ft_putnbr_base(n, "0123456789abcdef"));
}

int ft_putnbr_hex_ptr(unsigned long n)
{
	return (ft_putnbr_base(n, "0123456789abcdef"));
}