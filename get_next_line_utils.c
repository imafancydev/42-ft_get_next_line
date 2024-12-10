/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:17:06 by laugusto          #+#    #+#             */
/*   Updated: 2024/12/10 15:51:55 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*items;
	size_t	i;

	i = nmemb * size;
	if ((nmemb) && (i) && ((i / nmemb) != size))
		return ((char *) NULL);
	items = malloc(i);
	if (!items)
		return (0);
	ft_bzero(items, i);
	return (items);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		str[n - 1] = '\0';
		n--;
	}
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
