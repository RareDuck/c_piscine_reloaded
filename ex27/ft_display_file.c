/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:24:43 by NEMO              #+#    #+#             */
/*   Updated: 2026/09/23 20:51:03 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_display_file(char *path)
{
	int		fd;
	char	c;
	int		sec;

	fd = open(path, O_RDONLY);
	sec = 1;
	c = 'a';
	sec = read(fd, &c, 1);
	if (sec == -1)
	{
		ft_puterr("Cannot read file.\n");
		return (-1);
	2}
	while (sec == 1)
	{
		if (sec == 1)
			ft_putchar(c);
		sec = read(fd, &c, 1);
	}
	close(fd);
	return (0);
}
