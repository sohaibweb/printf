/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-msa <sabu-msa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:50:24 by sabu-msa          #+#    #+#             */
/*   Updated: 2026/09/23 15:49:08 by sabu-msa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	test(int count, ...)
{
	va_list ptr;
	int num = 0;

	va_start(ptr, count);
	
	int	i;

	i = 0;
	while(i < count)
	{
		num += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return num;
}
#include <stdio.h>
int	main()
{
	printf("num : %d\n", test(3, 20, 30, 50));
}
