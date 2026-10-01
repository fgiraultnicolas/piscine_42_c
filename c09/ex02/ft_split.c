/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:48:19 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/01 18:18:09 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	strlen_split(char *str, char *charset, int count)
{
	while (*str != '\0')
	{
		while (is_sep(*str, charset) == 1)
			str++;
		count++;
		while (is_sep(*str, charset) == 0)
			str++;
	}
	return (count);
}

int	word_len(char *str, char *charset, int len)
{
	while (is_sep(*str, charset) == 0)
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;

	if (str == 0 || charset == 0)
		return (0);
	split_str = malloc(sizeof(char *) * (strlen_split(str, charset, 0) + 1));
	if (split_str == 0)
	{
		free(split_str);
		return (0);
	}
	while (*str != '\0')
	{
		while (is_sep(*str, charset) == 1)
			str++;
		*split_str = malloc(sizeof(char) * (word_len(str, charset, 0) + 1));
		if (*split_str == 0)
		{
			free(*split_str);
			return (0);
		}
		while (is_sep(*str, charset) == 0)
		{
			**split_str = *str;
			(*split_str)++;
			str++;
		}
		**split_str = '\0';
		split_str++;
	}
	*split_str = 0;
	return (split_str);
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
	while (i <= strlen_split(str, charset, 0))
	{
		printf("%s\n", output[i]);
		i++;
	}
	return (0);
}
