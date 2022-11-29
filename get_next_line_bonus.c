/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:13:58 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/29 11:57:13 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/* Formats stash to remove previous recovered line, keeping
only the necessary excess after \n for next get_next_line call */

char	*format_stash(char	*stash)
{
	int		i;
	int		stashlenght;
	char	*formatedstash;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free (stash);
		return (0);
	}
	stashlenght = ft_strlen(stash);
	formatedstash = malloc (sizeof(char) * (stashlenght - i + 1));
	if (!formatedstash)
		return (0);
	i++;
	ft_strlcpy(formatedstash, stash + i, stashlenght - i + 1);
	free (stash);
	return (formatedstash);
}

/* Retrieves a formated line from the stashed buffer*/

char	*format_line(char *stash)
{
	int		i;
	char	*formatedline;

	i = 0;
	if (!stash[i])
		return (0);
	while (stash[i] && stash[i] != '\n')
		i++;
	i++;
	formatedline = malloc (sizeof(char) * (i + 1));
	if (!formatedline)
		return (0);
	ft_strlcpy(formatedline, stash, i + 1);
	return (formatedline);
}

/*Reads and stashes function in static var while no new line is found*/

char	*read_stash(int fd, char *stash)
{
	char	*buffer;
	int		bytesread;

	bytesread = 1;
	buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	while (find_linebreaker(stash) == 0 && bytesread != 0)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread == -1)
		{
			free(buffer);
			return (0);
		}
		buffer[bytesread] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[FOPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd > FOPEN_MAX)
		return (0);
	stash[fd] = read_stash(fd, stash[fd]);
	if (!stash[fd])
		return (0);
	line = format_line(stash[fd]);
	stash[fd] = format_stash(stash[fd]);
	return (line);
}
