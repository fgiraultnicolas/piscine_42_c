/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballote <aballote@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:56:22 by aballote          #+#    #+#             */
/*   Updated: 2026/09/27 23:19:17 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_HEADER.h"

char	*delete_space(int split_cond, int i, int j, char *str)
{
	char	*nospace;

	nospace = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if ((str[i] == ' ' && split_cond != 2)
			|| (str[i] == '\n' && (str[i + 1] == '\n')))
			i++;
		else
		{
			if (str[i] == ':')
				split_cond = 1;
			else if (split_cond == 1 && str[i] != ' ')
				split_cond = 2;
			else if (str[i] == '\n')
				split_cond = 0;
			nospace[j] = str[i];
			i++;
			j++;
		}
	}
	nospace[j] = '\0';
	return (nospace);
}

/*void	sort_dictionary(int argc, char **str)
{
	int	i;
	int	swap;
	char	*temp;
	
	i = 0;
	swap = 1;
	while(swap == 1)
	{
		swap = 0;
		i = 1;
		while (i > argc - 1)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}*/
