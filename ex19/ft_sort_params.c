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

void		ft_putchar(char c);
static void	ft_sort(char **list, int size);
static int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	ft_sort(argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

static void	ft_sort(char **list, int size)
{
	int		is_ordered;
	int		i;
	char	*temp;

	is_ordered = 0;
	i = 1;
	while (is_ordered == 0)
	{
		is_ordered = 1;
		i = 1;
		while (i + 1 < size)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				is_ordered = 0;
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
			i++;
		}
	}
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((int) s1[i] - s2[i]);
}
