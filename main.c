/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:11:23 by ttavares          #+#    #+#             */
/*   Updated: 2022/11/29 14:28:55 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	int		file1;
	int		file2;
	int		file3;
	int		i;

	i = 0;
	file1 = open("test1.txt", O_RDONLY);
	file2 = open("test2.txt", O_RDONLY);
	file3 = open("test3.txt", O_RDONLY);
	printf("File1 -|%s|", get_next_line(file1));
	printf("File2 -|%s|", get_next_line(file2));
	printf("File3 -|%s|", get_next_line(file3));
	printf("File1 -|%s|", get_next_line(file1));
	printf("File2 -|%s|", get_next_line(file2));
	printf("File3 -|%s|", get_next_line(file3));
	printf("File1 -|%s|", get_next_line(file1));
	printf("File2 -|%s|", get_next_line(file2));
	printf("File3 -|%s|", get_next_line(file3));
	printf("File1 -|%s|", get_next_line(file1));
	printf("File2 -|%s|", get_next_line(file2));
	printf("File3 -|%s|", get_next_line(file3));
	printf("File1 -|%s|", get_next_line(file1));
	printf("File2 -|%s|", get_next_line(file2));
	printf("File3 -|%s|", get_next_line(file3));
	return (0);
}
