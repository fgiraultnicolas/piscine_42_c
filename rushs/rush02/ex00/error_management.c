/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballote <aballote@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:58:58 by aballote          #+#    #+#             */
/*   Updated: 2026/09/27 21:38:47 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_HEADER.h"

int	arg_error(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (!(argv[1]) || !(argv[2]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	error(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (!(nb[i] >= '0' && nb[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	dict_error(int nb)
{
	if (nb == -1)
	{
		write (1, "Dict Error\n", 11);
		return (0);
	}
	else
		return (1);
}

int	formatting_error(int i, char *str)
{
	int	number_cond;
	int	split_cond;

	number_cond = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || i == 0)
			split_cond = 0;
		if ((i == 0 || str[i - 1] == '\n')
			&& (!((str[i] >= '0' && str[i] <= '9') || str[i] == '\n')))
			return (-1);
		else if ((str[i] >= '0' && str[i] <= '9') && split_cond == 0)
			number_cond = 1;
		if (number_cond == 1 && (!((str[i + 1] >= '0' && str[i + 1] <= '9')
					|| str[i + 1] == ':'
					|| str[i + 1] == ' ')) && split_cond == 0)
			return (-1);
		if (str[i + 1] == ':')
		{
			number_cond = 0;
			split_cond = 1;
		}
		i++;
	}
	return (1);
}
