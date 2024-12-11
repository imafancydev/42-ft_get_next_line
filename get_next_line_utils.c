/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:17:06 by laugusto          #+#    #+#             */
/*   Updated: 2024/12/10 23:40:52 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int search_str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == search_str)
			return ((char *)str);
		str++;
	}
	if (search_str == '\0')
		return ((char *)str);
	return (0);
}

ssize_t	ft_strlen(const char *str)
{
	ssize_t	size;

	size = 0;
	if (str == NULL)
		return (0);
	while (str[size])
		size++;
	return (size);
}
