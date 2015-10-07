/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:28:01 by schiad            #+#    #+#             */
/*   Updated: 2015/07/23 15:46:55 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int main (int argc, char **argv)
{
	int fd;

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	fd = open(argv [1], O_RDONLY);
	if (fd == -1)
		write(1, "open() failed\n", 14);
	else
	{
		ft_display_file(fd);
	}
	return (0);
}
