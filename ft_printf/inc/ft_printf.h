/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:54:47 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/05 19:05:01 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_putchar(int c);
int		ft_gettype(va_list arg, const char form);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_puthex(unsigned long num, const char format);
int		ft_printf(const char *format, ...);
char	*ft_unsigned(unsigned int un);
int		ft_unprint(unsigned int un);
size_t	ft_unlenght(unsigned int un);
int		ft_printad(unsigned long adress);
int		ft_hex_len(unsigned long n);

#endif