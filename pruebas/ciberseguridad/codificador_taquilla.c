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

int main()
{
    int dia, mes, ano;
    int minimo;
    int maximo;

    minimo = 149;
    maximo = 161;
    printf("Por favor, introduce la fecha (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int sum = (dia + mes + ano);
     int result = 149 + (sum % 13);

    if (result != -1) {
        printf("Tu taquilla es %04d.\n", result);
    } else {
        printf("No Puedes pasar, todo lo que sabias hasta ahora esta equivocado.\n");
    }

    return 0;
}
