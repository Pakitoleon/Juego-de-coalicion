/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:37:41 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:38:03 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		c = c - 32;
	}
	return (c);
}

int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper(' '));
}
