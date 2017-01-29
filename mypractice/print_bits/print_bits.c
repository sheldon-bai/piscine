/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 18:55:11 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 19:20:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	res;

	res = 0;
	i = 0;
	while (i < 7)
	{
		res = (res * 2) + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (res);
}

void	ft_print(unsigned char res)
{
	int		i;

	i = 0;
	while (i < 7)
	{
		if (res % 2)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		res = res / 2;
		i++;
	}
}

void	print_bits(unsigned char octet)
{
	unsigned char	res;

	res = reverse_bits(octet);
	ft_print(res);
}
