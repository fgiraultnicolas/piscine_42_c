/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:16:53 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/24 17:19:40 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	*j;

	i = malloc(sizeof(int) * (max - min));
	j = i;
	if (min >= max)
		return (0);
	while (min < max)
	{
		*i = min;
		min++;
		i++;
	}
	return (j);
}

/*int	main(void)
{
	int	*k;
	int	test;

	k = ft_range(13, 26);
	test = 0;
	while (test <= 12)
	{
		printf("%d\n", *k);
		test++;
		k++;
	}
	return (0);
}*/
