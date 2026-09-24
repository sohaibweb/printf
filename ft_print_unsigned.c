/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-msa <sabu-msa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:35:53 by sabu-msa          #+#    #+#             */
/*   Updated: 2026/09/23 17:01:52 by sabu-msa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	char	c;
	if (nb > 9)
		ft_print_unsigned(nb / 10);
	c = (nb % 10) + '0';
	ft_print_char(c);
	return (ft_numlen(nb));
}

