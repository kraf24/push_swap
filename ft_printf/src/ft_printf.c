/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:53:43 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/05/27 14:20:00 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			str_to_print;
	int			i;

	i = 0;
	str_to_print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			str_to_print += ft_gettype(args, format[i + 1]);
			i++;
		}
		else
			str_to_print += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (str_to_print);
}
