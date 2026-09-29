/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:24:23 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/22 10:13:07 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	const_nb;

	i = 2;
	const_nb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i <= power)
	{
		nb *= const_nb;
		i++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 5));
	return (0);
}*/
