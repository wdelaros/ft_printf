/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:12:48 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/07 12:17:45 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
	return (ft_intlen(nbr, 10));
}
