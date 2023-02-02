/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:05:37 by kmarasek          #+#    #+#             */
/*   Updated: 2023/02/02 12:12:41 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}
/*
int	main(void)
{
	printf("This is output of 'C': %c\n", ft_toupper('C'));
	printf("This is output of 'c': %c\n", ft_toupper('c'));
	printf("This is output of '+': %c\n", ft_toupper('+'));
}
*/
