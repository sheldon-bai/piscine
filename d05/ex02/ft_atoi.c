/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 21:50:28 by xbai              #+#    #+#             */
/*   Updated: 2017/01/17 22:47:11 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_helper(char *str, int i)
{
	int		nb;

	nb = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			nb = (nb * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (nb);
}

int		ft_atoi(char *str)
{
	int		neg;
	int		i;
	int		nb;

	nb = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	nb = ft_atoi_helper(str, i);
	return (nb * neg);
}
