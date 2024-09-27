/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:40:03 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 11:45:59 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Div : %d, Mod : %d\n", div, mod);
	return (0);
}*/
