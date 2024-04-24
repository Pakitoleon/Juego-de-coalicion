/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:10:43 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:11:50 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strn;

	strn = (unsigned char *)s;
	while (n--)
		*strn++ = '\0';
}

int	main(void)
{
	const char a[] = "hola";
	ft_bzero(a, 2);
}
// a = /0/0la/0
