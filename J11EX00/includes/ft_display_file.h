/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 14:39:29 by schiad            #+#    #+#             */
/*   Updated: 2015/07/23 16:12:54 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display_file(int fd);
int		ft_strlen(char *str);
void	ft_putstr_fd(int fd, char *str);

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# include <unistd.h>
# include <fcntl.h>

#endif
