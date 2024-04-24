/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:25:44 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/24 10:10:09 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char		dest[20];
	const char	*src;
	size_t		size;
	size_t		result;

	{
		src = "Hello, World!";
		size = sizeof(dest);
		result = ft_strlcpy(dest, src, size);
		printf("Copied string: %s\n", dest);
		printf("Length of source string: %lu\n", result);
	}
	return (0);
}
