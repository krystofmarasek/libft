/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:41:46 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/22 14:04:23 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	while (n--)
		*p++ = 0;
}
/*
int	main(void)
{
	char str[50] = "Hello world";
	printf("Original string: %s\n", str);
	ft_bzero(str, 7);
	printf("Modified string: %s\n", str);
	return (0);
}
*/
