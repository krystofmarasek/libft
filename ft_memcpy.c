/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:35:25 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/22 14:55:33 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char* d = dest;
	const char* s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Hello World";
	char dest[sizeof src];
	ft_memcpy(dest, src, sizeof src);
	printf("dest: %s\n", dest);
	return (0);
}
*/
