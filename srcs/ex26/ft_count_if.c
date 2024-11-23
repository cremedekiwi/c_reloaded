/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:55:04 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/16 12:18:20 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != 0)
	{
		if (f(*tab))
			count++;
		tab++;
	}
	return (count);
}
/*
#include <stdio.h>

int	is_even_length(char *str)
{
	int	len = 0;
	while (str[len] != '\0')
		len++;
	return (len % 2  == 0);
}

int	main(void)
{
	char	*arr[] = {"apple", "banana", "orange", "pear"};
	int	count = ft_count_if(arr, is_even_length);
	printf("Number : %d\n", count);

	return (0);
}*/
