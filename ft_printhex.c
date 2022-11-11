/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:18:25 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/07 12:12:57 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_to_hex(unsigned int nb, const char format)
{
	int	a;

	if (format >= 97 && format <= 122)
		a = 87;
	else if (format >= 65 && format <= 90)
		a = 55;
	if (nb > 15)
	{
		ft_convert_to_hex(nb / 16, format);
		ft_convert_to_hex(nb % 16, format);
	}
	else
	{
		if (nb > 9)
			ft_putchar_fd(nb + a, 1);
		else
			ft_putchar_fd(nb + 48, 1);
	}
}

int	ft_printhex(unsigned int nbr, const char format)
{
	ft_convert_to_hex(nbr, format);
	return (ft_intlen(nbr, 16));
}
