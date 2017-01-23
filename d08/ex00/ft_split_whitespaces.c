/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 21:28:41 by xbai              #+#    #+#             */
/*   Updated: 2017/01/19 22:07:01 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_number(char *str)
{
	int		nb;
	int		i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		nb++;
	}
	return (nb);
}

char	*first_str(char *str, int *stridx)
{
	int		wordidx;
	int		start;
	char	*res;
	int		end;

	start = *stridx;
	wordidx = start;
	while (str[wordidx] != ' ' && str[wordidx] != '\t' && str[wordidx] != '\n')
		if (str[wordidx] != '\0')
			wordidx++;
		else
			break ;
	end = wordidx;
	while (str[wordidx] == ' ' || str[wordidx] == '\t' || str[wordidx] == '\n')
		wordidx++;
	*stridx = wordidx;
	wordidx = -1;
	res = (char*)malloc(end - start + 1);
	while (++wordidx < end - start)
		res[wordidx] = str[start + wordidx];
	res[wordidx] = '\0';
	return (res);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		stridx;
	int		word_nb;
	int		j;

	word_nb = ft_count_number(str);
	res = (char**)malloc(sizeof(char*) * (word_nb + 1));
	stridx = 0;
	j = 0;
	while (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		str++;
	while (str[stridx] != '\0')
		res[j++] = first_str(str, &stridx);
	res[j] = 0;
	return (res);
}
