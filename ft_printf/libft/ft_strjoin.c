/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:25:15 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/27 17:41:53 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		n1;
	size_t		len;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	n1 = ft_strlen(s1);
	len = ft_strlen(s2) + (n1) + (1);
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_strcpy(str, (char *)s1);
	ft_strcpy(&str[n1], (char *)s2);
	str[len - 1] = '\0';
	return (str);
}
