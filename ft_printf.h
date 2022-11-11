/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdelaros <wdelaros@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:38:22 by wdelaros          #+#    #+#             */
/*   Updated: 2022/11/09 13:46:57 by wdelaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printstr(char *str);
int	ft_printptr(uintptr_t ptr);
int	ft_printnbr(int nbr);
int	ft_printunnbr(unsigned int nbr);
int	ft_printhex(unsigned int nbr, const char format);
int	ft_printchar(int c);
int	ft_intlen(long int n, int base);

#endif
