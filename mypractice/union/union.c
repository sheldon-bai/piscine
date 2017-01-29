/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 20:20:14 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 20:34:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	char	table[30];
	char	*str1;
	char	*str2;
	int		cnt;
	int		i;
	int		found;

	if (argc != 3)
		ft_putchar('\n');
	else
	{
		cnt = 0;
		str1 = argv[1];
		str2 = argv[2];
		while (*str1)
		{
			found = 0;
			i = 0;
			while(i < cnt)
			{
				if (*str1 == table[i])
					found = 1;
				i++;
			}
			if (found == 0)
				table[cnt++] = *str1;
			str1++;
		}
		while (*str2)
		{
			found = 0;
			i = 0;
			while (i < cnt)
			{
				if (*str2 == table[i])
					found = 1;
				i++;
			}
			if (found == 0)
				table[cnt++] = *str2;
			str2++;
		}
		if (cnt == 0)
			ft_putchar('\n');
		else
		{
			table[cnt + 1] = '\0';
			ft_putstr(table);
		}
	}
	return (0);
}
