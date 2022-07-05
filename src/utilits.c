/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:49:07 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/05 15:35:29 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int int_chek(char *argv)
{
	int i = 0;
	while (argv[i])
	{
		if(argv[i] == '-')
			i++;
		if (!(ft_isdigit(argv[i])))
			return (true);
		i++;
	}
	return (false);
}

int chek_duplicat(char **all_str, int i)
{
	int x = 0;

	while(x < i)
	{
		if(!(ft_strncmp(all_str[i], all_str[x], 42)))
			return (true);
		x++;
	}
	return (false);
}