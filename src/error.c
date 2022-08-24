/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:24:30 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/24 19:28:49 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_list *ptr)
{
	write(2, "error\n", 7);
	free_lst(ptr);
	exit(0);
}

int	int_chek(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '\0')
		return (true);
	while (argv[i])
	{
		if (argv[i] == '-')
			i++;
		if (!(ft_isdigit(argv[i])))
			return (true);
		i++;
	}
	return (false);
}
