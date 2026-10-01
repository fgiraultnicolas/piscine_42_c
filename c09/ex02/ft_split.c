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

int	strlen_split(char *str, char *charset, int split_count, int j)
{
	int	i;
	int	count;

	count = 0;
	while (str[j] != '\0')
	{
		i = 0;
		if (split_count == 1 && str[j + 1] == '\0')
			count++;
		while (charset[i] != '\0')
		{
			if (charset[i] == str[j] && split_count == 0)
				split_count = 1;
			else if (charset[i] != str[j] && split_count == 1)
			{
				split_count = 0;
				count++;
			}
			i++;
		}
		j++;
	}
	return (count);
}

char	**pre_split(char *str, char *charset, char **split_str, int split_count)
{
	int	i;
	int	j;

	j = 0;
	while (j < strlen_split(str, charset, 0, 0))
	{
		i = 0;
		while (charset[i] != '\0')
		{
			if (charset[i] == *str && split_count == 0)
				split_count = 1;
			else if (charset[i] != *str && split_count == 1)
			{
				split_count = 0;
				split_str[j] = str;
				j++;
			}
			i++;
		}
		str++;
	}
	split_str[j] = 0;
	return (split_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;

	split_str = malloc(sizeof(char) * (strlen_split(str, charset, 0, 0)));
	if (split_str == 0)
		return (0);
	return (pre_split(str, charset, split_str, 0));
}

#include <stdio.h>

int	main(void)
{
	char	*str = "Bijour, test1,test2 test3 -test4";
	char	*charset = ", -";
	char **output;
	int	i;

	output = ft_split(str, charset);
	i = 0;
	while (i <= strlen_split(str, charset, 0, 0))
	{
		printf("%s\n", output[i]);
		i++;
	}
	return (0);
}
