#include <stdio.h>

int main () {
    int numero;
    int somma = 0;
    int conteggio = 0;
    printf("inserisci un numero intero positivo (inserisci un numero intero negativo per terminare):");
    scanf("%d", &numero);
    while (numero>=0) {
        somma+=numero;
        conteggio += 1;
        float media = (float)somma / conteggio;
        printf("media attuale: %.2f\n", media);

        printf("inserisci un numero intero positivo (inserisci un numero negativo per terminare):");
        scanf("%d", &numero);
    }

    printf("programma terminato.\n");

    return 0;
}