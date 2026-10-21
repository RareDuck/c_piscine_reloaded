/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:25:19 by NEMO              #+#    #+#             */
/*   Updated: 2026/09/23 19:55:51 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	err;

	err = 0;
	if (argc == 1)
	{
		ft_puterr("File name missing.\n");
		return (-1);
	}
	else if (argc > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (-1);
	}
	else
		err = ft_display_file(argv[1]);
	return (err);
}
