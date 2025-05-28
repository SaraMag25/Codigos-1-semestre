#include <stdlib.h>
#include <stdio.h>

#define N 10

int L[N] = {1,2,3,4,5,6,7,8,9,10};
int resp;

int main() {
    resp = 0; 

    int j = 2;
    for (int i = 0; j < N; i++, j = i + 2) {
        if (L[i] < L[j]) {
            resp = 1;
            break; 
        }
    }

    printf("%d\n", resp);

    return 0;
}
