/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:36:02 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 12:48:45 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		if (factorial < 0)
			return (0);
		i++;
	}
	return (factorial);
}
/*
#include <stdio.h>

int	main()
{
	int	number = 5;
	int result = ft_iterative_factorial(number);
	if (result != 0)
		printf("Factorial of %d is %d\n", number, result);
	return (0);
}*/
