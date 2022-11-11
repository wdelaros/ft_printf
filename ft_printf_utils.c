/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:12:32 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/09 13:46:54 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(long int n, int base)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > (base - 1))
	{
		n /= base;
		i++;
	}
	return (i);
}

int	ft_printchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
