/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:26:33 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/16 11:35:04 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_putnbr(int num)
{
	printf("%d ", num);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length = sizeof(tab) / sizeof(tab[0]);
	ft_foreach(tab, length, &ft_putnbr);
	return (0);
}*/
