/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:14:34 by pedfousi          #+#    #+#             */
/*   Updated: 2025/03/10 21:14:51 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> // Para usar printf

int main(void)
{
    int count_ft;
    int count_std;

    // Prueba con cadenas simples
    count_ft = ft_printf("Hola, mundo!\n");
    count_std = printf("Hola, mundo!\n");
    ft_printf("ft_printf caracteres impresos: %d\n", count_ft);
    printf("printf caracteres impresos: %d\n", count_std);

    // Comparación con diferentes formatos
    ft_printf("Caracter: %c\n", 'A');
    printf("Caracter: %c\n", 'A');

    ft_printf("Cadena: %s\n", "Esto es una prueba");
    printf("Cadena: %s\n", "Esto es una prueba");

    ft_printf("Puntero: %p\n", (void *)main);
    printf("Puntero: %p\n", (void *)main);

    ft_printf("Entero: %d\n", 42);
    printf("Entero: %d\n", 42);

    ft_printf("Unsigned: %u\n", 123456);
    printf("Unsigned: %u\n", 123456);

    ft_printf("Hexadecimal (minúsculas): %x\n", 255);
    printf("Hexadecimal (minúsculas): %x\n", 255);

    ft_printf("Hexadecimal (mayúsculas): %X\n", 255);
    printf("Hexadecimal (mayúsculas): %X\n", 255);

    ft_printf("Porcentaje: %%\n");
    printf("Porcentaje: %%\n");

    // Pruebas límite
    ft_printf("Cadena vacía: %s\n", "");
    printf("Cadena vacía: %s\n", "");

    ft_printf("Puntero NULL: %p\n", NULL);
    printf("Puntero NULL: %p\n", NULL);

    ft_printf("Entero mínimo: %d\n", -2147483648);
    printf("Entero mínimo: %d\n", -2147483648);

    ft_printf("Entero máximo: %d\n", 2147483647);
    printf("Entero máximo: %d\n", 2147483647);

    ft_printf("Unsigned máximo: %u\n", 4294967295);
    printf("Unsigned máximo: %u\n", 4294967295);

    ft_printf("Hexadecimal máximo (minúsculas): %x\n", 4294967295);
    printf("Hexadecimal máximo (minúsculas): %x\n", 4294967295);

    ft_printf("Hexadecimal máximo (mayúsculas): %X\n", 4294967295);
    printf("Hexadecimal máximo (mayúsculas): %X\n", 4294967295);

    return 0;
}
