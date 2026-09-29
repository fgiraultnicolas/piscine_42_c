/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_manip.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballote <aballote@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:31:26 by aballote          #+#    #+#             */
/*   Updated: 2026/09/27 22:24:58 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FT_HEADER.h"

int	flen(char *content, int bytes_read, int total_size, char *path)
{
	char	buff_tmp[855];
	char	*content_tmp;
	int		descriptor;

	content = malloc(sizeof(char));
	descriptor = open(path, O_RDONLY)
		if (!(dict_error(descriptor)))
		return (-1);
	bytes_read = read(open(path, O_RDONLY), buff_tmp, 854);
	while (bytes_read > 0)
	{
		printf("%d\n", bytes_read);
		buff_tmp[bytes_read] = '\0';
		content_tmp = malloc(sizeof(char) * (total_size + bytes_read + 1));
		content_tmp = ft_strcpy(content_tmp, content);
		content_tmp = ft_strcat(content_tmp, buff_tmp);
		total_size += bytes_read;
		bytes_read = read(open(path, O_RDONLY), buff_tmp, 854);
	}
	free(content);
	descriptor = close(descriptor);
	if (!(dict_error(descriptor)))
		return (-1);
	return (total_size);
}

char	*read_dictionary(char *content, char *pathdict)
{
	int		descriptor;
	char	*buffer;
	int		size;

	size = flen(content, 0, 0, pathdict);
	buffer = malloc(sizeof(char) * (size + 1));
	descriptor = open(pathdict, O_RDONLY);
	if (!(dict_error(descriptor)))
		return (0);
	if (!(dict_error(read(descriptor, buffer, size))))
		return (0);
	buffer[size + 1] = '\0';
	if (!(dict_error(close(descriptor))))
		return (0);
	return (delete_space(0, 0, 0, buffer));
}
