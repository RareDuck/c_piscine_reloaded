/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:43:55 by ayague-a          #+#    #+#             */
/*   Updated: 2025/07/17 10:50:22 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((int) s1[i] - s2[i]);
}

/*
int	main(void)
{
	char *a = "Angel";
	char *b = "AngeL";
	
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(a, a));
	printf("%d\n", ft_strcmp(b, a));
}
*/
