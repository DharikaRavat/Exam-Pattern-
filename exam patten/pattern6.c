#include <stdio.h>

int main() {
	
    int i,j,k=5; 

    for (i = 1; i <= k; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = 1; j <= 2*(k-i); j++) {
            printf(" ");
        }

        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
    
        printf("\n"); 
    }

    return 0;
}
