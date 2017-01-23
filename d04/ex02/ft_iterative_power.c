/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:23:35 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 14:32:02 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;

	res = nb;
	if (nb == 0 && power == 0)
		return (0);
	else if (nb == 0 || power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		while (power > 1)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
}
