/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:17:03 by laugusto          #+#    #+#             */
/*   Updated: 2024/12/10 15:50:10 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	get_next_line(int fd)
{
	int		byte_files;
	char	*char_buffer;

	char_buffer = ft_calloc(3 + 1, sizeof(char));
	if (char_buffer == NULL)
		return (NULL);
	fd = read(fd, char_buffer, 3);
	return (char_buffer);
}
