/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 13:01:58 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 14:35:21 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		half;

	if (nb == 0 && power == 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
	{
		if (power % 2 == 0)
		{
			half = ft_recursive_power(nb, power / 2);
			return (half * half);
		}
		else
		{
			half = ft_recursive_power(nb, power / 2);
			return (nb * half * half);
		}
	}
}
