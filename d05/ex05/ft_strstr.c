/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:48:34 by xbai              #+#    #+#             */
/*   Updated: 2017/01/17 23:20:33 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		z;
	int		to_find_size;

	i = 0;
	z = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[z] == str[i + z])
		{
			if (z == to_find_size - 1)
				return (str + i);
			z++;
		}
		z = 0;
		i++;
	}
	return (0);
}
