/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:59:45 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/14 14:05:10 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abc";
	int		result = ft_strcmp(str1, str2);

	if (result == 0)
		printf("equal\n");
	else if (result < 0)
		printf("str1 less than str2\n");
	else
		printf("str1 greater than str2\n");

	return (0);
}*/
