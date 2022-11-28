/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:09:27 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/28 18:47:47 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		find_linebreaker(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
