/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:23:48 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 16:57:30 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(char *src)
{
	int		length;
	char	*result;

	length = 0;
	while (src[length])
		length++;
	result = malloc(sizeof(char) * length + 1);
	length = 0;
	while (src[length])
	{
		result[length] = src[length];
		length++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_strdup("abc");
	printf("%s\n", result);
	return (0);
}*/
