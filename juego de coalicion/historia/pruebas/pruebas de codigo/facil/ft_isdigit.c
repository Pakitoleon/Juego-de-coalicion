/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:14:52 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:15:37 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;
	char	result;

	c = '*';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	c = '1';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	c = '+';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	return (0);
}