#include <stdio.h>

void ft_fattoriale (int nb) 
{
    int res= 1;
    
    if(nb <0) {
        printf("errore");
    }

    while (nb>1 && nb>0) {
    res*=nb;
    nb--;
}
printf("%d", res);
}

int main () {
    int nb;
    scanf("%d", &nb);
   ft_fattoriale (nb);
    return 0;


}