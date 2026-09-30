/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_HEADER.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballote <aballote@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 10:46:34 by aballote          #+#    #+#             */
/*   Updated: 2026/09/27 21:48:07 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		arg_error(int argc, char **argv);
int		formatting_error(int i, char *str);
char	*read_dictionary(char *content, char *pathdict);
int		flen(char *content, int bytes_read, int total_size, char *path);
char	*delete_space(char *str);
void	sort_dictionary(int argc, char **str);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		dict_error(int nb);
int		error(char *nb);

#endif
