/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:02:37 by xbai              #+#    #+#             */
/*   Updated: 2017/01/19 15:07:01 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (max - min);
}
