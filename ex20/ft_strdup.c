/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NEMO <NEMO@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:45:19 by NEMO              #+#    #+#             */
/*   Updated: 2026/09/22 20:24:51 by NEMO             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new_str;

	i = 0;
	len = ft_strlen(src) + 1;
	new_str = malloc(len);
	if (new_str == NULL)
		return (NULL);
	while (i < len - 1)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
