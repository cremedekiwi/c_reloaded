/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:01:12 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 17:13:39 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*array;
	unsigned int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 5;
	int max = 10;

	int *result = ft_range(min, max);

	if (result == NULL)
		printf("Error");
	else
	{
		int	i = 0;
		while (i < max - min)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	return (0);
}*/
