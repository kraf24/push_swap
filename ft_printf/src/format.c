/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_temp1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:04:04 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/05/16 21:31:34 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_printf.h"

int	ft_gettype(va_list arg, const char form)
{
	int	lenght;

	lenght = 0;
	if (form == 'c')
		lenght = ft_putchar(va_arg(arg, int));
	else if (form == 's')
		lenght = ft_putstr(va_arg(arg, char *));
	else if (form == 'p')
		lenght = ft_printad(va_arg(arg, unsigned long long));
	else if (form == 'd' || form == 'i')
	lenght = ft_putnbr(va_arg(arg, int));
	else if (form == 'u')
	lenght = ft_unprint(va_arg(arg, unsigned int));
	else if (form == 'x' || form == 'X')
	lenght = ft_puthex(va_arg(arg, unsigned int), form);
	else if (form == '%')
		lenght = ft_putchar('%');
	return (lenght);
}
