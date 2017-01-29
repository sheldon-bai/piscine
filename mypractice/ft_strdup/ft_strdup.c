/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 18:30:42 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 18:37:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*des;

	while (src[len])
		len++;
	des = malloc(sizeof(char) * (len + 1));
	len = 0;
	while (src[len])
	{
		des[len] = src[len];
		len++;
	}
	des[len] = '\0';
	return (des);
}
