/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:26:51 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/07 12:12:03 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunnbr(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, 1);
		ft_putnbr_fd(nbr % 10, 1);
	}
	else
		ft_putchar_fd(nbr + 48, 1);
	return (ft_intlen(nbr, 10));
}
