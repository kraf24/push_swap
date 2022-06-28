/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temp2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:17:14 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/05/16 21:30:16 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	c;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	c = ft_strlen(str);
	write(1, str, c);
	return (c);
}

int	ft_putnbr(int nb)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(nb);
	count = ft_strlen(str);
	write(1, str, count);
	free(str);
	return (count);
}
