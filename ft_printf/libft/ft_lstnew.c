/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:04:30 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/11 15:55:21 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list		*ft_lstnew(void *content)
{
	t_list	*ls;

	ls = (t_list *)malloc(sizeof(*ls));
	if (!ls)
		return (NULL);
	ls->content = content;
	ls->next = NULL;
	return (ls);
}
