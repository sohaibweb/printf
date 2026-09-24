/* ************************************************************************** */
/*                                                                            */
/*   ft_print_hex.c                                     ███████╗███████╗        */
/*   By: sohaib <sohaib@student.com>                  ██╔════╝██╔════╝        */
/*   Created: 2026/09/24 18:31:22 by sohaib           ███████╗█████╗          */
/*   Updated: 2026/09/24 18:31:22 by sohaib           ╚════██║██╔══╝          */
/*                                                    ███████║██║             */
/*                                                    ╚══════╝╚═╝             */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char *base)
{
	char    c;

	if (nb > 15)
		ft_print_hex(nb / 16, base);
	if (nb % 16 < 10)
		c = (nb % 16) + '0';
	else
		c = base[(nb % 16) - 10];
	ft_print_char(c);
	return (ft_numlen_hex(nb));	
}
