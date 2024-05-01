/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_dni.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:19:51 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/28 13:19:51 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Por favor, introduce la fecha (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int code = (dia + mes + ano) % 10000;

    printf("Tu codigo es %04d.\n", code);

    return 0;
}
