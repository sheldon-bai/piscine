/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:19:28 by xbai              #+#    #+#             */
/*   Updated: 2017/01/19 15:29:46 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		argidx;
	int		residx;
	int		len;
	int		reslen;

	argidx = -1;
	len = 0;
	reslen = 0;
	while (++argidx < argc)
		len += ft_strlen(argv[argidx]) + 1;
	res = (char*)malloc(sizeof(char) * len);
	argidx = 0;
	while (++argidx < argc)
	{
		residx = -1;
		while (++residx < ft_strlen(argv[argidx]))
			res[residx + reslen] = argv[argidx][residx];
		res[residx + reslen] = '\n';
		reslen += residx + 1;
	}
	res[reslen - 1] = '\0';
	return (res);
}
