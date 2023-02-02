/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:12:36 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/21 13:28:08 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isascii('K'));
	printf("%d", ft_isascii('k'));
	printf("%d", ft_isascii('5'));
	printf("%d", ft_isascii('?'));
	printf("%d", ft_isascii(400));
}
*/
