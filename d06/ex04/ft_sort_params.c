/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:36:00 by xbai              #+#    #+#             */
/*   Updated: 2017/01/18 23:56:01 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	if ((!s1) || (!s2))
		return (-1);
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strsort(int nb, char **str)
{
	int		min;
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < nb - 1)
	{
		min = i;
		j = i + 1;
		while (j <= nb - 1)
		{
			if (ft_strcmp(str[min], str[j]) > 0)
				min = j;
			j++;
		}
		temp = str[min];
		str[min] = str[i];
		str[i] = temp;
		i++;
	}
	i = 1;
	while (++i < nb)
		ft_putstr(str[i]);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (argc == 2)
		{
			ft_putstr(argv[1]);
			ft_putchar('\n');
			return (0);
		}
		ft_strsort(argc, argv);
	}
	return (0);
}
