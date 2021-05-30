/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PRIMOS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlee-tsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:36:09 by wlee-tsa          #+#    #+#             */
/*   Updated: 2021/05/30 19:36:32 by wlee-tsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Retornar o maior fator primo de um numero.

#include <stdio.h>
#include <stdlib.h>

int primos(int n){
    int a,b,i;
    b = n;
    int cont=0;
    int V[10];
    for (a=0;b!=a;b--)
    {
        if (n % b == 0)
        {
                V[cont] = b;
                cont++;
        }
    }
    int c,maior,menor;
    int resultado=0;
    int contador=0;
    int P[10];
    for (i=0;i<cont;i++)
    {           
        for (c = 2; c <= V[i] / 2; c++) {
        if (V[i] % c == 0) 
        {
        resultado++;
        }
        }
        if (resultado == 0) 
        {
        P[contador] = V[i];
        contador++;
        }
        resultado=0;
    }
    for (i=0;i<contador;i++)
    {
        if (i==0)
        {
            maior=P[i];
            menor=P[i];
        }
        else 
        {
            if (maior<P[i])
            {
                maior=P[i];
            }
            else if (menor>P[i])
            {
                menor=P[i];
            }
        }
    }
return maior;
}
}
