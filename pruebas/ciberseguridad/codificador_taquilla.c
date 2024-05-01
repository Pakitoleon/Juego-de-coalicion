/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codificador_taquilla.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:15:33 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/29 12:15:33 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#include <stdio.h>

int main()
{
    int dia, mes, ano;
    int minimo;
    int maximo;

    minimo = 1;
    maximo = 191;
    printf("Por favor, introduce la fecha (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int sum = (dia + mes + ano) % 100;
    int code = (sum >= minimo && sum <= maximo) ? sum : -1;

    if (code != -1) {
        printf("Tu taquilla es %04d.\n", code);
    } else {
        printf("La suma de la fecha no está en el rango permitido.\n");
    }

    return 0;
}