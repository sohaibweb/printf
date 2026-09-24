/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-msa <sabu-msa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:26:49 by sabu-msa          #+#    #+#             */
/*   Updated: 2026/09/23 16:41:13 by sabu-msa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nb)
{
	char	c;
	int			x;

	x = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb *= -1;
		x = -1;
		ft_print_char('-');
	}
	if (nb > 9)
		ft_print_nbr(nb / 10);
	
	c = (nb % 10) + '0';
	ft_print_char(c);
	if (x != 1)
	{
		return(ft_numlen(nb) + 1);
	}
	return (ft_numlen(nb));
}
