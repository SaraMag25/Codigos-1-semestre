
#include <stdlib.h>
#include <stdio.h>



int a = 4, b = 2, c = 5, d = 8;




int main() {
int troca = 0;
  if (a > b){
    troca = a; a = b; b = troca;
  }
  if (a > c){
    troca = a; a = c; c = troca;
  }
  if (a > d){
    troca = a; a = d; d = troca;
  }
  
  if (b > c){
    troca = b; b = c; c = troca;
  }
  if (b > d){
    troca = b; b = d; d = troca;
  }

  if (c > d){
    troca = c; c = d; d = troca;
  }
}
