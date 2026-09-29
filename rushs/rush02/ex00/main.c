/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 09:39:28 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/27 21:40:28 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_HEADER.h"

int	main(int argc, char **argv)
{
	char	*dict;
	char	content[1];

	content[0] = '\0';
	if (!(arg_error))
		return (0);
	if (error(argv[argc - 1]))
	{
		if (argc == 3)
		{
			dict = read_dictionary(content, argv[argc - 2]);
			if (!(dict_error(formatting_error(0, dict))))
				return (0);
		}
		else
		{
			dict = read_dictionary(content, "./numbers.dict");
			if (!(dict_error(formatting_error(0, dict))))
				return (0);
		}
	}
	return (0);
}
