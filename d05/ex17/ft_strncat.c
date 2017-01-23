/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:11:58 by xbai              #+#    #+#             */
/*   Updated: 2017/01/17 23:20:01 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		dest_idx;

	i = 0;
	dest_idx = 0;
	while (dest[dest_idx])
		dest_idx++;
	while (i < nb && src[i])
	{
		dest[dest_idx] = src[i];
		dest_idx++;
		i++;
	}
	dest[dest_idx] = '\0';
	return (dest);
}
