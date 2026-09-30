/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:48:19 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/30 19:13:18 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen_split(char *str, char *charset, int i)
{
	while (*str != '\0')
	{
		i = 0;
		while (charset[i] != '\0')
		{
			if (charset[i] == *str)
				count++;
			i++;
		}
		if ()
		str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;

	split_str = malloc(sizeof(char) * strlen_split(str, charset, 0));
}
