/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:29:16 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/27 17:40:42 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*string;

	string = (char *)malloc(sizeof (char) * (ft_strlen (src) + 1));
	if (!string)
		return (NULL);
	ft_strcpy(string, (char *)src);
	return (string);
}
