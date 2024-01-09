 #include <stdio.h>

 int main () {
    
    int a; 
    printf("QUANTI ANNI HAI?\n");
    scanf("%d", &a);

    if (a>17) {
        printf("PUOI PRENDERE LA PATENTE IN ITALIA\n");
    }
    else 
    {
        printf("NON PUOI PRENDERE LA PATENTE IN ITALIA\n");
    }
return 0;
} 