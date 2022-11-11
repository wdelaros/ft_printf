/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:54:02 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/11 11:11:18 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert_ptr_to_hex(uintptr_t nb, int *len)
{
	if (nb > 15)
	{
		ft_convert_ptr_to_hex(nb / 16, len);
		ft_convert_ptr_to_hex(nb % 16, len++);
	}
	else
	{
		if (nb > 9)
			(*len) += ft_printchar(nb + 87);
		else
			(*len) += ft_printchar(nb + 48);
	}
}

int	ft_printptr(uintptr_t ptr)
{
	int	len;

	len = 2;
	ft_printstr("0x");
	ft_convert_ptr_to_hex(ptr, &len);
	return (len);
}
