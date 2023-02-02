/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarasek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:55:19 by kmarasek          #+#    #+#             */
/*   Updated: 2023/01/21 13:28:32 by kmarasek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('7'));
	printf("%d", ft_isdigit('A'));
	printf("%d", ft_isdigit('?'));
}
*/
