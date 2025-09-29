#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

float media;

// -- escreva seu código abaixo desta linha --- (e não altere esta linha)



int main() {
int i;
float soma = 0.0;  
for (i = 0; i < N; i++)
  soma = L[i] + soma;
media = soma / N;
}
