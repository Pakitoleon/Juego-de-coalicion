/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leia.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:11:02 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/29 15:11:02 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int main ()
{
	int code;
	int h;
	int d;
	int m;	

	m = 60;
	h = (m * 1);
	d = (h * 24);
	code = (d / h);
	printf ("escribe los día \n");
	scanf ("%d", &d);
	printf ("el resultado es %d.\n",d * code);
}
