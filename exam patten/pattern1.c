#include <stdio.h>

int main() {
	
    int i,k;  
    int num = 41;

    for (i = 0; i < 5; i++) {
       
        for (k = 0; k <= i; k++) {
            printf("%d ", num + k); 
        }
        printf("\n"); 
    }

    return 0;
}
