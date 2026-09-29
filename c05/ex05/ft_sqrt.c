/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:29:37 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/22 12:42:47 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) != nb)
	{
		if (sqrt == nb / 2)
			return (0);
		sqrt++;
	}
	return (sqrt);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	return (0);
}*/
