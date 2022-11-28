/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:11:23 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/28 18:58:43 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		file;
	char	*line;
	int		i;

	i = 0;
	file = open("test.txt", O_RDONLY);
	line = get_next_line(file);
	printf("%s", line);
	return (0);
}
