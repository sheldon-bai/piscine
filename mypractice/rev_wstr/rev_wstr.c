/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:32:00 by exam              #+#    #+#             */
/*   Updated: 2017/01/27 21:59:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_reverse_str(char *str)
{
	int		len;
	char	c;
	int		i;
	int		j;
	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}

int		main(int argc, char **argv)
{
	int		len;
	char	*str;
	int		i;
	char	temp[20];
	int		j;

	if (argc != 2)
		ft_putchar('\n');
	else
	{
		len = ft_strlen(argv[1]);
		str = malloc(sizeof(char) * (len + 1));
		i = len - 1;
		while (i >= 0)
		{
			*str = argv[1][i];
			str++;
			i--;
		}
		*str = '\0';
		str = str - len + 1;
		i = 0;
		j = 0;
		while (i < len)
		{
			while (str[i] != ' ' && str[i] != '\t')
			{
				temp[j++] = str[i++];
			}
			temp[j] = '\0';
			ft_reverse_str(temp);
			ft_putstr(temp);
			j = 0;
			while (str[i] == ' ' || str[i] == '\t')
			{
				ft_putchar(' ');
				i++;
			}
		}
		ft_putchar('\n');
	}
	return (0);
}
