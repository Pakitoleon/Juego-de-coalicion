/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:13:04 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:14:10 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)

{
	char	c;
	char	result;

	c = '*';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	c = 'A';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	c = ' ';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	return (0);
}