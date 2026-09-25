/* ************************************************************************** */
/*                                                                            */
/*   ft_print_pointer.c                               ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/24 18:38:03 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/24 18:38:03 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_numlen_hex(unsigned long num)
{
	int	count;

	if (num == 0)
		return (1);
	count = 0;
	while(num > 0)
	{
		num = num / 16;
		count++;
	}
	return (count);
}
int	ft_print_pointer(void *ptr)
{
	unsigned long	num;
	char		c;
	char		*base;

	base = "0123456789abcdef";
	num = (unsigned long)ptr;

	if (ptr == NULL)
	{
		write(1, "(null)",6);
		return (6);
	}
	write(1, "0x", 2);
	ft_print_pointer(num / 16);
	c = base[num % 16];
	write(1, "&c", 1);
    :x
}
int	main(void)
{
	int	n;
	int	*p;
	int	len;

	n = 5;
	p = &n;
	len = ft_print_pointer(p);

	printf("\nlen = %d", len);
	printf("\npointer = %p\n", p);
}
