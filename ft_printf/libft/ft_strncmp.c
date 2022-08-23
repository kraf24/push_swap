/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:10:06 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/25 19:50:51 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	if (!s1 || !s2)
		return (-1);
	while (s1[c] != '\0' && s1[c] == s2[c] && c < n - 1)
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
