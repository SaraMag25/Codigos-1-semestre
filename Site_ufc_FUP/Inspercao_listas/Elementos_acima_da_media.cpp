// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

int mm;

// -- escreva seu código abaixo, não altere esta linha



int main() {
int i;
float media;
float soma = 0.0;

for (i=0; i < N-1; i++)
  soma = L[i] + soma;
media = soma / N;
for (i=0; i < N-1; i++)
 	if (L[i] > media){
    	mm++;
  	}
}
