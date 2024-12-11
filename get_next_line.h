/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:17:08 by laugusto          #+#    #+#             */
/*   Updated: 2024/12/11 00:03:22 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

ssize_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strjoin(char *line, char *buff);
char	*ft_line_to_buff(char *line);
char	*ft_read_new_line(char *line);
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *line);

#endif