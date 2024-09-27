/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:16:25 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/16 15:09:52 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
		{
			arg = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = arg;
			j--;
		}
		i++;
	}
	ft_print_args(argc, argv);
	return (0);
}
