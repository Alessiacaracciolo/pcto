 #include <stdio.h>

int main () {
    
    int numero1; 
    printf("INSERISCI IL PRIMO NUMERO\n");
    scanf("%d", &numero1);
    
    int numero2;
    printf("INSERISCI IL SECONDO NUMERO\n");
    scanf("%d", &numero2);

    if (numero1%numero2) {
        printf("IL  PRIMO NUMERO è MULTIPLO DEL SECONDO\n");
    }
    else {
        printf("IL  PRIMO NUMERO NON è MULTIPLO DEL SECONDO\n");
    }
return 0;
} 