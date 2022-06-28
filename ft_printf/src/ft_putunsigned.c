/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:34:55 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/06/16 14:06:32 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_printf.h"

size_t	ft_unlenght(unsigned int un)
{
	unsigned int	n;
	size_t			count;

	count = 0;
	n = un;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_unsigned(unsigned int un)
{
	size_t	size;
	char	*str;

	size = ft_unlenght(un);
	str = (char *)ft_calloc(sizeof(char), (size + 1));
	while (size--)
	{
		str[size] = (un % 10) + '0';
		un /= 10;
	}
	return (str);
}

int	ft_unprint(unsigned int un)
{
	int		count;
	char	*str;

	count = 0;
	if (un == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_unsigned(un);
	count = ft_strlen(str);
	write(1, str, count);
	free(str);
	return (count);
}
