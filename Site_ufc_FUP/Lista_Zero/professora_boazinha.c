#include <stdlib.h>
#include <stdio.h>

// -- escreva seu código abaixo dessa linha  --- (e não altere esta linha)

int main()
{
    float p1, p2, p3, media, menor;
    scanf("%f %f %f", &p1, &p2, &p3);
    menor = p1;
    if (p2 < menor)
        menor = p2;
    if (p3 < menor)
        menor = p3;
    media = (p1 + p2 + p3 - menor) / 2;
    if (media >= 6)
    {
        printf("Aprovado com media %f", media);
    }
    else
    {
        printf("Reprovado com media %f", media);
    }
}
