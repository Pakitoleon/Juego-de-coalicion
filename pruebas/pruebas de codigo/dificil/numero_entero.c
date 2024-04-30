/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_entero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:43:20 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/04/28 12:43:20 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    int numero;

    printf("Por favor, introduce un número entero: ");
    scanf("%d", &numero);

    printf("Has introducido el número %d.\n", numero);

    return 0;
}
