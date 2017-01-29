/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 19:46:33 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 20:17:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int		len;
	int		start;
	int		end;
	int		i;

	len = ft_strlen(str);
	if (len < 1)
		ft_putchar('\n');
	end = len - 1;
	while ((str[end] == ' ' || str[end] == '\t') && end > 0)
		end--;
	if ((str[end] == ' ' || str[end] == '\t') && end == 0)
	{
		ft_putchar('\n');
		return ;
	}
		start = end;
		while ((str[start] != ' ' && str[start] != '\t') && start > 0)
			start--;
		if ((str[start] != ' ' && str[start] != '\t') && start == 0)
			i = start;
		else
			i = start + 1;
		while (i <= end)
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		last_word(argv[1]);
	return (0);
}
