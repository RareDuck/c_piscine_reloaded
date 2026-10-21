/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:26:20 by NEMO              #+#    #+#             */
/*   Updated: 2026/09/23 17:12:02 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	num = nb * ft_recursive_factorial(nb - 1);
	if (num > 0)
		return (num);
	return (0);
}

// void main(void)
// {
// 	int i;

// 	i = -4;
// 	while (i < 20)
// 	{
// 		printf("%d!	= %d\n", i, ft_recursive_factorial(i));
// 		i++;
// 	}
// }
