/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabu-msa <sabu-msa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:09:57 by sabu-msa          #+#    #+#             */
/*   Updated: 2026/09/23 16:39:16 by sabu-msa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int ft_print_char(char c);
int ft_print_str(char *str);
int ft_print_nbr(int nb);
int ft_numlen(int n);
int ft_numlen_hex(unsigned int n);
int ft_print_unsigned(unsigned int nb);
int ft_print_hex(unsigned int nb, char *base);
# endif
