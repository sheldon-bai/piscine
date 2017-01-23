/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:25:34 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 16:36:04 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_idx;
	int				dest_len;

	i = 0;
	dest_idx = 0;
	while (dest[dest_idx])
		dest_idx++;
	dest_len = dest_idx++;
	while (src[i] && (dest_idx < dest_len + size - 1))
	{
		dest[dest_idx] = src[i];
		dest_idx++;
		i++;
	}
	dest[dest_idx] = '\0';
	return (dest_idx);
}
