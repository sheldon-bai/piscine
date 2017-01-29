/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 20:39:05 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 21:02:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		atoi(char *str)
{
	int		res;

	res = 0;
	while (*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

void	ft_print(int a, int b)
{
	int		res;

	res = a * b;
	ft_putnbr(a);
	ft_putstr(" x ");
	ft_putnbr(b);
	ft_putstr(" = ");
	ft_putnbr(res);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		nb;
	int		i;

	if (argc != 2)
		ft_putchar('\n');
	else
	{
		nb = atoi(argv[1]);
		i = 1;
		while (i <= 9)
			ft_print(i++, nb);
	}
	return (0);
}
