/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:29:48 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 11:36:40 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 5;
	int	b = 10;

	printf("a : %d, b : %d\n", a, b);
	ft_swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);
	return (0);
}*/
