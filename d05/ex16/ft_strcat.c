/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:58:26 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 15:12:04 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_idx;

	i = 0;
	dest_idx = 0;
	while (dest[dest_idx])
		dest_idx++;
	while (src[i])
	{
		dest[dest_idx] = src[i];
		dest_idx++;
		i++;
	}
	dest[dest_idx] = '\0';
	return (dest);
}
