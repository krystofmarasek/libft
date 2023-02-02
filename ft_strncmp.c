/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:54:13 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/22 12:13:52 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "hello";
	char s2[] = "hello world";
	int n = 6;

	int result = ft_strncmp(s1, s2, n);

	if (result == 0)
		printf("The first %d characters of both strings are equal. \n", n);
	else if (result < 0)
		printf("The first %d characters of s1 are less than the first %d characters of s2.\n", n, n);
	else
		printf("The first %d characters of s1 are greater than the first %d characters of s2.\n", n, n);

	return (0);		
}
*/
