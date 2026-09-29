/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:07:28 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/29 18:52:43 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*var;

	i = 0;
	var = malloc(sizeof(t_stock_str) * (ac + 1));
	if (var == 0)
	{
		free(var);
		return (0);
	}
	while (i < ac)
	{
		var[i].size = ft_strlen(av[i]);
		var[i].str = av[i];
		var[i].copy = malloc(sizeof(char) * (ft_strlen(var[i].str) + 1));
		if (var[i].copy == 0)
		{
			free(var[i].copy);
			return (0);
		}
		var[i].copy = ft_strcpy(var[i].copy, var[i].str);
		i++;
	}
	var[i].str = 0;
	return (var);
}
