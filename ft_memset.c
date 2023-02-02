/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:35:57 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/22 13:10:54 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
//*s = string | c = character replacement | n =  nb of char to replace
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
/*
int	main(void)
{
	char str[50] = "Hello World!";
	printf("Original string: %s\n", str);
	ft_memset(str, 42, 4);
	printf("Modified string: %s\n", str);
	return (0);
}
*/
