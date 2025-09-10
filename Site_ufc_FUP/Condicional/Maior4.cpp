// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10

int a = 4, b = 2, c = 5, d = 8; 
int maior;




int main() {
maior = a;
if (b > maior) maior=b;
if (c > maior) maior=c;
if (d > maior) maior=d;
printf("%d", maior);


}
