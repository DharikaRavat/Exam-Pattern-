#include <stdio.h>

int main() {

    int i,j;

    for (i = 5; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf("  "); 
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", j % 2); 
        }

        printf("\n"); 
    }

    return 0;
}