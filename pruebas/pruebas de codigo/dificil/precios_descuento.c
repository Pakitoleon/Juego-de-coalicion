/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precios_descuento.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:34:05 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/05/01 10:34:05 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main ()
{
	int p;
	int i;
	int r;

	printf ("introduce el precio \n");
	scanf ("%d", &p);
	printf ("introduce el descuento \n");
	scanf ( "%d", &i);
	i = (i * p) / 100;
	r = p - i;
	printf ("tu descuento es de %d \n", i);
	printf ("El resultado a pagar es %d \n", r);
}