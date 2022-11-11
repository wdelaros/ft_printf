/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:34:57 by wdelaros          #+#    #+#             */
/*   Updated: 2022/10/29 18:21:31 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
