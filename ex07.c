#include <stdio.h>

int main () {
    
    int numero; 
    printf("INSERISCI UN NUMERO\n");
    scanf("%d", &numero);
    int b= numero%2;
    if ( b==0) {
        printf("IL NUMERO è PARI\n");
    }
    else {
        printf("IL NUMERO è DISPARI");
    }
return 0;
} 

