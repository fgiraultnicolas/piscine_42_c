/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:29:37 by fgirault          #+#    #+#             */
/*   Updated: 2026/10/01 19:37:08 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	sqrt = 1;
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
	printf("%d\n", ft_sqrt(1));
	return (0);
}*/
