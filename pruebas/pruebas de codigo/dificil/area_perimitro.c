/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area_perimitro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:11:26 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/30 11:11:26 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"stdio.h"

int main ()
{
	int h;
	int b;
	int p;
	int a;

	printf ("escribe el tamaño de la altura \n");
	scanf("%d", &h);
	printf ("escribe el tamaño de la base \n");
	scanf ("%d", &b);

	p = (h *2 + b *2);
	a = (h * b);
	printf ("el perimetro es %d \n", p);
	printf ( "el area es %d \n", a);
}
