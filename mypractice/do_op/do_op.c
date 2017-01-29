/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 19:26:18 by exam              #+#    #+#             */
/*   Updated: 2017/01/28 15:22:47 by xbai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		do_op(int a, char *op, int b)
{
	if (*op == '+')
		return (a + b);
	else if (*op == '-')
		return (a - b);
	else if (*op == '*')
		return (a * b);
	else if (*op == '/')
		return (a / b);
	else if (*op == '%')
		return (a % b);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		res;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	res = 0;
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = do_op(a, argv[2], b);
	printf("%d\n", res);
	return (0);
}
