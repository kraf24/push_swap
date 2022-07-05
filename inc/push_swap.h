/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchuk <gpinchuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:25 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/07/05 15:34:33 by gpinchuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/inc/ft_printf.h"
#include <stdbool.h>

int		int_chek(char *argv);
void	error(t_list *ptr);
void	free_lst(t_list *list);
int		chek_duplicat(char **all_str, int i);