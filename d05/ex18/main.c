/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 16:40:22 by xbai              #+#    #+#             */
/*   Updated: 2017/01/22 16:50:13 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int siez);

int		main()
{
	char dest[20] = "asdef";
	char *src = "bxd";
	int res = ft_strlcat(dest, src, 6);
	printf("%s\n", dest);
	printf("%d\n", res);
	return (0);
}
