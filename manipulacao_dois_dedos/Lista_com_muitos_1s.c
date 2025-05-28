#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};

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