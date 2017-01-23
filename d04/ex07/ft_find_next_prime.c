/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 23:35:27 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 15:06:22 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 4)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	nb += (nb % 2) ? 0 : 1;
	printf("%d\n", nb);
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
