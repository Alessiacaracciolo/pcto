#include <stdio.h>

int main () {
    float celsius;
    printf("inserisci la temperratura in gradi celsius\n");
    scanf("%f", &celsius);
   
    
    float fahrenheit= (9/5)*celsius+32;
   
    float kelvin= celsius+(273.15);
  

    if(celsius>=-273.15) {
        printf("%f\n", fahrenheit);
        printf("%f\n", kelvin);

    }
    else {
        printf ("error\n");
    }

    return 0;
}