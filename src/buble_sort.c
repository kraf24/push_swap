/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:36:30 by gpinchuk          #+#    #+#             */
/*   Updated: 2022/08/23 16:46:19 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *xp, int *yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int	ft_bubble_sort(int *arr, int n)
{
	int	i;
	int	j;
	int	len;

	len = n;
	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	len = arr[(len / 2)];
	return (len);
}
