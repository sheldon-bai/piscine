/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 09:41:30 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 15:12:30 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb < 10)
		ft_putchar(lnb + '0');
	else
	{
		ft_putnbr(lnb / 10);
		ft_putchar((lnb % 10) + '0');
	}
}
