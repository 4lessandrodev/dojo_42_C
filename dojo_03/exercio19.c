#include<stdio.h>

int main(void)
{
    printf("Digite a distancia percorrida em km: ");
    scanf("%f",&km);
    printf("Digite a quantidade total de litros: ");
    scanf("%f",&l);
    result = km / l;
    if (result < 8)
    {
        printf("Venda o carro!");
    }
    else {
        if (result > 8 && result < 14){
            printf("Econonico!")
        }
        else {
            if (restul >= 14){
                printf("Super econonico!")
            }
        }
    }
    return (0);
}