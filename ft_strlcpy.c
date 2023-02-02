/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:43:56 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/21 14:55:55 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		srclen;
	size_t		len;
	char		*d;
	const char	*s;

	srclen = 0;
	*d = *dst;
	s = src;
	while (src[srclen])
		srclen++;
	if (dstsize)
	{
		if (srclen < dstsize - 1)
			len = srclen;
		else
			len = dstsize - 1;
		while (len--)
			*d++ = *s++;
		*d = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char dst[5];
	char src[] = "hello";
	printf("%lu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%s\n", dst);
	return (0);
}
*/
