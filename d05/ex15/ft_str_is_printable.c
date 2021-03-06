/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <xbai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:54:10 by xbai              #+#    #+#             */
/*   Updated: 2017/01/17 23:21:30 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_print(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(is_print(str[i])))
			return (0);
		i++;
	}
	return (1);
}
