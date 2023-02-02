/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:55:24 by kmarasek          #+#    #+#             */
/*   Updated: 2023/02/02 12:02:09 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
int	main(void)
{
	printf("This is the output of 'C' %c:\n", ft_tolower('C'));
	printf("This is the output of 'c' %c:\n", ft_tolower('c'));
	printf("This is the output of '+' %c:\n", ft_tolower('+'));
}
*/
