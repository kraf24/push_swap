/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temp3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:30:38 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/05/16 21:26:55 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_printf.h"

int	ft_hex_len(unsigned long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 16;
	}
	return (count);
}

int	ft_puthex(unsigned long num, const char format)
{
	char	*s;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (format == 'x')
		s = "0123456789abcdef";
	if (format == 'X')
		s = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_puthex(num / 16, format);
		ft_putchar(s[num % 16]);
	}
	else
		ft_putchar(s[num % 16]);
	return (ft_hex_len(num));
}

int	ft_printad(unsigned long adress)
{
	int	c;

	c = 2;
	write(1, "0x", 2);
	c += ft_puthex(adress, 'x');
	return (c);
}
