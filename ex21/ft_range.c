/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NEMO <NEMO@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:26:29 by NEMO              #+#    #+#             */
/*   Updated: 2026/09/22 20:50:59 by NEMO             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	while (min + i < max)
		i++;
	range = malloc(i * 4);
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
