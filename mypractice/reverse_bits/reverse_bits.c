/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 18:40:27 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 18:51:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;


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
