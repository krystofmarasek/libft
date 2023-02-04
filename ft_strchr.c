/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:54:09 by kmarasek          #+#    #+#             */
/*   Updated: 2023/02/03 15:35:10 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("The outpus is: %s\n", ft_strchr("Krystof", 'a'));
	return (0);
}
*/
