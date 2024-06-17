#include <stdio.h> 
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 5) {
        for (int i = 0; i < N; ++i) {
            printf("I");
        }
    } else {
        printf("IIIII");
    }
    printf("\n");

    if (N <= 5) {
        printf("*\n");
    } else {
        for (int i = 0; i < N - 5; ++i) {
            printf("I");
        }
        printf("\n");
    }

    return 0;
}
