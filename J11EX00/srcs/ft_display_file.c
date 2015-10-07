/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:12:35 by schiad            #+#    #+#             */
/*   Updated: 2015/07/23 16:21:10 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_SIZE 4096

void ft_display_file(int fd)
{
	char	buf[BUF_SIZE];
	int		ret;

	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr_fd(1, buf);
}
