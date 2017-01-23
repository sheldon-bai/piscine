/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 15:00:38 by xbai              #+#    #+#             */
/*   Updated: 2017/01/14 17:51:34 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_help(int begin, int end, int number)
{
	int		mid;

	mid = begin + (end - begin) / 2;
	if (begin > end)
		return (0);
	else
	{
		if (mid * mid == number)
			return (mid);
		else
		{
			if (mid * mid > number)
				return (ft_sqrt_help(begin, mid - 1, number));
			else
				return (ft_sqrt_help(mid + 1, end, number));
		}
	}
}

int		ft_sqrt(int nb)
{
	int		mid;

	if (nb == 1)
		return (1);
	mid = nb / 2;
	if (mid * mid == nb)
		return (mid);
	else
		return (ft_sqrt_help(0, nb, nb));
}
