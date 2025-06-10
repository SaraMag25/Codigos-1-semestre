#include <stdlib.h>
#include <stdio.h>

#define N 14

int L[N] = {97,5, 1, 88, 4, 1, 66, 11, 35, 98, 28, 91, 40, 1};

int resp;

int main() {
int resp = -1;
int j = 0;
int a = 0;
int i;
for(i = 0; i < N; i++){
  if (L[i] == 1){
    a = i;
    break;
  }

}
for(int j = a + 1; j < N; j++){
  if (L[j] == 1){
    int c = j - a -1;
    if (c > resp){
      resp = c;
    }
    a = j;
  }
} 
printf("%d\n", resp);
return 0;
}